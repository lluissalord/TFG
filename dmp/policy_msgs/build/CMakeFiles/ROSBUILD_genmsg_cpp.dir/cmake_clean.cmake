FILE(REMOVE_RECURSE
  "../msg_gen"
  "../msg_gen"
  "../src/policy_msgs/msg"
  "CMakeFiles/ROSBUILD_genmsg_cpp"
  "../msg_gen/cpp/include/policy_msgs/SingleParameterPolicy.h"
  "../msg_gen/cpp/include/policy_msgs/CovariantTrajectoryPolicy.h"
  "../msg_gen/cpp/include/policy_msgs/TrajectoryPoint.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
