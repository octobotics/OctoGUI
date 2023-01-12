// Generated by gencpp from file stm_client/relay_controlRequest.msg
// DO NOT EDIT!


#ifndef STM_CLIENT_MESSAGE_RELAY_CONTROLREQUEST_H
#define STM_CLIENT_MESSAGE_RELAY_CONTROLREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace stm_client
{
template <class ContainerAllocator>
struct relay_controlRequest_
{
  typedef relay_controlRequest_<ContainerAllocator> Type;

  relay_controlRequest_()
    : data(0)  {
    }
  relay_controlRequest_(const ContainerAllocator& _alloc)
    : data(0)  {
  (void)_alloc;
    }



   typedef uint8_t _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::stm_client::relay_controlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stm_client::relay_controlRequest_<ContainerAllocator> const> ConstPtr;

}; // struct relay_controlRequest_

typedef ::stm_client::relay_controlRequest_<std::allocator<void> > relay_controlRequest;

typedef boost::shared_ptr< ::stm_client::relay_controlRequest > relay_controlRequestPtr;
typedef boost::shared_ptr< ::stm_client::relay_controlRequest const> relay_controlRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stm_client::relay_controlRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stm_client::relay_controlRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::stm_client::relay_controlRequest_<ContainerAllocator1> & lhs, const ::stm_client::relay_controlRequest_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::stm_client::relay_controlRequest_<ContainerAllocator1> & lhs, const ::stm_client::relay_controlRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace stm_client

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::stm_client::relay_controlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stm_client::relay_controlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stm_client::relay_controlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stm_client::relay_controlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stm_client::relay_controlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stm_client::relay_controlRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stm_client::relay_controlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7c8164229e7d2c17eb95e9231617fdee";
  }

  static const char* value(const ::stm_client::relay_controlRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7c8164229e7d2c17ULL;
  static const uint64_t static_value2 = 0xeb95e9231617fdeeULL;
};

template<class ContainerAllocator>
struct DataType< ::stm_client::relay_controlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stm_client/relay_controlRequest";
  }

  static const char* value(const ::stm_client::relay_controlRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stm_client::relay_controlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 data\n"
;
  }

  static const char* value(const ::stm_client::relay_controlRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stm_client::relay_controlRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct relay_controlRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stm_client::relay_controlRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stm_client::relay_controlRequest_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STM_CLIENT_MESSAGE_RELAY_CONTROLREQUEST_H
