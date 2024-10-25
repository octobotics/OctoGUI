#include "gststream.h"
#include <QDebug>
#include "QDateTime"
#include "Source/include.h"


static void cb_new_pad (GstElement *element, GstPad *pad, gpointer data)
{
    gchar *name;
    name = gst_pad_get_name (pad);
    // Setup a new pad link for the newly created pad
    GstElement *dpay = GST_ELEMENT(data);

    // try to link the pads then ...
    if(!gst_element_link_pads(element, name, dpay, "sink"))
    {
        printf("Failed to rtp-source with rtp-depay\n");
    }

    g_free(name);
}

gstStream::gstStream(QObject *parent) : QObject(parent)
{

    qDebug() << " start init ()";
    recording = false;
    gst_init(NULL, NULL);

    pipeline = gst_pipeline_new("gstreamer-pipeline");
    source = gst_element_factory_make("rtspsrc", "source");

    qDebug() << " start step 1";
    g_object_set(source, "location", "rtsp://wowzaec2demo.streamlock.net/vod/mp4:BigBuckBunny_115k.mp4", NULL);

    qDebug() << " start step 2";
    queue1 = gst_element_factory_make("queue", "queue1");
    dpay = gst_element_factory_make( "rtph264depay", "depayl");
    parse1 = gst_element_factory_make("h264parse", "parse1");
    decoder = gst_element_factory_make("nvh264dec", "nvdecoder");
    overlay = gst_element_factory_make("clockoverlay", "overlay");

    qDebug() << " start step 3";
    g_object_set(overlay, "time-format", "%D %H:%M:%S", NULL);
    sink1 = gst_element_factory_make("fakesink", "sink1");

    qDebug() << " start step 4";
    g_object_set(sink1, "sync", false, NULL);

    qDebug(" start step 5 %x, %x, %x, %x, %x, decoder:%x, %x, %x", pipeline, source, queue1, dpay, parse1, decoder, overlay, sink1);
    tee = gst_element_factory_make("tee", "tee");
    if (!pipeline || !source || !queue1 || !dpay || !parse1 || !decoder || !overlay || !sink1) {
      std::cout << "one element in the display branch didn't initialize" << std::endl;
      exit(0);
    }

    qDebug() << " start step end";

    // Build root and display branch of the pipeline.
    gst_bin_add_many(GST_BIN(pipeline), source, dpay, queue1, parse1, decoder, overlay, sink1, tee, NULL);

    qDebug() << "binadd step passed";

    g_signal_connect(source, "pad-added", G_CALLBACK(cb_new_pad), dpay);
    if (!gst_element_link_many (tee, queue1, sink1, NULL)) {
        std::cout << "tee didn't link to display branch" << std::endl;
        gst_object_unref(pipeline);
        exit(0);
    }

    qDebug() << "signal step passed";

    if (!gst_element_link_many (dpay, parse1, decoder, overlay, tee, NULL)) {
        std::cout << "one element in root branch didn't link" << std::endl;
        gst_object_unref(pipeline);
        exit(0);
    }

    qDebug() << "link step passed";

    gst_element_set_state (pipeline, GST_STATE_PLAYING);


}

void gstStream::gstRecord()
{
    if(recording)
        return;
    GstPad *sinkpad;
    GstPadTemplate *templ;

    // create string identifier
    std::ostringstream ss;
    ss << std::setw(2) << std::setfill('0') << counter++;
    fileId = ss.str();
    qDebug() << QDateTime::currentDateTime().toString("yyyy-MM-dd-hh:mm:ss-").toLocal8Bit();

    const char *s = QDateTime::currentDateTime().toString("yyyy-MM-dd-hh:mm:ss-").toLocal8Bit();
    std::string qdate = s;
    std::string filename = qdate + fileId + ".mp4";
    std::cout << "start recording:: " << filename << std::endl;

    // reinitialize the recording branch
    templ = gst_element_class_get_pad_template(GST_ELEMENT_GET_CLASS(tee), "src_%u");
    teepad = gst_element_request_pad(tee, templ, NULL, NULL);
    queue2 = gst_element_factory_make("queue", "queue2");
    encoder = gst_element_factory_make("nvh264enc", "nvencoder");
    parse2 = gst_element_factory_make("h264parse", "parse2");
    mux = gst_element_factory_make("qtmux", "muxer");
    sink2 = gst_element_factory_make("filesink", "sink2");
    g_object_set(sink2, "location", filename.c_str(), NULL);
    if (!queue2 || !encoder || !parse2 || !mux || !sink2 || !tee) {
      std::cout << "one element in the encoder branch didn't initialize" << std::endl;
      exit(0);
    }

    // rebuild encoding branch
    gst_bin_add_many(GST_BIN(pipeline), queue2, encoder, parse2, mux, sink2,NULL);
    if (!gst_element_link_many (queue2, encoder, parse2, mux, sink2, NULL)) {
        std::cout << "tee didn't link to encoding branch" << std::endl;
        gst_object_unref(pipeline);
        exit(0);
    }

    gst_element_sync_state_with_parent(queue2);
    gst_element_sync_state_with_parent(encoder);
    gst_element_sync_state_with_parent(parse2);
    gst_element_sync_state_with_parent(mux);
    gst_element_sync_state_with_parent(sink2);

    // relink tee to encoding branch
    sinkpad = gst_element_get_static_pad(queue2, "sink");
    gst_pad_link(teepad, sinkpad);
    gst_object_unref(sinkpad);

    recording = true;

}

void gstStream::gstStop()
{
    if(!recording)
        return;
    // unlink recording branch
    GstPad *sinkpad;
    sinkpad = gst_element_get_static_pad (queue2, "sink");
    gst_pad_unlink (teepad, sinkpad);
    gst_object_unref (sinkpad);

    // stop running all the elements in recording branch
    gst_element_send_event(encoder, gst_event_new_eos());
    gst_element_set_state(queue2, GST_STATE_NULL);
    gst_element_set_state(encoder, GST_STATE_NULL);
    gst_element_set_state(parse2, GST_STATE_NULL);
    gst_element_set_state(mux, GST_STATE_NULL);
    gst_element_set_state(sink2, GST_STATE_NULL);
    gst_bin_remove(GST_BIN (pipeline), queue2);
    gst_bin_remove(GST_BIN (pipeline), encoder);
    gst_bin_remove(GST_BIN (pipeline), parse2);
    gst_bin_remove(GST_BIN (pipeline), mux);
    gst_bin_remove(GST_BIN (pipeline), sink2);

    //release pads
    gst_element_release_request_pad (tee, teepad);
    gst_object_unref (teepad);
    recording = false;


}

