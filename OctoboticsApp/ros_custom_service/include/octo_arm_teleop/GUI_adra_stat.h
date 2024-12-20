// Generated by gencpp from file octo_arm_teleop/GUI_adra_stat.msg
// DO NOT EDIT!


#ifndef OCTO_ARM_TELEOP_MESSAGE_GUI_ADRA_STAT_H
#define OCTO_ARM_TELEOP_MESSAGE_GUI_ADRA_STAT_H

#include <ros/service_traits.h>


#include <octo_arm_teleop/GUI_adra_statRequest.h>
#include <octo_arm_teleop/GUI_adra_statResponse.h>


namespace octo_arm_teleop
{

struct GUI_adra_stat
{

typedef GUI_adra_statRequest Request;
typedef GUI_adra_statResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GUI_adra_stat
} // namespace octo_arm_teleop


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::octo_arm_teleop::GUI_adra_stat > {
  static const char* value()
  {
    return "a00977049f6f555b54e6778e7a853495";
  }

  static const char* value(const ::octo_arm_teleop::GUI_adra_stat&) { return value(); }
};

template<>
struct DataType< ::octo_arm_teleop::GUI_adra_stat > {
  static const char* value()
  {
    return "octo_arm_teleop/GUI_adra_stat";
  }

  static const char* value(const ::octo_arm_teleop::GUI_adra_stat&) { return value(); }
};


// service_traits::MD5Sum< ::octo_arm_teleop::GUI_adra_statRequest> should match
// service_traits::MD5Sum< ::octo_arm_teleop::GUI_adra_stat >
template<>
struct MD5Sum< ::octo_arm_teleop::GUI_adra_statRequest>
{
  static const char* value()
  {
    return MD5Sum< ::octo_arm_teleop::GUI_adra_stat >::value();
  }
  static const char* value(const ::octo_arm_teleop::GUI_adra_statRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::octo_arm_teleop::GUI_adra_statRequest> should match
// service_traits::DataType< ::octo_arm_teleop::GUI_adra_stat >
template<>
struct DataType< ::octo_arm_teleop::GUI_adra_statRequest>
{
  static const char* value()
  {
    return DataType< ::octo_arm_teleop::GUI_adra_stat >::value();
  }
  static const char* value(const ::octo_arm_teleop::GUI_adra_statRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::octo_arm_teleop::GUI_adra_statResponse> should match
// service_traits::MD5Sum< ::octo_arm_teleop::GUI_adra_stat >
template<>
struct MD5Sum< ::octo_arm_teleop::GUI_adra_statResponse>
{
  static const char* value()
  {
    return MD5Sum< ::octo_arm_teleop::GUI_adra_stat >::value();
  }
  static const char* value(const ::octo_arm_teleop::GUI_adra_statResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::octo_arm_teleop::GUI_adra_statResponse> should match
// service_traits::DataType< ::octo_arm_teleop::GUI_adra_stat >
template<>
struct DataType< ::octo_arm_teleop::GUI_adra_statResponse>
{
  static const char* value()
  {
    return DataType< ::octo_arm_teleop::GUI_adra_stat >::value();
  }
  static const char* value(const ::octo_arm_teleop::GUI_adra_statResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // OCTO_ARM_TELEOP_MESSAGE_GUI_ADRA_STAT_H
