// Generated by gencpp from file nodelet/NodeletLoadRequest.msg
// DO NOT EDIT!


#ifndef NODELET_MESSAGE_NODELETLOADREQUEST_H
#define NODELET_MESSAGE_NODELETLOADREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nodelet
{
template <class ContainerAllocator>
struct NodeletLoadRequest_
{
  typedef NodeletLoadRequest_<ContainerAllocator> Type;

  NodeletLoadRequest_()
    : name()
    , type()
    , remap_source_args()
    , remap_target_args()
    , my_argv()
    , bond_id()  {
    }
  NodeletLoadRequest_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , type(_alloc)
    , remap_source_args(_alloc)
    , remap_target_args(_alloc)
    , my_argv(_alloc)
    , bond_id(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _type_type;
  _type_type type;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _remap_source_args_type;
  _remap_source_args_type remap_source_args;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _remap_target_args_type;
  _remap_target_args_type remap_target_args;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _my_argv_type;
  _my_argv_type my_argv;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _bond_id_type;
  _bond_id_type bond_id;





  typedef boost::shared_ptr< ::nodelet::NodeletLoadRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nodelet::NodeletLoadRequest_<ContainerAllocator> const> ConstPtr;

}; // struct NodeletLoadRequest_

typedef ::nodelet::NodeletLoadRequest_<std::allocator<void> > NodeletLoadRequest;

typedef boost::shared_ptr< ::nodelet::NodeletLoadRequest > NodeletLoadRequestPtr;
typedef boost::shared_ptr< ::nodelet::NodeletLoadRequest const> NodeletLoadRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nodelet::NodeletLoadRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nodelet::NodeletLoadRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nodelet::NodeletLoadRequest_<ContainerAllocator1> & lhs, const ::nodelet::NodeletLoadRequest_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.type == rhs.type &&
    lhs.remap_source_args == rhs.remap_source_args &&
    lhs.remap_target_args == rhs.remap_target_args &&
    lhs.my_argv == rhs.my_argv &&
    lhs.bond_id == rhs.bond_id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nodelet::NodeletLoadRequest_<ContainerAllocator1> & lhs, const ::nodelet::NodeletLoadRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nodelet

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::nodelet::NodeletLoadRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nodelet::NodeletLoadRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nodelet::NodeletLoadRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nodelet::NodeletLoadRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nodelet::NodeletLoadRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nodelet::NodeletLoadRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nodelet::NodeletLoadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c6e28cc4d2e259249d96cfb50658fbec";
  }

  static const char* value(const ::nodelet::NodeletLoadRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc6e28cc4d2e25924ULL;
  static const uint64_t static_value2 = 0x9d96cfb50658fbecULL;
};

template<class ContainerAllocator>
struct DataType< ::nodelet::NodeletLoadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nodelet/NodeletLoadRequest";
  }

  static const char* value(const ::nodelet::NodeletLoadRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nodelet::NodeletLoadRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"string type\n"
"string[] remap_source_args\n"
"string[] remap_target_args\n"
"string[] my_argv\n"
"\n"
"string bond_id\n"
;
  }

  static const char* value(const ::nodelet::NodeletLoadRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nodelet::NodeletLoadRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.type);
      stream.next(m.remap_source_args);
      stream.next(m.remap_target_args);
      stream.next(m.my_argv);
      stream.next(m.bond_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NodeletLoadRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nodelet::NodeletLoadRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nodelet::NodeletLoadRequest_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.type);
    s << indent << "remap_source_args[]" << std::endl;
    for (size_t i = 0; i < v.remap_source_args.size(); ++i)
    {
      s << indent << "  remap_source_args[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.remap_source_args[i]);
    }
    s << indent << "remap_target_args[]" << std::endl;
    for (size_t i = 0; i < v.remap_target_args.size(); ++i)
    {
      s << indent << "  remap_target_args[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.remap_target_args[i]);
    }
    s << indent << "my_argv[]" << std::endl;
    for (size_t i = 0; i < v.my_argv.size(); ++i)
    {
      s << indent << "  my_argv[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.my_argv[i]);
    }
    s << indent << "bond_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.bond_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NODELET_MESSAGE_NODELETLOADREQUEST_H
