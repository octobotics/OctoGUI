// Generated by gencpp from file my_actuator/vitals.msg
// DO NOT EDIT!


#ifndef MY_ACTUATOR_MESSAGE_VITALS_H
#define MY_ACTUATOR_MESSAGE_VITALS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace my_actuator
{
template <class ContainerAllocator>
struct vitals_
{
  typedef vitals_<ContainerAllocator> Type;

  vitals_()
    : header()
    , voltage(0.0)
    , temp()
    , error()
    , mode()  {
      temp.assign(0.0);

      error.assign(0.0);

      mode.assign(0.0);
  }
  vitals_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , voltage(0.0)
    , temp()
    , error()
    , mode()  {
  (void)_alloc;
      temp.assign(0.0);

      error.assign(0.0);

      mode.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _voltage_type;
  _voltage_type voltage;

   typedef boost::array<float, 4>  _temp_type;
  _temp_type temp;

   typedef boost::array<float, 4>  _error_type;
  _error_type error;

   typedef boost::array<float, 4>  _mode_type;
  _mode_type mode;





  typedef boost::shared_ptr< ::my_actuator::vitals_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_actuator::vitals_<ContainerAllocator> const> ConstPtr;

}; // struct vitals_

typedef ::my_actuator::vitals_<std::allocator<void> > vitals;

typedef boost::shared_ptr< ::my_actuator::vitals > vitalsPtr;
typedef boost::shared_ptr< ::my_actuator::vitals const> vitalsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_actuator::vitals_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_actuator::vitals_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::my_actuator::vitals_<ContainerAllocator1> & lhs, const ::my_actuator::vitals_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.voltage == rhs.voltage &&
    lhs.temp == rhs.temp &&
    lhs.error == rhs.error &&
    lhs.mode == rhs.mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::my_actuator::vitals_<ContainerAllocator1> & lhs, const ::my_actuator::vitals_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace my_actuator

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::my_actuator::vitals_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_actuator::vitals_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_actuator::vitals_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_actuator::vitals_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_actuator::vitals_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_actuator::vitals_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_actuator::vitals_<ContainerAllocator> >
{
  static const char* value()
  {
    return "af80d2fd4e2af8a9d4f0680366f6617c";
  }

  static const char* value(const ::my_actuator::vitals_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaf80d2fd4e2af8a9ULL;
  static const uint64_t static_value2 = 0xd4f0680366f6617cULL;
};

template<class ContainerAllocator>
struct DataType< ::my_actuator::vitals_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_actuator/vitals";
  }

  static const char* value(const ::my_actuator::vitals_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_actuator::vitals_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"float32 voltage\n"
"float32[4] temp\n"
"float32[4] error\n"
"float32[4] mode\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::my_actuator::vitals_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_actuator::vitals_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.voltage);
      stream.next(m.temp);
      stream.next(m.error);
      stream.next(m.mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct vitals_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_actuator::vitals_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_actuator::vitals_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "voltage: ";
    Printer<float>::stream(s, indent + "  ", v.voltage);
    s << indent << "temp[]" << std::endl;
    for (size_t i = 0; i < v.temp.size(); ++i)
    {
      s << indent << "  temp[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.temp[i]);
    }
    s << indent << "error[]" << std::endl;
    for (size_t i = 0; i < v.error.size(); ++i)
    {
      s << indent << "  error[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.error[i]);
    }
    s << indent << "mode[]" << std::endl;
    for (size_t i = 0; i < v.mode.size(); ++i)
    {
      s << indent << "  mode[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.mode[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_ACTUATOR_MESSAGE_VITALS_H