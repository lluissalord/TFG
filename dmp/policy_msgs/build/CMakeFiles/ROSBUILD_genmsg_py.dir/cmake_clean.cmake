FILE(REMOVE_RECURSE
  "../msg_gen"
  "../msg_gen"
  "../src/policy_msgs/msg"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/policy_msgs/msg/__init__.py"
  "../src/policy_msgs/msg/_SingleParameterPolicy.py"
  "../src/policy_msgs/msg/_CovariantTrajectoryPolicy.py"
  "../src/policy_msgs/msg/_TrajectoryPoint.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
