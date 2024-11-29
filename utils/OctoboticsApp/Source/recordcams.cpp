///*!
// *  \file      recordcams.cpp
// *  \brief     record camera class.
// *  \details   This class is used to record rtsp pipelines from the cameras.
// *  \author    Charith Reddy
// *  \copyright Copyright (C) 2022 Octobotics Tech Pvt. Ltd. All Rights Reserved.
//                Do not remove this copyright notice.
//                Do not use, reuse, copy, merge, publish, sub-license, sell, distribute or modify this code - except without explicit,
//                written permission from Octobotics Tech Pvt. Ltd.
//                Contact connect@octobotics.tech for full license information.

// *  \todo      remove duplicating the code and condense into a single pipeline
// *  \warning   Improper use can crash the application
// */

//#include <QDebug>
//#include "include2.h"
//#include "QDateTime"
//#include "recordcams.h"


///*!
// * \brief cb_new_pad callback pad for the third pipeline
// */
//static void cb_new_pad3(GstElement *element, GstPad *pad, gpointer data)
//{
//    gchar *name;
//    name = gst_pad_get_name (pad);
//    // Setup a new pad link for the newly created pad
//    GstElement *dpay = GST_ELEMENT(data);

//    // try to link the pads then ...
//    if(!gst_element_link_pads(element, name, dpay, "sink"))
//    {
//        printf("Failed to rtp-source with rtp-depay1\n");
//    }

//    g_free(name);
//}
///*!
// * \brief cb_new_pad2 callback pad for fourth pipeline
// */
//static void cb_new_pad4 (GstElement *element, GstPad *pad, gpointer data)
//{
//    gchar *name;
//    name = gst_pad_get_name (pad);
//    // Setup a new pad link for the newly created pad
//    GstElement *dpay = GST_ELEMENT(data);

//    // try to link the pads then ...
//    if(!gst_element_link_pads(element, name, dpay, "sink"))
//    {
//        printf("Failed to rtp-source with rtp-depay2\n");
//    }

//    g_free(name);
//}
///*!
// * \brief recordCams::recordCams constructor and pipeline declaration
// * \param parent
// */
//recordCams::recordCams(QObject *parent) :
//QObject(parent)
//{
//    qDebug() << " start init ()";
//    recording3= false;
//    recording4 = false;
//    gst_init(NULL, NULL);

//    pipeline3 = gst_pipeline_new("gstreamer-pipeline3");
//    pipeline4 = gst_pipeline_new("gstreamer-pipeline4");

//    source3 = gst_element_factory_make("rtspsrc", "source");
//    source4 = gst_element_factory_make("rtspsrc", "source");


//    qDebug() << " start step 1";
////    g_object_set(source3, "location", "rtsp://wowzaec2demo.streamlock.net/vod/mp4:BigBuckBunny_115k.mp4", NULL);
//    g_object_set(source4, "location", "rtsp://wowzaec2demo.streamlock.net/vod/mp4:BigBuckBunny_115k.mp4", NULL);
//    g_object_set(source3, "location", "rtsp://10.223.240.0:8554/cam3", NULL);
//    qDebug() << " start step 2";
//    queue3 = gst_element_factory_make("queue", "queue3");
//    dpay3 = gst_element_factory_make( "rtph264depay", "depayl1");
//    parse3 = gst_element_factory_make("h264parse", "parse3");
//    decoder3 = gst_element_factory_make("nvh264dec", "nvdecoder3");
//    overlay3 = gst_element_factory_make("clockoverlay", "overlay3");
//    decoder4 = gst_element_factory_make("nvh264dec", "nvdecoder4");

//    queue5 = gst_element_factory_make("queue", "queue5");
//    dpay4 = gst_element_factory_make( "rtph264depay", "depayl2");
//    parse5 = gst_element_factory_make("h264parse", "parse5");
//    overlay4 = gst_element_factory_make("clockoverlay", "overlay4");
//    qDebug() << " start step 3";
//    g_object_set(overlay3, "time-format", "%D %H:%M:%S", NULL);
//    g_object_set(overlay4, "time-format", "%D %H:%M:%S", NULL);

//    sink3 = gst_element_factory_make("fakesink", "sink3");
//    sink5 = gst_element_factory_make("fakesink", "sink5");

//    qDebug() << " start step 4";
//    g_object_set(sink3, "sync", false, NULL);
//    g_object_set(sink5, "sync", false, NULL);

//    qDebug(" start step 5 %x, %x, %x, %x, %x, decoder:%x, %x, %x", pipeline4, source4, queue5, dpay4, parse5, decoder4, overlay4, sink5);
//    tee3 = gst_element_factory_make("tee", "tee3");
//    tee4 = gst_element_factory_make("tee", "tee4");

//    if (!pipeline3 || !source3 || !queue3 || !dpay3 || !parse3 || !decoder3 || !overlay3 || !sink3) {
//      std::cout << "one element in the display branch didn't initialize 1" << std::endl;
//      exit(0);
//    }
//    if (!pipeline4 || !source4 || !queue5 || !dpay4 || !parse5 || !decoder4 || !overlay4 || !sink5) {
//      std::cout << "one element in the display branch didn't initialize" << std::endl;
//      exit(0);
//    }

//    qDebug() << " start step end";

//    // Build root and display branch of the pipeline.
//    gst_bin_add_many(GST_BIN(pipeline3), source3, dpay3, queue3, parse3, decoder3, overlay3, sink3, tee3, NULL);
//    gst_bin_add_many(GST_BIN(pipeline4), source4, dpay4, queue5, parse5, decoder4, overlay4, sink5, tee4, NULL);

//    qDebug() << "binadd step passed";

//    g_signal_connect(source3, "pad-added", G_CALLBACK(cb_new_pad3), dpay3);
//    if (!gst_element_link_many (tee3, queue3, sink3, NULL)) {
//        std::cout << "tee didn't link to display branch" << std::endl;
//        gst_object_unref(pipeline3);
//        exit(0);
//    }
//    g_signal_connect(source4, "pad-added", G_CALLBACK(cb_new_pad4), dpay4);
//    if (!gst_element_link_many (tee4, queue5, sink5, NULL)) {
//        std::cout << "tee didn't link to display branch" << std::endl;
//        gst_object_unref(pipeline4);
//        exit(0);
//    }

//    qDebug() << "signal step passed";

//    if (!gst_element_link_many (dpay3, parse3, decoder3, overlay3, tee3, NULL)) {
//        std::cout << "one element in root branch didn't link1" << std::endl;
//        gst_object_unref(pipeline3);
//        exit(0);
//    }

//    if (!gst_element_link_many (dpay4, parse5, decoder4, overlay4, tee4, NULL)) {
//        std::cout << "one element in root branch didn't link2" << std::endl;
//        gst_object_unref(pipeline4);
//        exit(0);
//    }


//    qDebug() << "link step passed";

//    gst_element_set_state (pipeline3, GST_STATE_PLAYING);
//    gst_element_set_state (pipeline4, GST_STATE_PLAYING);

//}
///*!
// * \brief HelloCpp::gstRecord records the video from the third pipeline
// */
//void recordCams::gstRecord3()
//{
//    if(recording3)
//        return;
//    GstPad *sinkpad;
//    GstPadTemplate *templ;

//    // create string identifier
//    std::ostringstream ss;
//    ss << std::setw(2) << std::setfill('0') << counter3++;
//    fileId2 = ss.str();
//    qDebug() << QDateTime::currentDateTime().toString("yyyy-MM-dd-hh:mm:ss-").toLocal8Bit();

//    const char *s = QDateTime::currentDateTime().toString("yyyy-MM-dd-hh:mm:ss-").toLocal8Bit();
//    std::string qdate = s;
//    std::string filename = "cam3_" + qdate + fileId2 + ".mp4";
//    std::cout << "start recording:: " << filename << std::endl;

//    // reinitialize the recording3branch
//    templ = gst_element_class_get_pad_template(GST_ELEMENT_GET_CLASS(tee3), "src_%u");
//    teepad3 = gst_element_request_pad(tee3, templ, NULL, NULL);
//    queue4 = gst_element_factory_make("queue", "queue4");
//    encoder3 = gst_element_factory_make("nvh264enc", "nvencoder3");
//    parse4 = gst_element_factory_make("h264parse", "parse4");
//    mux3 = gst_element_factory_make("qtmux", "muxer1");
//    sink4 = gst_element_factory_make("filesink", "sink4");
//    g_object_set(sink4, "location", filename.c_str(), NULL);
//    if (!queue4 || !encoder3 || !parse4 || !mux3 || !sink4 || !tee3) {
//      std::cout << "one element in the encoder branch didn't initialize" << std::endl;
//      exit(0);
//    }

//    // rebuild encoding branch
//    gst_bin_add_many(GST_BIN(pipeline3), queue4, encoder3, parse4, mux3, sink4,NULL);
//    if (!gst_element_link_many (queue4, encoder3, parse4, mux3, sink4, NULL)) {
//        std::cout << "tee didn't link to encoding branch" << std::endl;
//        gst_object_unref(pipeline3);
//        exit(0);
//    }

//    gst_element_sync_state_with_parent(queue4);
//    gst_element_sync_state_with_parent(encoder3);
//    gst_element_sync_state_with_parent(parse4);
//    gst_element_sync_state_with_parent(mux3);
//    gst_element_sync_state_with_parent(sink4);

//    // relink tee to encoding branch
//    sinkpad = gst_element_get_static_pad(queue4, "sink");
//    gst_pad_link(teepad3, sinkpad);
//    gst_object_unref(sinkpad);

//    recording3= true;
//}


///*!
// * \brief HelloCpp::gstRecord records the video from the fourth pipeline
// */
//void recordCams::gstRecord4()
//{
//    if(recording4)
//        return;
//    GstPad *sinkpad2;
//    GstPadTemplate *templ2;

//    // create string identifier
//    std::ostringstream ss2;
//    ss2 << std::setw(2) << std::setfill('0') << counter4++;
//    fileId2 = ss2.str();
//    qDebug() << QDateTime::currentDateTime().toString("yyyy-MM-dd-hh:mm:ss-").toLocal8Bit();

//    const char *s2 = QDateTime::currentDateTime().toString("yyyy-MM-dd-hh:mm:ss-").toLocal8Bit();
//    std::string qdate = s2;
//    std::string filename = "cam4_"+ qdate + fileId2 + ".mp4";
//    std::cout << "start recording:: " << filename << std::endl;

//    // reinitialize the recording3branch
//    templ2 = gst_element_class_get_pad_template(GST_ELEMENT_GET_CLASS(tee4), "src_%u");
//    teepad4 = gst_element_request_pad(tee4, templ2, NULL, NULL);
//    queue6 = gst_element_factory_make("queue", "queue6");
//    encoder4 = gst_element_factory_make("nvh264enc", "nvencoder4");
//    parse6 = gst_element_factory_make("h264parse", "parse6");
//    mux4 = gst_element_factory_make("qtmux", "muxer2");
//    sink6 = gst_element_factory_make("filesink", "sink6");
//    g_object_set(sink6, "location", filename.c_str(), NULL);
//    if (!queue6 || !encoder4 || !parse6 || !mux4 || !sink6 || !tee4) {
//      std::cout << "one element in the encoder branch didn't initialize" << std::endl;
//      exit(0);
//    }

//    // rebuild encoding branch
//    gst_bin_add_many(GST_BIN(pipeline4), queue6, encoder4, parse6, mux4, sink6,NULL);
//    if (!gst_element_link_many (queue6, encoder4, parse6, mux4, sink6, NULL)) {
//        std::cout << "tee didn't link to encoding branch2" << std::endl;
//        gst_object_unref(pipeline4);
//        exit(0);
//    }

//    gst_element_sync_state_with_parent(queue6);
//    gst_element_sync_state_with_parent(encoder4);
//    gst_element_sync_state_with_parent(parse6);
//    gst_element_sync_state_with_parent(mux4);
//    gst_element_sync_state_with_parent(sink6);

//    // relink tee to encoding branch
//    sinkpad2 = gst_element_get_static_pad(queue6, "sink");
//    gst_pad_link(teepad4, sinkpad2);
//    gst_object_unref(sinkpad2);

//    recording4 = true;
//}

///*!
// * \brief HelloCpp::gstStop stops the recording from third pipeline
// */
//void recordCams::gstStop3()
//{
//    if(!recording3)
//        return;
//    // unlink recording3branch
//    GstPad *sinkpad;
//    sinkpad = gst_element_get_static_pad (queue4, "sink");
//    gst_pad_unlink (teepad3, sinkpad);
//    gst_object_unref (sinkpad);

//    // stop running all the elements in recording3branch
//    gst_element_send_event(encoder3, gst_event_new_eos());
//    gst_element_set_state(queue4, GST_STATE_NULL);
//    gst_element_set_state(encoder3, GST_STATE_NULL);
//    gst_element_set_state(parse4, GST_STATE_NULL);
//    gst_element_set_state(mux3, GST_STATE_NULL);
//    gst_element_set_state(sink4, GST_STATE_NULL);
//    gst_bin_remove(GST_BIN (pipeline3), queue4);
//    gst_bin_remove(GST_BIN (pipeline3), encoder3);
//    gst_bin_remove(GST_BIN (pipeline3), parse4);
//    gst_bin_remove(GST_BIN (pipeline3), mux3);
//    gst_bin_remove(GST_BIN (pipeline3), sink4);

//    //release pads
//    gst_element_release_request_pad (tee3, teepad3);
//    gst_object_unref (teepad3);
//    recording3= false;
//}
///*!
// * \brief HelloCpp::gstStop stops the recording from fourth pipeline
// */
//void recordCams::gstStop4()
//{
//    if(!recording4)
//        return;
//    // unlink recording3branch
//    GstPad *sinkpad2;
//    sinkpad2 = gst_element_get_static_pad (queue6, "sink");
//    gst_pad_unlink (teepad4, sinkpad2);
//    gst_object_unref (sinkpad2);

//    // stop running all the elements in recording3branch
//    gst_element_send_event(encoder4, gst_event_new_eos());
//    gst_element_set_state(queue6, GST_STATE_NULL);
//    gst_element_set_state(encoder4, GST_STATE_NULL);
//    gst_element_set_state(parse6, GST_STATE_NULL);
//    gst_element_set_state(mux4, GST_STATE_NULL);
//    gst_element_set_state(sink6, GST_STATE_NULL);
//    gst_bin_remove(GST_BIN (pipeline4), queue6);
//    gst_bin_remove(GST_BIN (pipeline4), encoder4);
//    gst_bin_remove(GST_BIN (pipeline4), parse6);
//    gst_bin_remove(GST_BIN (pipeline4), mux4);
//    gst_bin_remove(GST_BIN (pipeline4), sink6);

//    //release pads
//    gst_element_release_request_pad (tee4, teepad4);
//    gst_object_unref (teepad4);
//    recording4 = false;
//}

