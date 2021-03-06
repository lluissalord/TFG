/* Auto-generated by genmsg_cpp for file /home/lluis/catkin_ws/src/usc-clmc-ros-pkg/dmp/dynamic_movement_primitive/msg/ICRA2009TransformationSystemParametersMsg.msg */
#ifndef DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_ICRA2009TRANSFORMATIONSYSTEMPARAMETERSMSG_H
#define DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_ICRA2009TRANSFORMATIONSYSTEMPARAMETERSMSG_H
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


namespace dynamic_movement_primitive
{
template <class ContainerAllocator>
struct ICRA2009TransformationSystemParametersMsg_ {
  typedef ICRA2009TransformationSystemParametersMsg_<ContainerAllocator> Type;

  ICRA2009TransformationSystemParametersMsg_()
  : k_gain(0.0)
  , d_gain(0.0)
  {
  }

  ICRA2009TransformationSystemParametersMsg_(const ContainerAllocator& _alloc)
  : k_gain(0.0)
  , d_gain(0.0)
  {
  }

  typedef double _k_gain_type;
  double k_gain;

  typedef double _d_gain_type;
  double d_gain;


  typedef boost::shared_ptr< ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ICRA2009TransformationSystemParametersMsg
typedef  ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<std::allocator<void> > ICRA2009TransformationSystemParametersMsg;

typedef boost::shared_ptr< ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg> ICRA2009TransformationSystemParametersMsgPtr;
typedef boost::shared_ptr< ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg const> ICRA2009TransformationSystemParametersMsgConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace dynamic_movement_primitive

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "858c1fba982f6aa8325ab65de6af43ce";
  }

  static const char* value(const  ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x858c1fba982f6aa8ULL;
  static const uint64_t static_value2 = 0x325ab65de6af43ceULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg";
  }

  static const char* value(const  ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64 k_gain\n\
float64 d_gain\n\
\n\
";
  }

  static const char* value(const  ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.k_gain);
    stream.next(m.d_gain);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ICRA2009TransformationSystemParametersMsg_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::dynamic_movement_primitive::ICRA2009TransformationSystemParametersMsg_<ContainerAllocator> & v) 
  {
    s << indent << "k_gain: ";
    Printer<double>::stream(s, indent + "  ", v.k_gain);
    s << indent << "d_gain: ";
    Printer<double>::stream(s, indent + "  ", v.d_gain);
  }
};


} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_ICRA2009TRANSFORMATIONSYSTEMPARAMETERSMSG_H

