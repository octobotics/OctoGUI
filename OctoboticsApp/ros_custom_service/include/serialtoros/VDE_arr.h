// Generated by gencpp from file serialtoros/VDE_arr.msg
// DO NOT EDIT!


#ifndef SERIALTOROS_MESSAGE_VDE_ARR_H
#define SERIALTOROS_MESSAGE_VDE_ARR_H


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
struct VDE_arr_
{
  typedef VDE_arr_<ContainerAllocator> Type;

  VDE_arr_()
    : data()  {
      data.assign(0);
  }
  VDE_arr_(const ContainerAllocator& _alloc)
    : data()  {
  (void)_alloc;
      data.assign(0);
  }



   typedef boost::array<int64_t, 3>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::serialtoros::VDE_arr_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::serialtoros::VDE_arr_<ContainerAllocator> const> ConstPtr;

}; // struct VDE_arr_

typedef ::serialtoros::VDE_arr_<std::allocator<void> > VDE_arr;

typedef boost::shared_ptr< ::serialtoros::VDE_arr > VDE_arrPtr;
typedef boost::shared_ptr< ::serialtoros::VDE_arr const> VDE_arrConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::serialtoros::VDE_arr_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::serialtoros::VDE_arr_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::serialtoros::VDE_arr_<ContainerAllocator1> & lhs, const ::serialtoros::VDE_arr_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::serialtoros::VDE_arr_<ContainerAllocator1> & lhs, const ::serialtoros::VDE_arr_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace serialtoros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::serialtoros::VDE_arr_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::serialtoros::VDE_arr_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::serialtoros::VDE_arr_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::serialtoros::VDE_arr_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serialtoros::VDE_arr_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serialtoros::VDE_arr_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::serialtoros::VDE_arr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "96bf02566e5b1a88945b741b5891250d";
  }

  static const char* value(const ::serialtoros::VDE_arr_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x96bf02566e5b1a88ULL;
  static const uint64_t static_value2 = 0x945b741b5891250dULL;
};

template<class ContainerAllocator>
struct DataType< ::serialtoros::VDE_arr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "serialtoros/VDE_arr";
  }

  static const char* value(const ::serialtoros::VDE_arr_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::serialtoros::VDE_arr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64[3] data\n"
;
  }

  static const char* value(const ::serialtoros::VDE_arr_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::serialtoros::VDE_arr_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VDE_arr_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::serialtoros::VDE_arr_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::serialtoros::VDE_arr_<ContainerAllocator>& v)
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERIALTOROS_MESSAGE_VDE_ARR_H
