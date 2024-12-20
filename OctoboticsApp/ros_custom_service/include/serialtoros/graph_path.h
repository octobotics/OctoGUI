// Generated by gencpp from file serialtoros/graph_path.msg
// DO NOT EDIT!


#ifndef SERIALTOROS_MESSAGE_GRAPH_PATH_H
#define SERIALTOROS_MESSAGE_GRAPH_PATH_H

#include <ros/service_traits.h>


#include <serialtoros/graph_pathRequest.h>
#include <serialtoros/graph_pathResponse.h>


namespace serialtoros
{

struct graph_path
{

typedef graph_pathRequest Request;
typedef graph_pathResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct graph_path
} // namespace serialtoros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::serialtoros::graph_path > {
  static const char* value()
  {
    return "ed9917bdabd17e90425e5793841d983a";
  }

  static const char* value(const ::serialtoros::graph_path&) { return value(); }
};

template<>
struct DataType< ::serialtoros::graph_path > {
  static const char* value()
  {
    return "serialtoros/graph_path";
  }

  static const char* value(const ::serialtoros::graph_path&) { return value(); }
};


// service_traits::MD5Sum< ::serialtoros::graph_pathRequest> should match
// service_traits::MD5Sum< ::serialtoros::graph_path >
template<>
struct MD5Sum< ::serialtoros::graph_pathRequest>
{
  static const char* value()
  {
    return MD5Sum< ::serialtoros::graph_path >::value();
  }
  static const char* value(const ::serialtoros::graph_pathRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::serialtoros::graph_pathRequest> should match
// service_traits::DataType< ::serialtoros::graph_path >
template<>
struct DataType< ::serialtoros::graph_pathRequest>
{
  static const char* value()
  {
    return DataType< ::serialtoros::graph_path >::value();
  }
  static const char* value(const ::serialtoros::graph_pathRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::serialtoros::graph_pathResponse> should match
// service_traits::MD5Sum< ::serialtoros::graph_path >
template<>
struct MD5Sum< ::serialtoros::graph_pathResponse>
{
  static const char* value()
  {
    return MD5Sum< ::serialtoros::graph_path >::value();
  }
  static const char* value(const ::serialtoros::graph_pathResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::serialtoros::graph_pathResponse> should match
// service_traits::DataType< ::serialtoros::graph_path >
template<>
struct DataType< ::serialtoros::graph_pathResponse>
{
  static const char* value()
  {
    return DataType< ::serialtoros::graph_path >::value();
  }
  static const char* value(const ::serialtoros::graph_pathResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SERIALTOROS_MESSAGE_GRAPH_PATH_H
