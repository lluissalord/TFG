FILE(REMOVE_RECURSE
  "../msg_gen"
  "../msg_gen"
  "../src/policy_msgs/msg"
  "CMakeFiles/ROSBUILD_genmsg_lisp"
  "../msg_gen/lisp/SingleParameterPolicy.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_SingleParameterPolicy.lisp"
  "../msg_gen/lisp/CovariantTrajectoryPolicy.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_CovariantTrajectoryPolicy.lisp"
  "../msg_gen/lisp/TrajectoryPoint.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_TrajectoryPoint.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
