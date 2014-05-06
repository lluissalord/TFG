; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude ICRA2009TransformationSystemMsg.msg.html

(cl:defclass <ICRA2009TransformationSystemMsg> (roslisp-msg-protocol:ros-message)
  ((transformation_system
    :reader transformation_system
    :initarg :transformation_system
    :type dynamic_movement_primitive-msg:TransformationSystemMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:TransformationSystemMsg))
   (states
    :reader states
    :initarg :states
    :type (cl:vector dynamic_movement_primitive-msg:ICRA2009TransformationSystemStateMsg)
   :initform (cl:make-array 0 :element-type 'dynamic_movement_primitive-msg:ICRA2009TransformationSystemStateMsg :initial-element (cl:make-instance 'dynamic_movement_primitive-msg:ICRA2009TransformationSystemStateMsg)))
   (parameters
    :reader parameters
    :initarg :parameters
    :type (cl:vector dynamic_movement_primitive-msg:ICRA2009TransformationSystemParametersMsg)
   :initform (cl:make-array 0 :element-type 'dynamic_movement_primitive-msg:ICRA2009TransformationSystemParametersMsg :initial-element (cl:make-instance 'dynamic_movement_primitive-msg:ICRA2009TransformationSystemParametersMsg))))
)

(cl:defclass ICRA2009TransformationSystemMsg (<ICRA2009TransformationSystemMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ICRA2009TransformationSystemMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ICRA2009TransformationSystemMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<ICRA2009TransformationSystemMsg> is deprecated: use dynamic_movement_primitive-msg:ICRA2009TransformationSystemMsg instead.")))

(cl:ensure-generic-function 'transformation_system-val :lambda-list '(m))
(cl:defmethod transformation_system-val ((m <ICRA2009TransformationSystemMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:transformation_system-val is deprecated.  Use dynamic_movement_primitive-msg:transformation_system instead.")
  (transformation_system m))

(cl:ensure-generic-function 'states-val :lambda-list '(m))
(cl:defmethod states-val ((m <ICRA2009TransformationSystemMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:states-val is deprecated.  Use dynamic_movement_primitive-msg:states instead.")
  (states m))

(cl:ensure-generic-function 'parameters-val :lambda-list '(m))
(cl:defmethod parameters-val ((m <ICRA2009TransformationSystemMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:parameters-val is deprecated.  Use dynamic_movement_primitive-msg:parameters instead.")
  (parameters m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ICRA2009TransformationSystemMsg>) ostream)
  "Serializes a message object of type '<ICRA2009TransformationSystemMsg>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'transformation_system) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'states))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'states))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'parameters))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'parameters))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ICRA2009TransformationSystemMsg>) istream)
  "Deserializes a message object of type '<ICRA2009TransformationSystemMsg>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'transformation_system) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'states) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'states)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'dynamic_movement_primitive-msg:ICRA2009TransformationSystemStateMsg))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'parameters) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'parameters)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'dynamic_movement_primitive-msg:ICRA2009TransformationSystemParametersMsg))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ICRA2009TransformationSystemMsg>)))
  "Returns string type for a message object of type '<ICRA2009TransformationSystemMsg>"
  "dynamic_movement_primitive/ICRA2009TransformationSystemMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ICRA2009TransformationSystemMsg)))
  "Returns string type for a message object of type 'ICRA2009TransformationSystemMsg"
  "dynamic_movement_primitive/ICRA2009TransformationSystemMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ICRA2009TransformationSystemMsg>)))
  "Returns md5sum for a message object of type '<ICRA2009TransformationSystemMsg>"
  "3b7bd12f6619c2b693737fa98abdf97c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ICRA2009TransformationSystemMsg)))
  "Returns md5sum for a message object of type 'ICRA2009TransformationSystemMsg"
  "3b7bd12f6619c2b693737fa98abdf97c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ICRA2009TransformationSystemMsg>)))
  "Returns full string definition for message of type '<ICRA2009TransformationSystemMsg>"
  (cl:format cl:nil "dynamic_movement_primitive/TransformationSystemMsg transformation_system~%dynamic_movement_primitive/ICRA2009TransformationSystemStateMsg[] states~%dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg[] parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemMsg~%dynamic_movement_primitive/TransformationSystemStateMsg[] states~%dynamic_movement_primitive/TransformationSystemParametersMsg[] parameters~%int32 integration_method~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemStateMsg~%dynamic_movement_primitive/StateMsg internal~%dynamic_movement_primitive/StateMsg target~%dynamic_movement_primitive/StateMsg current~%~%float64 start~%float64 goal~%~%float64 f~%float64 ft~%~%# float64[] function_input~%# float64[] function_target~%~%================================================================================~%MSG: dynamic_movement_primitive/StateMsg~%float64 x~%float64 xd~%float64 xdd~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemParametersMsg~%float64 initial_start~%float64 initial_goal~%~%string name~%~%locally_weighted_regression/Model lwr_model~%================================================================================~%MSG: locally_weighted_regression/Model~%int32 num_rfs~%bool use_offsets~%float64[] widths~%float64[] centers~%float64[] slopes~%float64[] offsets~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009TransformationSystemStateMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg~%float64 k_gain~%float64 d_gain~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ICRA2009TransformationSystemMsg)))
  "Returns full string definition for message of type 'ICRA2009TransformationSystemMsg"
  (cl:format cl:nil "dynamic_movement_primitive/TransformationSystemMsg transformation_system~%dynamic_movement_primitive/ICRA2009TransformationSystemStateMsg[] states~%dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg[] parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemMsg~%dynamic_movement_primitive/TransformationSystemStateMsg[] states~%dynamic_movement_primitive/TransformationSystemParametersMsg[] parameters~%int32 integration_method~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemStateMsg~%dynamic_movement_primitive/StateMsg internal~%dynamic_movement_primitive/StateMsg target~%dynamic_movement_primitive/StateMsg current~%~%float64 start~%float64 goal~%~%float64 f~%float64 ft~%~%# float64[] function_input~%# float64[] function_target~%~%================================================================================~%MSG: dynamic_movement_primitive/StateMsg~%float64 x~%float64 xd~%float64 xdd~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemParametersMsg~%float64 initial_start~%float64 initial_goal~%~%string name~%~%locally_weighted_regression/Model lwr_model~%================================================================================~%MSG: locally_weighted_regression/Model~%int32 num_rfs~%bool use_offsets~%float64[] widths~%float64[] centers~%float64[] slopes~%float64[] offsets~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009TransformationSystemStateMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg~%float64 k_gain~%float64 d_gain~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ICRA2009TransformationSystemMsg>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'transformation_system))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'states) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'parameters) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ICRA2009TransformationSystemMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'ICRA2009TransformationSystemMsg
    (cl:cons ':transformation_system (transformation_system msg))
    (cl:cons ':states (states msg))
    (cl:cons ':parameters (parameters msg))
))
