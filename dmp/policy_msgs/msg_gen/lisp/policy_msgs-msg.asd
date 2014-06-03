
(cl:in-package :asdf)

(defsystem "policy_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "SingleParameterPolicy" :depends-on ("_package_SingleParameterPolicy"))
    (:file "_package_SingleParameterPolicy" :depends-on ("_package"))
    (:file "CovariantTrajectoryPolicy" :depends-on ("_package_CovariantTrajectoryPolicy"))
    (:file "_package_CovariantTrajectoryPolicy" :depends-on ("_package"))
    (:file "TrajectoryPoint" :depends-on ("_package_TrajectoryPoint"))
    (:file "_package_TrajectoryPoint" :depends-on ("_package"))
  ))