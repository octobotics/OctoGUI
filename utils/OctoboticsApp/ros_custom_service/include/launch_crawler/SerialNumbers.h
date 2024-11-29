// Generated by gencpp from file launch_crawler/SerialNumbers.msg
// DO NOT EDIT!


#ifndef LAUNCH_CRAWLER_MESSAGE_SERIALNUMBERS_H
#define LAUNCH_CRAWLER_MESSAGE_SERIALNUMBERS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace launch_crawler
{
template <class ContainerAllocator>
struct SerialNumbers_
{
  typedef SerialNumbers_<ContainerAllocator> Type;

  SerialNumbers_()
    : serial_numbers()  {
    }
  SerialNumbers_(const ContainerAllocator& _alloc)
    : serial_numbers(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _serial_numbers_type;
  _serial_numbers_type serial_numbers;





  typedef boost::shared_ptr< ::launch_crawler::SerialNumbers_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::launch_crawler::SerialNumbers_<ContainerAllocator> const> ConstPtr;

}; // struct SerialNumbers_

typedef ::launch_crawler::SerialNumbers_<std::allocator<void> > SerialNumbers;

typedef boost::shared_ptr< ::launch_crawler::SerialNumbers > SerialNumbersPtr;
typedef boost::shared_ptr< ::launch_crawler::SerialNumbers const> SerialNumbersConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::launch_crawler::SerialNumbers_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::launch_crawler::SerialNumbers_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::launch_crawler::SerialNumbers_<ContainerAllocator1> & lhs, const ::launch_crawler::SerialNumbers_<ContainerAllocator2> & rhs)
{
  return lhs.serial_numbers == rhs.serial_numbers;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::launch_crawler::SerialNumbers_<ContainerAllocator1> & lhs, const ::launch_crawler::SerialNumbers_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace launch_crawler

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::launch_crawler::SerialNumbers_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::launch_crawler::SerialNumbers_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::launch_crawler::SerialNumbers_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::launch_crawler::SerialNumbers_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::launch_crawler::SerialNumbers_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::launch_crawler::SerialNumbers_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::launch_crawler::SerialNumbers_<ContainerAllocator> >
{
  static const char* value()
  {
    return "787464d3ea49b3160b597f59c8c012ff";
  }

  static const char* value(const ::launch_crawler::SerialNumbers_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x787464d3ea49b316ULL;
  static const uint64_t static_value2 = 0x0b597f59c8c012ffULL;
};

template<class ContainerAllocator>
struct DataType< ::launch_crawler::SerialNumbers_<ContainerAllocator> >
{
  static const char* value()
  {
    return "launch_crawler/SerialNumbers";
  }

  static const char* value(const ::launch_crawler::SerialNumbers_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::launch_crawler::SerialNumbers_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] serial_numbers\n"
;
  }

  static const char* value(const ::launch_crawler::SerialNumbers_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::launch_crawler::SerialNumbers_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.serial_numbers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SerialNumbers_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::launch_crawler::SerialNumbers_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::launch_crawler::SerialNumbers_<ContainerAllocator>& v)
  {
    s << indent << "serial_numbers[]" << std::endl;
    for (size_t i = 0; i < v.serial_numbers.size(); ++i)
    {
      s << indent << "  serial_numbers[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.serial_numbers[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // LAUNCH_CRAWLER_MESSAGE_SERIALNUMBERS_H