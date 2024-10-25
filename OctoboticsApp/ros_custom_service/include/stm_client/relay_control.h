// Generated by gencpp from file stm_client/relay_control.msg
// DO NOT EDIT!


#ifndef STM_CLIENT_MESSAGE_RELAY_CONTROL_H
#define STM_CLIENT_MESSAGE_RELAY_CONTROL_H

#include <ros/service_traits.h>


#include <stm_client/relay_controlRequest.h>
#include <stm_client/relay_controlResponse.h>


namespace stm_client
{

struct relay_control
{

typedef relay_controlRequest Request;
typedef relay_controlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct relay_control
} // namespace stm_client


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::stm_client::relay_control > {
  static const char* value()
  {
    return "6db4585f5f37e5eeadda4ec7286a1620";
  }

  static const char* value(const ::stm_client::relay_control&) { return value(); }
};

template<>
struct DataType< ::stm_client::relay_control > {
  static const char* value()
  {
    return "stm_client/relay_control";
  }

  static const char* value(const ::stm_client::relay_control&) { return value(); }
};


// service_traits::MD5Sum< ::stm_client::relay_controlRequest> should match
// service_traits::MD5Sum< ::stm_client::relay_control >
template<>
struct MD5Sum< ::stm_client::relay_controlRequest>
{
  static const char* value()
  {
    return MD5Sum< ::stm_client::relay_control >::value();
  }
  static const char* value(const ::stm_client::relay_controlRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::stm_client::relay_controlRequest> should match
// service_traits::DataType< ::stm_client::relay_control >
template<>
struct DataType< ::stm_client::relay_controlRequest>
{
  static const char* value()
  {
    return DataType< ::stm_client::relay_control >::value();
  }
  static const char* value(const ::stm_client::relay_controlRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::stm_client::relay_controlResponse> should match
// service_traits::MD5Sum< ::stm_client::relay_control >
template<>
struct MD5Sum< ::stm_client::relay_controlResponse>
{
  static const char* value()
  {
    return MD5Sum< ::stm_client::relay_control >::value();
  }
  static const char* value(const ::stm_client::relay_controlResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::stm_client::relay_controlResponse> should match
// service_traits::DataType< ::stm_client::relay_control >
template<>
struct DataType< ::stm_client::relay_controlResponse>
{
  static const char* value()
  {
    return DataType< ::stm_client::relay_control >::value();
  }
  static const char* value(const ::stm_client::relay_controlResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // STM_CLIENT_MESSAGE_RELAY_CONTROL_H
