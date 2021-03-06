/* Auto-generated by genmsg_cpp for file /home/lluis/catkin_ws/src/usc-clmc-ros-pkg/dmp/dynamic_movement_primitive/msg/TransformationSystemParametersMsg.msg */
#ifndef DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_TRANSFORMATIONSYSTEMPARAMETERSMSG_H
#define DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_TRANSFORMATIONSYSTEMPARAMETERSMSG_H
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

#include "locally_weighted_regression/Model.h"

namespace dynamic_movement_primitive
{
template <class ContainerAllocator>
struct TransformationSystemParametersMsg_ {
  typedef TransformationSystemParametersMsg_<ContainerAllocator> Type;

  TransformationSystemParametersMsg_()
  : initial_start(0.0)
  , initial_goal(0.0)
  , name()
  , lwr_model()
  {
  }

  TransformationSystemParametersMsg_(const ContainerAllocator& _alloc)
  : initial_start(0.0)
  , initial_goal(0.0)
  , name(_alloc)
  , lwr_model(_alloc)
  {
  }

  typedef double _initial_start_type;
  double initial_start;

  typedef double _initial_goal_type;
  double initial_goal;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  name;

  typedef  ::locally_weighted_regression::Model_<ContainerAllocator>  _lwr_model_type;
   ::locally_weighted_regression::Model_<ContainerAllocator>  lwr_model;


  typedef boost::shared_ptr< ::dynamic_movement_primitive::TransformationSystemParametersMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_movement_primitive::TransformationSystemParametersMsg_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TransformationSystemParametersMsg
typedef  ::dynamic_movement_primitive::TransformationSystemParametersMsg_<std::allocator<void> > TransformationSystemParametersMsg;

typedef boost::shared_ptr< ::dynamic_movement_primitive::TransformationSystemParametersMsg> TransformationSystemParametersMsgPtr;
typedef boost::shared_ptr< ::dynamic_movement_primitive::TransformationSystemParametersMsg const> TransformationSystemParametersMsgConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::dynamic_movement_primitive::TransformationSystemParametersMsg_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::dynamic_movement_primitive::TransformationSystemParametersMsg_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace dynamic_movement_primitive

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::TransformationSystemParametersMsg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::TransformationSystemParametersMsg_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamic_movement_primitive::TransformationSystemParametersMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "66ade66cd12b78653ad8c723f086d415";
  }

  static const char* value(const  ::dynamic_movement_primitive::TransformationSystemParametersMsg_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x66ade66cd12b7865ULL;
  static const uint64_t static_value2 = 0x3ad8c723f086d415ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_movement_primitive::TransformationSystemParametersMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamic_movement_primitive/TransformationSystemParametersMsg";
  }

  static const char* value(const  ::dynamic_movement_primitive::TransformationSystemParametersMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamic_movement_primitive::TransformationSystemParametersMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 initial_start\n\
float64 initial_goal\n\
\n\
string name\n\
\n\
locally_weighted_regression/Model lwr_model\n\
================================================================================\n\
MSG: locally_weighted_regression/Model\n\
int32 num_rfs\n\
bool use_offsets\n\
float64[] widths\n\
float64[] centers\n\
float64[] slopes\n\
float64[] offsets\n\
\n\
";
  }

  static const char* value(const  ::dynamic_movement_primitive::TransformationSystemParametersMsg_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamic_movement_primitive::TransformationSystemParametersMsg_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.initial_start);
    stream.next(m.initial_goal);
    stream.next(m.name);
    stream.next(m.lwr_model);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TransformationSystemParametersMsg_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_movement_primitive::TransformationSystemParametersMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::dynamic_movement_primitive::TransformationSystemParametersMsg_<ContainerAllocator> & v) 
  {
    s << indent << "initial_start: ";
    Printer<double>::stream(s, indent + "  ", v.initial_start);
    s << indent << "initial_goal: ";
    Printer<double>::stream(s, indent + "  ", v.initial_goal);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "lwr_model: ";
s << std::endl;
    Printer< ::locally_weighted_regression::Model_<ContainerAllocator> >::stream(s, indent + "  ", v.lwr_model);
  }
};


} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_TRANSFORMATIONSYSTEMPARAMETERSMSG_H

