// Generated by gencpp from file serialtoros/GraphPathRequest.msg
// DO NOT EDIT!


#ifndef SERIALTOROS_MESSAGE_GRAPHPATHREQUEST_H
#define SERIALTOROS_MESSAGE_GRAPHPATHREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace serialtoros
{
template <class ContainerAllocator>
struct GraphPathRequest_
{
  typedef GraphPathRequest_<ContainerAllocator> Type;

  GraphPathRequest_()
    : req(false)  {
    }
  GraphPathRequest_(const ContainerAllocator& _alloc)
    : req(false)  {
  (void)_alloc;
    }



   typedef uint8_t _req_type;
  _req_type req;





  typedef boost::shared_ptr< ::serialtoros::GraphPathRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::serialtoros::GraphPathRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GraphPathRequest_

typedef ::serialtoros::GraphPathRequest_<std::allocator<void> > GraphPathRequest;

typedef boost::shared_ptr< ::serialtoros::GraphPathRequest > GraphPathRequestPtr;
typedef boost::shared_ptr< ::serialtoros::GraphPathRequest const> GraphPathRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::serialtoros::GraphPathRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::serialtoros::GraphPathRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::serialtoros::GraphPathRequest_<ContainerAllocator1> & lhs, const ::serialtoros::GraphPathRequest_<ContainerAllocator2> & rhs)
{
  return lhs.req == rhs.req;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::serialtoros::GraphPathRequest_<ContainerAllocator1> & lhs, const ::serialtoros::GraphPathRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace serialtoros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::serialtoros::GraphPathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::serialtoros::GraphPathRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::serialtoros::GraphPathRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::serialtoros::GraphPathRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serialtoros::GraphPathRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serialtoros::GraphPathRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::serialtoros::GraphPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "be3c44e19d0c6b00b25e356c69155e2a";
  }

  static const char* value(const ::serialtoros::GraphPathRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbe3c44e19d0c6b00ULL;
  static const uint64_t static_value2 = 0xb25e356c69155e2aULL;
};

template<class ContainerAllocator>
struct DataType< ::serialtoros::GraphPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "serialtoros/GraphPathRequest";
  }

  static const char* value(const ::serialtoros::GraphPathRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::serialtoros::GraphPathRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool req\n"
;
  }

  static const char* value(const ::serialtoros::GraphPathRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::serialtoros::GraphPathRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.req);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GraphPathRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::serialtoros::GraphPathRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::serialtoros::GraphPathRequest_<ContainerAllocator>& v)
  {
    s << indent << "req: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.req);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERIALTOROS_MESSAGE_GRAPHPATHREQUEST_H
