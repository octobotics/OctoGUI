// Generated by gencpp from file octo_qt/motor_statusRequest.msg
// DO NOT EDIT!


#ifndef OCTO_QT_MESSAGE_MOTOR_STATUSREQUEST_H
#define OCTO_QT_MESSAGE_MOTOR_STATUSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace octo_qt
{
template <class ContainerAllocator>
struct motor_statusRequest_
{
  typedef motor_statusRequest_<ContainerAllocator> Type;

  motor_statusRequest_()
    : data()  {
      data.assign(0);
  }
  motor_statusRequest_(const ContainerAllocator& _alloc)
    : data()  {
  (void)_alloc;
      data.assign(0);
  }



   typedef boost::array<int8_t, 4>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::octo_qt::motor_statusRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::octo_qt::motor_statusRequest_<ContainerAllocator> const> ConstPtr;

}; // struct motor_statusRequest_

typedef ::octo_qt::motor_statusRequest_<std::allocator<void> > motor_statusRequest;

typedef boost::shared_ptr< ::octo_qt::motor_statusRequest > motor_statusRequestPtr;
typedef boost::shared_ptr< ::octo_qt::motor_statusRequest const> motor_statusRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::octo_qt::motor_statusRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::octo_qt::motor_statusRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::octo_qt::motor_statusRequest_<ContainerAllocator1> & lhs, const ::octo_qt::motor_statusRequest_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::octo_qt::motor_statusRequest_<ContainerAllocator1> & lhs, const ::octo_qt::motor_statusRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace octo_qt

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::octo_qt::motor_statusRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::octo_qt::motor_statusRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::octo_qt::motor_statusRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::octo_qt::motor_statusRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::octo_qt::motor_statusRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::octo_qt::motor_statusRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::octo_qt::motor_statusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "de20758db74ccf24a55bb3f57badc8af";
  }

  static const char* value(const ::octo_qt::motor_statusRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xde20758db74ccf24ULL;
  static const uint64_t static_value2 = 0xa55bb3f57badc8afULL;
};

template<class ContainerAllocator>
struct DataType< ::octo_qt::motor_statusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "octo_qt/motor_statusRequest";
  }

  static const char* value(const ::octo_qt::motor_statusRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::octo_qt::motor_statusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8[4] data\n"
;
  }

  static const char* value(const ::octo_qt::motor_statusRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::octo_qt::motor_statusRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct motor_statusRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::octo_qt::motor_statusRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::octo_qt::motor_statusRequest_<ContainerAllocator>& v)
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OCTO_QT_MESSAGE_MOTOR_STATUSREQUEST_H
