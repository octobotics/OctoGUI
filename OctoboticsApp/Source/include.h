#ifndef INCLUDE_H
#define INCLUDE_H

#include <gst/gst.h>
#include <iostream>
#include <unistd.h>
#include <thread>
#include <stdio.h>
#include <string>
#include <iomanip>
#include <sstream>
#include <signal.h>
#include <gst/gstutils.h>

gboolean recording = false;
gboolean recording2 = false;

unsigned int counter = 0;
unsigned int counter2 = 0;

std::string filepath;
std::string fileId;

// declare elements
static GstElement *pipeline1 , *pipeline2;
//static GstElement *pipeline2;

static GstElement *source1, *source2 ;
static GstElement *queue1, *queue2, *queue3, *queue4;
static GstElement *dpay1, *dpay2;
static GstElement *parse1, *parse2, *parse3, *parse4;
static GstElement  *decoder1, *decoder2, *encoder1, *encoder2;
static GstElement *overlay1, *overlay2, *mux1, *mux2;
static GstElement *sink1, *sink2, *sink3, *sink4;
static GstElement *tee1, *tee2;
static GstPad *teepad1, *teepad2;

static void cb_new_pad (GstElement *element, GstPad *pad, gpointer data);
static void cb_new_pad2 (GstElement *element, GstPad *pad, gpointer data);

#endif // INCLUDE_H
