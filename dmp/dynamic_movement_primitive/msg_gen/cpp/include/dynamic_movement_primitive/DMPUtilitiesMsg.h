/* Auto-generated by genmsg_cpp for file /home/lluis/catkin_ws/src/usc-clmc-ros-pkg/dmp/dynamic_movement_primitive/msg/DMPUtilitiesMsg.msg */
#ifndef DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_DMPUTILITIESMSG_H
#define DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_DMPUTILITIESMSG_H
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

#include "dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveMsg.h"
#include "dynamic_movement_primitive/NC2010DynamicMovementPrimitiveMsg.h"

namespace dynamic_movement_primitive
{
template <class ContainerAllocator>
struct DMPUtilitiesMsg_ {
  typedef DMPUtilitiesMsg_<ContainerAllocator> Type;

  DMPUtilitiesMsg_()
  : dmp_version()
  , icra2009_dmp()
  , nc2010_dmp()
  {
  }

  DMPUtilitiesMsg_(const ContainerAllocator& _alloc)
  : dmp_version(_alloc)
  , icra2009_dmp(_alloc)
  , nc2010_dmp(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _dmp_version_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  dmp_version;

  typedef  ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator>  _icra2009_dmp_type;
   ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator>  icra2009_dmp;

  typedef  ::dynamic_movement_primitive::NC2010DynamicMovementPrimitiveMsg_<ContainerAllocator>  _nc2010_dmp_type;
   ::dynamic_movement_primitive::NC2010DynamicMovementPrimitiveMsg_<ContainerAllocator>  nc2010_dmp;

  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  ICRA2009;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  NC2010;

  typedef boost::shared_ptr< ::dynamic_movement_primitive::DMPUtilitiesMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_movement_primitive::DMPUtilitiesMsg_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct DMPUtilitiesMsg
typedef  ::dynamic_movement_primitive::DMPUtilitiesMsg_<std::allocator<void> > DMPUtilitiesMsg;

typedef boost::shared_ptr< ::dynamic_movement_primitive::DMPUtilitiesMsg> DMPUtilitiesMsgPtr;
typedef boost::shared_ptr< ::dynamic_movement_primitive::DMPUtilitiesMsg const> DMPUtilitiesMsgConstPtr;

template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DMPUtilitiesMsg_<ContainerAllocator>::ICRA2009 = "ICRA2009";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DMPUtilitiesMsg_<ContainerAllocator>::NC2010 = "NC2010";

template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::dynamic_movement_primitive::DMPUtilitiesMsg_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::dynamic_movement_primitive::DMPUtilitiesMsg_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace dynamic_movement_primitive

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::DMPUtilitiesMsg_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::dynamic_movement_primitive::DMPUtilitiesMsg_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::dynamic_movement_primitive::DMPUtilitiesMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "606043f93a494c67d2a6701fbca9a0e4";
  }

  static const char* value(const  ::dynamic_movement_primitive::DMPUtilitiesMsg_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x606043f93a494c67ULL;
  static const uint64_t static_value2 = 0xd2a6701fbca9a0e4ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_movement_primitive::DMPUtilitiesMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamic_movement_primitive/DMPUtilitiesMsg";
  }

  static const char* value(const  ::dynamic_movement_primitive::DMPUtilitiesMsg_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamic_movement_primitive::DMPUtilitiesMsg_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string dmp_version\n\
string ICRA2009=ICRA2009\n\
string NC2010=NC2010\n\
dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveMsg icra2009_dmp\n\
dynamic_movement_primitive/NC2010DynamicMovementPrimitiveMsg nc2010_dmp\n\
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveMsg\n\
dynamic_movement_primitive/DynamicMovementPrimitiveMsg dmp\n\
dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveStateMsg state\n\
dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveParametersMsg parameters\n\
dynamic_movement_primitive/ICRA2009TransformationSystemMsg[] transformation_systems\n\
dynamic_movement_primitive/ICRA2009CanonicalSystemMsg canonical_system\n\
================================================================================\n\
MSG: dynamic_movement_primitive/DynamicMovementPrimitiveMsg\n\
dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg state\n\
dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg parameters\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg\n\
bool is_learned\n\
bool is_setup\n\
bool is_start_set\n\
dynamic_movement_primitive/TimeMsg current_time\n\
int32 num_training_samples\n\
int32 num_generated_samples\n\
int32 seq\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/TimeMsg\n\
float64 delta_t\n\
float64 tau\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg\n\
dynamic_movement_primitive/TimeMsg initial_time\n\
float64 teaching_duration\n\
float64 execution_duration\n\
float64 cutoff\n\
int32 type\n\
int32 id\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveStateMsg\n\
\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveParametersMsg\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009TransformationSystemMsg\n\
dynamic_movement_primitive/TransformationSystemMsg transformation_system\n\
dynamic_movement_primitive/ICRA2009TransformationSystemStateMsg[] states\n\
dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg[] parameters\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/TransformationSystemMsg\n\
dynamic_movement_primitive/TransformationSystemStateMsg[] states\n\
dynamic_movement_primitive/TransformationSystemParametersMsg[] parameters\n\
int32 integration_method\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/TransformationSystemStateMsg\n\
dynamic_movement_primitive/StateMsg internal\n\
dynamic_movement_primitive/StateMsg target\n\
dynamic_movement_primitive/StateMsg current\n\
\n\
float64 start\n\
float64 goal\n\
\n\
float64 f\n\
float64 ft\n\
\n\
# float64[] function_input\n\
# float64[] function_target\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/StateMsg\n\
float64 x\n\
float64 xd\n\
float64 xdd\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/TransformationSystemParametersMsg\n\
float64 initial_start\n\
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
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009TransformationSystemStateMsg\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg\n\
float64 k_gain\n\
float64 d_gain\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemMsg\n\
dynamic_movement_primitive/CanonicalSystemMsg canonical_system\n\
dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg state\n\
dynamic_movement_primitive/ICRA2009CanonicalSystemParametersMsg parameters\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/CanonicalSystemMsg\n\
dynamic_movement_primitive/CanonicalSystemStateMsg state\n\
dynamic_movement_primitive/CanonicalSystemParametersMsg parameters\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/CanonicalSystemStateMsg\n\
dynamic_movement_primitive/StateMsg state\n\
float64 time\n\
================================================================================\n\
MSG: dynamic_movement_primitive/CanonicalSystemParametersMsg\n\
float64 alpha_x\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemParametersMsg\n\
\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/NC2010DynamicMovementPrimitiveMsg\n\
dynamic_movement_primitive/DynamicMovementPrimitiveMsg dmp\n\
dynamic_movement_primitive/NC2010DynamicMovementPrimitiveStateMsg state\n\
dynamic_movement_primitive/NC2010DynamicMovementPrimitiveParametersMsg parameters\n\
dynamic_movement_primitive/NC2010TransformationSystemMsg[] transformation_systems\n\
dynamic_movement_primitive/NC2010CanonicalSystemMsg canonical_system\n\
================================================================================\n\
MSG: dynamic_movement_primitive/NC2010DynamicMovementPrimitiveStateMsg\n\
\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/NC2010DynamicMovementPrimitiveParametersMsg\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/NC2010TransformationSystemMsg\n\
dynamic_movement_primitive/TransformationSystemMsg transformation_system\n\
dynamic_movement_primitive/NC2010TransformationSystemStateMsg[] states\n\
dynamic_movement_primitive/NC2010TransformationSystemParametersMsg[] parameters\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/NC2010TransformationSystemStateMsg\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/NC2010TransformationSystemParametersMsg\n\
float64 k_gain\n\
float64 d_gain\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/NC2010CanonicalSystemMsg\n\
dynamic_movement_primitive/CanonicalSystemMsg canonical_system\n\
dynamic_movement_primitive/NC2010CanonicalSystemStateMsg state\n\
dynamic_movement_primitive/NC2010CanonicalSystemParametersMsg parameters\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/NC2010CanonicalSystemStateMsg\n\
\n\
================================================================================\n\
MSG: dynamic_movement_primitive/NC2010CanonicalSystemParametersMsg\n\
\n\
\n\
";
  }

  static const char* value(const  ::dynamic_movement_primitive::DMPUtilitiesMsg_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamic_movement_primitive::DMPUtilitiesMsg_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.dmp_version);
    stream.next(m.icra2009_dmp);
    stream.next(m.nc2010_dmp);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct DMPUtilitiesMsg_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_movement_primitive::DMPUtilitiesMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::dynamic_movement_primitive::DMPUtilitiesMsg_<ContainerAllocator> & v) 
  {
    s << indent << "dmp_version: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.dmp_version);
    s << indent << "icra2009_dmp: ";
s << std::endl;
    Printer< ::dynamic_movement_primitive::ICRA2009DynamicMovementPrimitiveMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.icra2009_dmp);
    s << indent << "nc2010_dmp: ";
s << std::endl;
    Printer< ::dynamic_movement_primitive::NC2010DynamicMovementPrimitiveMsg_<ContainerAllocator> >::stream(s, indent + "  ", v.nc2010_dmp);
  }
};


} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_MOVEMENT_PRIMITIVE_MESSAGE_DMPUTILITIESMSG_H

