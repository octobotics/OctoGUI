// Generated by gencpp from file zed_interfaces/Keypoint2Di.msg
// DO NOT EDIT!


#ifndef ZED_INTERFACES_MESSAGE_KEYPOINT2DI_H
#define ZED_INTERFACES_MESSAGE_KEYPOINT2DI_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace zed_interfaces
{
template <class ContainerAllocator>
struct Keypoint2Di_
{
  typedef Keypoint2Di_<ContainerAllocator> Type;

  Keypoint2Di_()
    : kp()  {
      kp.assign(0);
  }
  Keypoint2Di_(const ContainerAllocator& _alloc)
    : kp()  {
  (void)_alloc;
      kp.assign(0);
  }



   typedef boost::array<uint32_t, 2>  _kp_type;
  _kp_type kp;





  typedef boost::shared_ptr< ::zed_interfaces::Keypoint2Di_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zed_interfaces::Keypoint2Di_<ContainerAllocator> const> ConstPtr;

}; // struct Keypoint2Di_

typedef ::zed_interfaces::Keypoint2Di_<std::allocator<void> > Keypoint2Di;

typedef boost::shared_ptr< ::zed_interfaces::Keypoint2Di > Keypoint2DiPtr;
typedef boost::shared_ptr< ::zed_interfaces::Keypoint2Di const> Keypoint2DiConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zed_interfaces::Keypoint2Di_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zed_interfaces::Keypoint2Di_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::zed_interfaces::Keypoint2Di_<ContainerAllocator1> & lhs, const ::zed_interfaces::Keypoint2Di_<ContainerAllocator2> & rhs)
{
  return lhs.kp == rhs.kp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::zed_interfaces::Keypoint2Di_<ContainerAllocator1> & lhs, const ::zed_interfaces::Keypoint2Di_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace zed_interfaces

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::Keypoint2Di_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::Keypoint2Di_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::Keypoint2Di_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::Keypoint2Di_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::Keypoint2Di_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::Keypoint2Di_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zed_interfaces::Keypoint2Di_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5d23739e59e90009d64f8e07a5e96e2b";
  }

  static const char* value(const ::zed_interfaces::Keypoint2Di_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5d23739e59e90009ULL;
  static const uint64_t static_value2 = 0xd64f8e07a5e96e2bULL;
};

template<class ContainerAllocator>
struct DataType< ::zed_interfaces::Keypoint2Di_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zed_interfaces/Keypoint2Di";
  }

  static const char* value(const ::zed_interfaces::Keypoint2Di_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zed_interfaces::Keypoint2Di_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32[2] kp\n"
;
  }

  static const char* value(const ::zed_interfaces::Keypoint2Di_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zed_interfaces::Keypoint2Di_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.kp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Keypoint2Di_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zed_interfaces::Keypoint2Di_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zed_interfaces::Keypoint2Di_<ContainerAllocator>& v)
  {
    s << indent << "kp[]" << std::endl;
    for (size_t i = 0; i < v.kp.size(); ++i)
    {
      s << indent << "  kp[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.kp[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZED_INTERFACES_MESSAGE_KEYPOINT2DI_H
