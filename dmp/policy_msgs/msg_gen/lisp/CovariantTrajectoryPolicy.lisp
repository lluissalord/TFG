; Auto-generated. Do not edit!


(cl:in-package policy_msgs-msg)


;//! \htmlinclude CovariantTrajectoryPolicy.msg.html

(cl:defclass <CovariantTrajectoryPolicy> (roslisp-msg-protocol:ros-message)
  ((discretization_interval
    :reader discretization_interval
    :initarg :discretization_interval
    :type cl:float
    :initform 0.0)
   (dimension_names
    :reader dimension_names
    :initarg :dimension_names
    :type (cl:vector cl:string)
   :initform (cl:make-array 0 :element-type 'cl:string :initial-element ""))
   (points
    :reader points
    :initarg :points
    :type (cl:vector policy_msgs-msg:TrajectoryPoint)
   :initform (cl:make-array 0 :element-type 'policy_msgs-msg:TrajectoryPoint :initial-element (cl:make-instance 'policy_msgs-msg:TrajectoryPoint)))
   (derivative_costs
    :reader derivative_costs
    :initarg :derivative_costs
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (cost_ridge_factor
    :reader cost_ridge_factor
    :initarg :cost_ridge_factor
    :type cl:float
    :initform 0.0)
   (nominal_start_pose
    :reader nominal_start_pose
    :initarg :nominal_start_pose
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose)))
)

(cl:defclass CovariantTrajectoryPolicy (<CovariantTrajectoryPolicy>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CovariantTrajectoryPolicy>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CovariantTrajectoryPolicy)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name policy_msgs-msg:<CovariantTrajectoryPolicy> is deprecated: use policy_msgs-msg:CovariantTrajectoryPolicy instead.")))

(cl:ensure-generic-function 'discretization_interval-val :lambda-list '(m))
(cl:defmethod discretization_interval-val ((m <CovariantTrajectoryPolicy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader policy_msgs-msg:discretization_interval-val is deprecated.  Use policy_msgs-msg:discretization_interval instead.")
  (discretization_interval m))

(cl:ensure-generic-function 'dimension_names-val :lambda-list '(m))
(cl:defmethod dimension_names-val ((m <CovariantTrajectoryPolicy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader policy_msgs-msg:dimension_names-val is deprecated.  Use policy_msgs-msg:dimension_names instead.")
  (dimension_names m))

(cl:ensure-generic-function 'points-val :lambda-list '(m))
(cl:defmethod points-val ((m <CovariantTrajectoryPolicy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader policy_msgs-msg:points-val is deprecated.  Use policy_msgs-msg:points instead.")
  (points m))

(cl:ensure-generic-function 'derivative_costs-val :lambda-list '(m))
(cl:defmethod derivative_costs-val ((m <CovariantTrajectoryPolicy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader policy_msgs-msg:derivative_costs-val is deprecated.  Use policy_msgs-msg:derivative_costs instead.")
  (derivative_costs m))

(cl:ensure-generic-function 'cost_ridge_factor-val :lambda-list '(m))
(cl:defmethod cost_ridge_factor-val ((m <CovariantTrajectoryPolicy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader policy_msgs-msg:cost_ridge_factor-val is deprecated.  Use policy_msgs-msg:cost_ridge_factor instead.")
  (cost_ridge_factor m))

(cl:ensure-generic-function 'nominal_start_pose-val :lambda-list '(m))
(cl:defmethod nominal_start_pose-val ((m <CovariantTrajectoryPolicy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader policy_msgs-msg:nominal_start_pose-val is deprecated.  Use policy_msgs-msg:nominal_start_pose instead.")
  (nominal_start_pose m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CovariantTrajectoryPolicy>) ostream)
  "Serializes a message object of type '<CovariantTrajectoryPolicy>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'discretization_interval))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'dimension_names))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((__ros_str_len (cl:length ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) ele))
   (cl:slot-value msg 'dimension_names))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'points))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'points))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'derivative_costs))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'derivative_costs))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'cost_ridge_factor))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'nominal_start_pose) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CovariantTrajectoryPolicy>) istream)
  "Deserializes a message object of type '<CovariantTrajectoryPolicy>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'discretization_interval) (roslisp-utils:decode-double-float-bits bits)))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'dimension_names) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'dimension_names)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:aref vals i) __ros_str_idx) (cl:code-char (cl:read-byte istream))))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'points) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'points)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'policy_msgs-msg:TrajectoryPoint))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'derivative_costs) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'derivative_costs)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits))))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'cost_ridge_factor) (roslisp-utils:decode-double-float-bits bits)))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'nominal_start_pose) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CovariantTrajectoryPolicy>)))
  "Returns string type for a message object of type '<CovariantTrajectoryPolicy>"
  "policy_msgs/CovariantTrajectoryPolicy")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CovariantTrajectoryPolicy)))
  "Returns string type for a message object of type 'CovariantTrajectoryPolicy"
  "policy_msgs/CovariantTrajectoryPolicy")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CovariantTrajectoryPolicy>)))
  "Returns md5sum for a message object of type '<CovariantTrajectoryPolicy>"
  "cf6963f18dd8f6c53a82df4e5705cd83")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CovariantTrajectoryPolicy)))
  "Returns md5sum for a message object of type 'CovariantTrajectoryPolicy"
  "cf6963f18dd8f6c53a82df4e5705cd83")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CovariantTrajectoryPolicy>)))
  "Returns full string definition for message of type '<CovariantTrajectoryPolicy>"
  (cl:format cl:nil "float64 discretization_interval~%string[] dimension_names~%~%# points[] must contain the start and goal also~%policy_msgs/TrajectoryPoint[] points~%~%# array of size 3, containinrg vel, acc and jerk cost weights~%float64[] derivative_costs~%~%float64 cost_ridge_factor~%~%geometry_msgs/Pose nominal_start_pose~%~%================================================================================~%MSG: policy_msgs/TrajectoryPoint~%# Positions of each dimension at a particular point in time~%float64[] positions~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of postion and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CovariantTrajectoryPolicy)))
  "Returns full string definition for message of type 'CovariantTrajectoryPolicy"
  (cl:format cl:nil "float64 discretization_interval~%string[] dimension_names~%~%# points[] must contain the start and goal also~%policy_msgs/TrajectoryPoint[] points~%~%# array of size 3, containinrg vel, acc and jerk cost weights~%float64[] derivative_costs~%~%float64 cost_ridge_factor~%~%geometry_msgs/Pose nominal_start_pose~%~%================================================================================~%MSG: policy_msgs/TrajectoryPoint~%# Positions of each dimension at a particular point in time~%float64[] positions~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of postion and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CovariantTrajectoryPolicy>))
  (cl:+ 0
     8
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'dimension_names) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4 (cl:length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'points) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'derivative_costs) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     8
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'nominal_start_pose))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CovariantTrajectoryPolicy>))
  "Converts a ROS message object to a list"
  (cl:list 'CovariantTrajectoryPolicy
    (cl:cons ':discretization_interval (discretization_interval msg))
    (cl:cons ':dimension_names (dimension_names msg))
    (cl:cons ':points (points msg))
    (cl:cons ':derivative_costs (derivative_costs msg))
    (cl:cons ':cost_ridge_factor (cost_ridge_factor msg))
    (cl:cons ':nominal_start_pose (nominal_start_pose msg))
))
