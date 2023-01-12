// Generated by gencpp from file serialtoros/thick_arr.msg
// DO NOT EDIT!


#ifndef SERIALTOROS_MESSAGE_THICK_ARR_H
#define SERIALTOROS_MESSAGE_THICK_ARR_H


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
struct thick_arr_
{
  typedef thick_arr_<ContainerAllocator> Type;

  thick_arr_()
    : data()  {
      data.assign(0.0);
  }
  thick_arr_(const ContainerAllocator& _alloc)
    : data()  {
  (void)_alloc;
      data.assign(0.0);
  }



   typedef boost::array<float, 2>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::serialtoros::thick_arr_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::serialtoros::thick_arr_<ContainerAllocator> const> ConstPtr;

}; // struct thick_arr_

typedef ::serialtoros::thick_arr_<std::allocator<void> > thick_arr;

typedef boost::shared_ptr< ::serialtoros::thick_arr > thick_arrPtr;
typedef boost::shared_ptr< ::serialtoros::thick_arr const> thick_arrConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::serialtoros::thick_arr_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::serialtoros::thick_arr_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::serialtoros::thick_arr_<ContainerAllocator1> & lhs, const ::serialtoros::thick_arr_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::serialtoros::thick_arr_<ContainerAllocator1> & lhs, const ::serialtoros::thick_arr_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace serialtoros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::serialtoros::thick_arr_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::serialtoros::thick_arr_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::serialtoros::thick_arr_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::serialtoros::thick_arr_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serialtoros::thick_arr_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serialtoros::thick_arr_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::serialtoros::thick_arr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3a423cd43be5532c6a3def568afe4aec";
  }

  static const char* value(const ::serialtoros::thick_arr_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3a423cd43be5532cULL;
  static const uint64_t static_value2 = 0x6a3def568afe4aecULL;
};

template<class ContainerAllocator>
struct DataType< ::serialtoros::thick_arr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "serialtoros/thick_arr";
  }

  static const char* value(const ::serialtoros::thick_arr_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::serialtoros::thick_arr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[2] data\n"
;
  }

  static const char* value(const ::serialtoros::thick_arr_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::serialtoros::thick_arr_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct thick_arr_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::serialtoros::thick_arr_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::serialtoros::thick_arr_<ContainerAllocator>& v)
  {
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERIALTOROS_MESSAGE_THICK_ARR_H