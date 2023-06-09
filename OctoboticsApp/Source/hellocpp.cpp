#include "hellocpp.h"
#include <QDebug>
#include "include.h"
#include "QDateTime"

static void cb_new_pad (GstElement *element, GstPad *pad, gpointer data)
{
    gchar *name;
    name = gst_pad_get_name (pad);
    // Setup a new pad link for the newly created pad
    GstElement *dpay = GST_ELEMENT(data);

    // try to link the pads then ...
    if(!gst_element_link_pads(element, name, dpay, "sink"))
    {
        printf("Failed to rtp-source with rtp-depay1\n");
    }

    g_free(name);
}
static void cb_new_pad2 (GstElement *element, GstPad *pad, gpointer data)
{
    gchar *name;
    name = gst_pad_get_name (pad);
    // Setup a new pad link for the newly created pad
    GstElement *dpay = GST_ELEMENT(data);

    // try to link the pads then ...
    if(!gst_element_link_pads(element, name, dpay, "sink"))
    {
        printf("Failed to rtp-source with rtp-depay2\n");
    }

    g_free(name);
}
HelloCpp::HelloCpp(QObject *parent) :
QObject(parent)
{
    qDebug() << " start init ()";
    recording = false;
    recording2 = false;
    gst_init(NULL, NULL);

    pipeline1 = gst_pipeline_new("gstreamer-pipeline1");
    pipeline2 = gst_pipeline_new("gstreamer-pipeline2");

    source1 = gst_element_factory_make("rtspsrc", "source");
    source2 = gst_element_factory_make("rtspsrc", "source");


    qDebug() << " start step 1";
    g_object_set(source1, "location", "rtsp://10.223.240.0:8554/cam1", NULL);
    g_object_set(source2, "location", "rtsp://10.223.240.0:8554/cam2", NULL);
//    g_object_set(source2, "location", "rtsp://wowzaec2demo.streamlock.net/vod/mp4:BigBuckBunny_115k.mp4", NULL);
    qDebug() << " start step 2";
    queue1 = gst_element_factory_make("queue", "queue1");
    dpay1 = gst_element_factory_make( "rtph264depay", "depayl1");
    parse1 = gst_element_factory_make("h264parse", "parse1");
    decoder1 = gst_element_factory_make("nvh264dec", "nvdecoder1");
    overlay1 = gst_element_factory_make("clockoverlay", "overlay1");
    decoder2 = gst_element_factory_make("nvh264dec", "nvdecoder2");

    queue3 = gst_element_factory_make("queue", "queue3");
    dpay2 = gst_element_factory_make( "rtph264depay", "depayl2");
    parse3 = gst_element_factory_make("h264parse", "parse3");
    overlay2 = gst_element_factory_make("clockoverlay", "overlay2");
    qDebug() << " start step 3";
    g_object_set(overlay1, "time-format", "%D %H:%M:%S", NULL);
    g_object_set(overlay2, "time-format", "%D %H:%M:%S", NULL);

    sink1 = gst_element_factory_make("fakesink", "sink1");
    sink3 = gst_element_factory_make("fakesink", "sink3");

    qDebug() << " start step 4";
    g_object_set(sink1, "sync", false, NULL);
    g_object_set(sink3, "sync", false, NULL);

    qDebug(" start step 5 %x, %x, %x, %x, %x, decoder:%x, %x, %x", pipeline2, source2, queue3, dpay2, parse3, decoder2, overlay2, sink3);
    tee1 = gst_element_factory_make("tee", "tee1");
    tee2 = gst_element_factory_make("tee", "tee2");

    if (!pipeline1 || !source1 || !queue1 || !dpay1 || !parse1 || !decoder1 || !overlay1 || !sink1) {
      std::cout << "one element in the display branch didn't initialize 1" << std::endl;
      exit(0);
    }
    if (!pipeline2 || !source2 || !queue3 || !dpay2 || !parse3 || !decoder2 || !overlay2 || !sink3) {
      std::cout << "one element in the display branch didn't initialize" << std::endl;
      exit(0);
    }

    qDebug() << " start step end";

    // Build root and display branch of the pipeline.
    gst_bin_add_many(GST_BIN(pipeline1), source1, dpay1, queue1, parse1, decoder1, overlay1, sink1, tee1, NULL);
    gst_bin_add_many(GST_BIN(pipeline2), source2, dpay2, queue3, parse3, decoder2, overlay2, sink3, tee2, NULL);

    qDebug() << "binadd step passed";

    g_signal_connect(source1, "pad-added", G_CALLBACK(cb_new_pad), dpay1);
    if (!gst_element_link_many (tee1, queue1, sink1, NULL)) {
        std::cout << "tee didn't link to display branch" << std::endl;
        gst_object_unref(pipeline1);
        exit(0);
    }
    g_signal_connect(source2, "pad-added", G_CALLBACK(cb_new_pad2), dpay2);
    if (!gst_element_link_many (tee2, queue3, sink3, NULL)) {
        std::cout << "tee didn't link to display branch" << std::endl;
        gst_object_unref(pipeline2);
        exit(0);
    }

    qDebug() << "signal step passed";

    if (!gst_element_link_many (dpay1, parse1, decoder1, overlay1, tee1, NULL)) {
        std::cout << "one element in root branch didn't link1" << std::endl;
        gst_object_unref(pipeline1);
        exit(0);
    }

    if (!gst_element_link_many (dpay2, parse3, decoder2, overlay2, tee2, NULL)) {
        std::cout << "one element in root branch didn't link2" << std::endl;
        gst_object_unref(pipeline2);
        exit(0);
    }


    qDebug() << "link step passed";

    gst_element_set_state (pipeline1, GST_STATE_PLAYING);
    gst_element_set_state (pipeline2, GST_STATE_PLAYING);

}

void HelloCpp::gstRecord()
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
    templ = gst_element_class_get_pad_template(GST_ELEMENT_GET_CLASS(tee1), "src_%u");
    teepad1 = gst_element_request_pad(tee1, templ, NULL, NULL);
    queue2 = gst_element_factory_make("queue", "queue2");
    encoder1 = gst_element_factory_make("nvh264enc", "nvencoder1");
    parse2 = gst_element_factory_make("h264parse", "parse2");
    mux1 = gst_element_factory_make("qtmux", "muxer1");
    sink2 = gst_element_factory_make("filesink", "sink2");
    g_object_set(sink2, "location", filename.c_str(), NULL);
    if (!queue2 || !encoder1 || !parse2 || !mux1 || !sink2 || !tee1) {
      std::cout << "one element in the encoder branch didn't initialize" << std::endl;
      exit(0);
    }

    // rebuild encoding branch
    gst_bin_add_many(GST_BIN(pipeline1), queue2, encoder1, parse2, mux1, sink2,NULL);
    if (!gst_element_link_many (queue2, encoder1, parse2, mux1, sink2, NULL)) {
        std::cout << "tee didn't link to encoding branch" << std::endl;
        gst_object_unref(pipeline1);
        exit(0);
    }

    gst_element_sync_state_with_parent(queue2);
    gst_element_sync_state_with_parent(encoder1);
    gst_element_sync_state_with_parent(parse2);
    gst_element_sync_state_with_parent(mux1);
    gst_element_sync_state_with_parent(sink2);

    // relink tee to encoding branch
    sinkpad = gst_element_get_static_pad(queue2, "sink");
    gst_pad_link(teepad1, sinkpad);
    gst_object_unref(sinkpad);

    recording = true;
}



void HelloCpp::gstRecord2()
{
    if(recording2)
        return;
    GstPad *sinkpad2;
    GstPadTemplate *templ2;

    // create string identifier
    std::ostringstream ss2;
    ss2 << std::setw(2) << std::setfill('0') << counter2++;
    fileId = ss2.str();
    qDebug() << QDateTime::currentDateTime().toString("yyyy-MM-dd-hh:mm:ss-").toLocal8Bit();

    const char *s2 = QDateTime::currentDateTime().toString("yyyy-MM-dd-hh:mm:ss-").toLocal8Bit();
    std::string qdate = s2;
    std::string filename = "cam2_"+ qdate + fileId + ".mp4";
    std::cout << "start recording:: " << filename << std::endl;

    // reinitialize the recording branch
    templ2 = gst_element_class_get_pad_template(GST_ELEMENT_GET_CLASS(tee2), "src_%u");
    teepad2 = gst_element_request_pad(tee2, templ2, NULL, NULL);
    queue4 = gst_element_factory_make("queue", "queue4");
    encoder2 = gst_element_factory_make("nvh264enc", "nvencoder2");
    parse4 = gst_element_factory_make("h264parse", "parse4");
    mux2 = gst_element_factory_make("qtmux", "muxer2");
    sink4 = gst_element_factory_make("filesink", "sink4");
    g_object_set(sink4, "location", filename.c_str(), NULL);
    if (!queue4 || !encoder2 || !parse4 || !mux2 || !sink4 || !tee2) {
      std::cout << "one element in the encoder branch didn't initialize" << std::endl;
      exit(0);
    }

    // rebuild encoding branch
    gst_bin_add_many(GST_BIN(pipeline2), queue4, encoder2, parse4, mux2, sink4,NULL);
    if (!gst_element_link_many (queue4, encoder2, parse4, mux2, sink4, NULL)) {
        std::cout << "tee didn't link to encoding branch2" << std::endl;
        gst_object_unref(pipeline2);
        exit(0);
    }

    gst_element_sync_state_with_parent(queue4);
    gst_element_sync_state_with_parent(encoder2);
    gst_element_sync_state_with_parent(parse4);
    gst_element_sync_state_with_parent(mux2);
    gst_element_sync_state_with_parent(sink4);

    // relink tee to encoding branch
    sinkpad2 = gst_element_get_static_pad(queue4, "sink");
    gst_pad_link(teepad2, sinkpad2);
    gst_object_unref(sinkpad2);

    recording2 = true;
}

void HelloCpp::gstStop()
{
    if(!recording)
        return;
    // unlink recording branch
    GstPad *sinkpad;
    sinkpad = gst_element_get_static_pad (queue2, "sink");
    gst_pad_unlink (teepad1, sinkpad);
    gst_object_unref (sinkpad);

    // stop running all the elements in recording branch
    gst_element_send_event(encoder1, gst_event_new_eos());
    gst_element_set_state(queue2, GST_STATE_NULL);
    gst_element_set_state(encoder1, GST_STATE_NULL);
    gst_element_set_state(parse2, GST_STATE_NULL);
    gst_element_set_state(mux1, GST_STATE_NULL);
    gst_element_set_state(sink2, GST_STATE_NULL);
    gst_bin_remove(GST_BIN (pipeline1), queue2);
    gst_bin_remove(GST_BIN (pipeline1), encoder1);
    gst_bin_remove(GST_BIN (pipeline1), parse2);
    gst_bin_remove(GST_BIN (pipeline1), mux1);
    gst_bin_remove(GST_BIN (pipeline1), sink2);

    //release pads
    gst_element_release_request_pad (tee1, teepad1);
    gst_object_unref (teepad1);
    recording = false;
}
void HelloCpp::gstStop2()
{
    if(!recording2)
        return;
    // unlink recording branch
    GstPad *sinkpad2;
    sinkpad2 = gst_element_get_static_pad (queue4, "sink");
    gst_pad_unlink (teepad2, sinkpad2);
    gst_object_unref (sinkpad2);

    // stop running all the elements in recording branch
    gst_element_send_event(encoder2, gst_event_new_eos());
    gst_element_set_state(queue4, GST_STATE_NULL);
    gst_element_set_state(encoder2, GST_STATE_NULL);
    gst_element_set_state(parse4, GST_STATE_NULL);
    gst_element_set_state(mux2, GST_STATE_NULL);
    gst_element_set_state(sink4, GST_STATE_NULL);
    gst_bin_remove(GST_BIN (pipeline2), queue4);
    gst_bin_remove(GST_BIN (pipeline2), encoder2);
    gst_bin_remove(GST_BIN (pipeline2), parse4);
    gst_bin_remove(GST_BIN (pipeline2), mux2);
    gst_bin_remove(GST_BIN (pipeline2), sink4);

    //release pads
    gst_element_release_request_pad (tee2, teepad2);
    gst_object_unref (teepad2);
    recording2 = false;
}

