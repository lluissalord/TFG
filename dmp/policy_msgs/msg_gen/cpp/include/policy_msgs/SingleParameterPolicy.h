/* Auto-generated by genmsg_cpp for file /home/lluis/catkin_ws/src/usc-clmc-ros-pkg/dmp/policy_msgs/msg/SingleParameterPolicy.msg */
#ifndef POLICY_MSGS_MESSAGE_SINGLEPARAMETERPOLICY_H
#define POLICY_MSGS_MESSAGE_SINGLEPARAMETERPOLICY_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace policy_msgs
{
template <class ContainerAllocator>
struct SingleParameterPolicy_ {
  typedef SingleParameterPolicy_<ContainerAllocator> Type;

  SingleParameterPolicy_()
  : initialized(false)
  , num_dimensions(0)
  , num_time_steps(0)
  , parameters()
  , id(0)
  , library_directory_name()
  {
  }

  SingleParameterPolicy_(const ContainerAllocator& _alloc)
  : initialized(false)
  , num_dimensions(0)
  , num_time_steps(0)
  , parameters(_alloc)
  , id(0)
  , library_directory_name(_alloc)
  {
  }

  typedef uint8_t _initialized_type;
  uint8_t initialized;

  typedef int32_t _num_dimensions_type;
  int32_t num_dimensions;

  typedef int32_t _num_time_steps_type;
  int32_t num_time_steps;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _parameters_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  parameters;

  typedef int32_t _id_type;
  int32_t id;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _library_directory_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  library_directory_name;


  typedef boost::shared_ptr< ::policy_msgs::SingleParameterPolicy_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::policy_msgs::SingleParameterPolicy_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SingleParameterPolicy
typedef  ::policy_msgs::SingleParameterPolicy_<std::allocator<void> > SingleParameterPolicy;

typedef boost::shared_ptr< ::policy_msgs::SingleParameterPolicy> SingleParameterPolicyPtr;
typedef boost::shared_ptr< ::policy_msgs::SingleParameterPolicy const> SingleParameterPolicyConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::policy_msgs::SingleParameterPolicy_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::policy_msgs::SingleParameterPolicy_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace policy_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::policy_msgs::SingleParameterPolicy_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::policy_msgs::SingleParameterPolicy_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::policy_msgs::SingleParameterPolicy_<ContainerAllocator> > {
  static const char* value() 
  {
    return "13a6d0d4357dfb9862d925356ffa184c";
  }

  static const char* value(const  ::policy_msgs::SingleParameterPolicy_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x13a6d0d4357dfb98ULL;
  static const uint64_t static_value2 = 0x62d925356ffa184cULL;
};

template<class ContainerAllocator>
struct DataType< ::policy_msgs::SingleParameterPolicy_<ContainerAllocator> > {
  static const char* value() 
  {
    return "policy_msgs/SingleParameterPolicy";
  }

  static const char* value(const  ::policy_msgs::SingleParameterPolicy_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::policy_msgs::SingleParameterPolicy_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool initialized\n\
int32 num_dimensions\n\
int32 num_time_steps\n\
float64[] parameters\n\
int32 id\n\
string library_directory_name\n\
";
  }

  static const char* value(const  ::policy_msgs::SingleParameterPolicy_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::policy_msgs::SingleParameterPolicy_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.initialized);
    stream.next(m.num_dimensions);
    stream.next(m.num_time_steps);
    stream.next(m.parameters);
    stream.next(m.id);
    stream.next(m.library_directory_name);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SingleParameterPolicy_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::policy_msgs::SingleParameterPolicy_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::policy_msgs::SingleParameterPolicy_<ContainerAllocator> & v) 
  {
    s << indent << "initialized: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.initialized);
    s << indent << "num_dimensions: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_dimensions);
    s << indent << "num_time_steps: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_time_steps);
    s << indent << "parameters[]" << std::endl;
    for (size_t i = 0; i < v.parameters.size(); ++i)
    {
      s << indent << "  parameters[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.parameters[i]);
    }
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "library_directory_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.library_directory_name);
  }
};


} // namespace message_operations
} // namespace ros

#endif // POLICY_MSGS_MESSAGE_SINGLEPARAMETERPOLICY_H

