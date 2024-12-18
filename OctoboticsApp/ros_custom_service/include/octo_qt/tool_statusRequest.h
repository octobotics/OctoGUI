// Generated by gencpp from file octo_qt/tool_statusRequest.msg
// DO NOT EDIT!


#ifndef OCTO_QT_MESSAGE_TOOL_STATUSREQUEST_H
#define OCTO_QT_MESSAGE_TOOL_STATUSREQUEST_H


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
struct tool_statusRequest_
{
  typedef tool_statusRequest_<ContainerAllocator> Type;

  tool_statusRequest_()
    : flag(false)  {
    }
  tool_statusRequest_(const ContainerAllocator& _alloc)
    : flag(false)  {
  (void)_alloc;
    }



   typedef uint8_t _flag_type;
  _flag_type flag;





  typedef boost::shared_ptr< ::octo_qt::tool_statusRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::octo_qt::tool_statusRequest_<ContainerAllocator> const> ConstPtr;

}; // struct tool_statusRequest_

typedef ::octo_qt::tool_statusRequest_<std::allocator<void> > tool_statusRequest;

typedef boost::shared_ptr< ::octo_qt::tool_statusRequest > tool_statusRequestPtr;
typedef boost::shared_ptr< ::octo_qt::tool_statusRequest const> tool_statusRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::octo_qt::tool_statusRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::octo_qt::tool_statusRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::octo_qt::tool_statusRequest_<ContainerAllocator1> & lhs, const ::octo_qt::tool_statusRequest_<ContainerAllocator2> & rhs)
{
  return lhs.flag == rhs.flag;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::octo_qt::tool_statusRequest_<ContainerAllocator1> & lhs, const ::octo_qt::tool_statusRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace octo_qt

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::octo_qt::tool_statusRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::octo_qt::tool_statusRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::octo_qt::tool_statusRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::octo_qt::tool_statusRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::octo_qt::tool_statusRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::octo_qt::tool_statusRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::octo_qt::tool_statusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "24842bc754e0f5cc982338eca1269251";
  }

  static const char* value(const ::octo_qt::tool_statusRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x24842bc754e0f5ccULL;
  static const uint64_t static_value2 = 0x982338eca1269251ULL;
};

template<class ContainerAllocator>
struct DataType< ::octo_qt::tool_statusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "octo_qt/tool_statusRequest";
  }

  static const char* value(const ::octo_qt::tool_statusRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::octo_qt::tool_statusRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool flag\n"
;
  }

  static const char* value(const ::octo_qt::tool_statusRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::octo_qt::tool_statusRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.flag);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct tool_statusRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::octo_qt::tool_statusRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::octo_qt::tool_statusRequest_<ContainerAllocator>& v)
  {
    s << indent << "flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flag);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OCTO_QT_MESSAGE_TOOL_STATUSREQUEST_H
