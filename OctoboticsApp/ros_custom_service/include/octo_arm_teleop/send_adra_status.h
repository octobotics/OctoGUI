// Generated by gencpp from file octo_arm_teleop/send_adra_status.msg
// DO NOT EDIT!


#ifndef OCTO_ARM_TELEOP_MESSAGE_SEND_ADRA_STATUS_H
#define OCTO_ARM_TELEOP_MESSAGE_SEND_ADRA_STATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace octo_arm_teleop
{
template <class ContainerAllocator>
struct send_adra_status_
{
  typedef send_adra_status_<ContainerAllocator> Type;

  send_adra_status_()
    : temp_driver()
    , temp_motors()
    , volt_motors()
    , error_motors()  {
      temp_driver.assign(0.0);

      temp_motors.assign(0.0);

      volt_motors.assign(0.0);

      error_motors.assign(0);
  }
  send_adra_status_(const ContainerAllocator& _alloc)
    : temp_driver()
    , temp_motors()
    , volt_motors()
    , error_motors()  {
  (void)_alloc;
      temp_driver.assign(0.0);

      temp_motors.assign(0.0);

      volt_motors.assign(0.0);

      error_motors.assign(0);
  }



   typedef boost::array<float, 4>  _temp_driver_type;
  _temp_driver_type temp_driver;

   typedef boost::array<float, 4>  _temp_motors_type;
  _temp_motors_type temp_motors;

   typedef boost::array<float, 4>  _volt_motors_type;
  _volt_motors_type volt_motors;

   typedef boost::array<int16_t, 4>  _error_motors_type;
  _error_motors_type error_motors;





  typedef boost::shared_ptr< ::octo_arm_teleop::send_adra_status_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::octo_arm_teleop::send_adra_status_<ContainerAllocator> const> ConstPtr;

}; // struct send_adra_status_

typedef ::octo_arm_teleop::send_adra_status_<std::allocator<void> > send_adra_status;

typedef boost::shared_ptr< ::octo_arm_teleop::send_adra_status > send_adra_statusPtr;
typedef boost::shared_ptr< ::octo_arm_teleop::send_adra_status const> send_adra_statusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::octo_arm_teleop::send_adra_status_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::octo_arm_teleop::send_adra_status_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::octo_arm_teleop::send_adra_status_<ContainerAllocator1> & lhs, const ::octo_arm_teleop::send_adra_status_<ContainerAllocator2> & rhs)
{
  return lhs.temp_driver == rhs.temp_driver &&
    lhs.temp_motors == rhs.temp_motors &&
    lhs.volt_motors == rhs.volt_motors &&
    lhs.error_motors == rhs.error_motors;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::octo_arm_teleop::send_adra_status_<ContainerAllocator1> & lhs, const ::octo_arm_teleop::send_adra_status_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace octo_arm_teleop

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::octo_arm_teleop::send_adra_status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::octo_arm_teleop::send_adra_status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::octo_arm_teleop::send_adra_status_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::octo_arm_teleop::send_adra_status_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::octo_arm_teleop::send_adra_status_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::octo_arm_teleop::send_adra_status_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::octo_arm_teleop::send_adra_status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1c36eb5801709de314deb29ff8ece0cf";
  }

  static const char* value(const ::octo_arm_teleop::send_adra_status_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1c36eb5801709de3ULL;
  static const uint64_t static_value2 = 0x14deb29ff8ece0cfULL;
};

template<class ContainerAllocator>
struct DataType< ::octo_arm_teleop::send_adra_status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "octo_arm_teleop/send_adra_status";
  }

  static const char* value(const ::octo_arm_teleop::send_adra_status_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::octo_arm_teleop::send_adra_status_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[4] temp_driver\n"
"float32[4] temp_motors\n"
"float32[4] volt_motors\n"
"int16[4] error_motors\n"
;
  }

  static const char* value(const ::octo_arm_teleop::send_adra_status_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::octo_arm_teleop::send_adra_status_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.temp_driver);
      stream.next(m.temp_motors);
      stream.next(m.volt_motors);
      stream.next(m.error_motors);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct send_adra_status_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::octo_arm_teleop::send_adra_status_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::octo_arm_teleop::send_adra_status_<ContainerAllocator>& v)
  {
    s << indent << "temp_driver[]" << std::endl;
    for (size_t i = 0; i < v.temp_driver.size(); ++i)
    {
      s << indent << "  temp_driver[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.temp_driver[i]);
    }
    s << indent << "temp_motors[]" << std::endl;
    for (size_t i = 0; i < v.temp_motors.size(); ++i)
    {
      s << indent << "  temp_motors[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.temp_motors[i]);
    }
    s << indent << "volt_motors[]" << std::endl;
    for (size_t i = 0; i < v.volt_motors.size(); ++i)
    {
      s << indent << "  volt_motors[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.volt_motors[i]);
    }
    s << indent << "error_motors[]" << std::endl;
    for (size_t i = 0; i < v.error_motors.size(); ++i)
    {
      s << indent << "  error_motors[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.error_motors[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OCTO_ARM_TELEOP_MESSAGE_SEND_ADRA_STATUS_H