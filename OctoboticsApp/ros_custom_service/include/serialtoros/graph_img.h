// Generated by gencpp from file serialtoros/graph_img.msg
// DO NOT EDIT!


#ifndef SERIALTOROS_MESSAGE_GRAPH_IMG_H
#define SERIALTOROS_MESSAGE_GRAPH_IMG_H

#include <ros/service_traits.h>


#include <serialtoros/graph_imgRequest.h>
#include <serialtoros/graph_imgResponse.h>


namespace serialtoros
{

struct graph_img
{

typedef graph_imgRequest Request;
typedef graph_imgResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct graph_img
} // namespace serialtoros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::serialtoros::graph_img > {
  static const char* value()
  {
    return "41d1f72cd925286b6fd1273fdd55b036";
  }

  static const char* value(const ::serialtoros::graph_img&) { return value(); }
};

template<>
struct DataType< ::serialtoros::graph_img > {
  static const char* value()
  {
    return "serialtoros/graph_img";
  }

  static const char* value(const ::serialtoros::graph_img&) { return value(); }
};


// service_traits::MD5Sum< ::serialtoros::graph_imgRequest> should match
// service_traits::MD5Sum< ::serialtoros::graph_img >
template<>
struct MD5Sum< ::serialtoros::graph_imgRequest>
{
  static const char* value()
  {
    return MD5Sum< ::serialtoros::graph_img >::value();
  }
  static const char* value(const ::serialtoros::graph_imgRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::serialtoros::graph_imgRequest> should match
// service_traits::DataType< ::serialtoros::graph_img >
template<>
struct DataType< ::serialtoros::graph_imgRequest>
{
  static const char* value()
  {
    return DataType< ::serialtoros::graph_img >::value();
  }
  static const char* value(const ::serialtoros::graph_imgRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::serialtoros::graph_imgResponse> should match
// service_traits::MD5Sum< ::serialtoros::graph_img >
template<>
struct MD5Sum< ::serialtoros::graph_imgResponse>
{
  static const char* value()
  {
    return MD5Sum< ::serialtoros::graph_img >::value();
  }
  static const char* value(const ::serialtoros::graph_imgResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::serialtoros::graph_imgResponse> should match
// service_traits::DataType< ::serialtoros::graph_img >
template<>
struct DataType< ::serialtoros::graph_imgResponse>
{
  static const char* value()
  {
    return DataType< ::serialtoros::graph_img >::value();
  }
  static const char* value(const ::serialtoros::graph_imgResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SERIALTOROS_MESSAGE_GRAPH_IMG_H
