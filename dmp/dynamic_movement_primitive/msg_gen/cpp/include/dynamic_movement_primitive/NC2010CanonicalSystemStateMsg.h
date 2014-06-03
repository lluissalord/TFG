/* Auto-generated by genmsg_cpp for file /home/lluis/catkin_ws/src/usc-clmc-ros-pkg/dmp/dynamic_movement_primitive/msg/NC2010CanonicalSystemStateMsg.msg */
#ifndef DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_NC2010CANONICALSYSTEMSTATEMSG_H
#define DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_NC2010CANONICALSYSTEMSTATEMSG_H
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
struct NC2010CanonicalSystemStateMsg_ {
  typedef NC2010CanonicalSystemStateMsg_<ContainerAllocator> Type;

  NC2010CanonicalSystemStateMsg_()
  {
  }

  NC2010CanonicalSystemStateMsg_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct NC2010CanonicalSystemStateMsg
typedef  ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<std::allocator<void> > NC2010CanonicalSystemStateMsg;

typedef boost::shared_ptr< ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg> NC2010CanonicalSystemStateMsgPtr;
typedef boost::shared_ptr< ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg const> NC2010CanonicalSystemStateMsgConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace dynamic_movement_primitive

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamic_movement_primitive/NC2010CanonicalSystemStateMsg";
  }

  static const char* value(const  ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct NC2010CanonicalSystemStateMsg_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::dynamic_movement_primitive::NC2010CanonicalSystemStateMsg_<ContainerAllocator> & v) 
  {
  }
};


} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_NC2010CANONICALSYSTEMSTATEMSG_H
