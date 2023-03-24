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

gboolean recording3= false;
gboolean recording4 = false;

unsigned int counter3 = 0;
unsigned int counter4 = 0;

std::string filepath2;
std::string fileId2;

// declare elements
static GstElement *pipeline3 , *pipeline4;
//static GstElement *pipeline4;

static GstElement *source3, *source4 ;
static GstElement *queue3, *queue4, *queue5, *queue6;
static GstElement *dpay3, *dpay4;
static GstElement *parse3, *parse4, *parse5, *parse6;
static GstElement  *decoder3, *decoder4, *encoder3, *encoder4;
static GstElement *overlay3, *overlay4, *mux3, *mux4;
static GstElement *sink3, *sink4, *sink5, *sink6;
static GstElement *tee3, *tee4;
static GstPad *teepad3, *teepad4;

static void cb_new_pad3 (GstElement *element, GstPad *pad, gpointer data);
static void cb_new_pad4 (GstElement *element, GstPad *pad, gpointer data);

#endif // INCLUDE_H
