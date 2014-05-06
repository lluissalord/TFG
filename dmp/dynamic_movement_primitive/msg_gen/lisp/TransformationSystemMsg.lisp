; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude TransformationSystemMsg.msg.html

(cl:defclass <TransformationSystemMsg> (roslisp-msg-protocol:ros-message)
  ((states
    :reader states
    :initarg :states
    :type (cl:vector dynamic_movement_primitive-msg:TransformationSystemStateMsg)
   :initform (cl:make-array 0 :element-type 'dynamic_movement_primitive-msg:TransformationSystemStateMsg :initial-element (cl:make-instance 'dynamic_movement_primitive-msg:TransformationSystemStateMsg)))
   (parameters
    :reader parameters
    :initarg :parameters
    :type (cl:vector dynamic_movement_primitive-msg:TransformationSystemParametersMsg)
   :initform (cl:make-array 0 :element-type 'dynamic_movement_primitive-msg:TransformationSystemParametersMsg :initial-element (cl:make-instance 'dynamic_movement_primitive-msg:TransformationSystemParametersMsg)))
   (integration_method
    :reader integration_method
    :initarg :integration_method
    :type cl:integer
    :initform 0))
)

(cl:defclass TransformationSystemMsg (<TransformationSystemMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TransformationSystemMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TransformationSystemMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<TransformationSystemMsg> is deprecated: use dynamic_movement_primitive-msg:TransformationSystemMsg instead.")))

(cl:ensure-generic-function 'states-val :lambda-list '(m))
(cl:defmethod states-val ((m <TransformationSystemMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:states-val is deprecated.  Use dynamic_movement_primitive-msg:states instead.")
  (states m))

(cl:ensure-generic-function 'parameters-val :lambda-list '(m))
(cl:defmethod parameters-val ((m <TransformationSystemMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:parameters-val is deprecated.  Use dynamic_movement_primitive-msg:parameters instead.")
  (parameters m))

(cl:ensure-generic-function 'integration_method-val :lambda-list '(m))
(cl:defmethod integration_method-val ((m <TransformationSystemMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:integration_method-val is deprecated.  Use dynamic_movement_primitive-msg:integration_method instead.")
  (integration_method m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TransformationSystemMsg>) ostream)
  "Serializes a message object of type '<TransformationSystemMsg>"
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
  (cl:let* ((signed (cl:slot-value msg 'integration_method)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TransformationSystemMsg>) istream)
  "Deserializes a message object of type '<TransformationSystemMsg>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'states) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'states)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'dynamic_movement_primitive-msg:TransformationSystemStateMsg))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'parameters) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'parameters)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'dynamic_movement_primitive-msg:TransformationSystemParametersMsg))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'integration_method) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TransformationSystemMsg>)))
  "Returns string type for a message object of type '<TransformationSystemMsg>"
  "dynamic_movement_primitive/TransformationSystemMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TransformationSystemMsg)))
  "Returns string type for a message object of type 'TransformationSystemMsg"
  "dynamic_movement_primitive/TransformationSystemMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TransformationSystemMsg>)))
  "Returns md5sum for a message object of type '<TransformationSystemMsg>"
  "c7a237f6cac6af4321aab21205591692")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TransformationSystemMsg)))
  "Returns md5sum for a message object of type 'TransformationSystemMsg"
  "c7a237f6cac6af4321aab21205591692")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TransformationSystemMsg>)))
  "Returns full string definition for message of type '<TransformationSystemMsg>"
  (cl:format cl:nil "dynamic_movement_primitive/TransformationSystemStateMsg[] states~%dynamic_movement_primitive/TransformationSystemParametersMsg[] parameters~%int32 integration_method~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemStateMsg~%dynamic_movement_primitive/StateMsg internal~%dynamic_movement_primitive/StateMsg target~%dynamic_movement_primitive/StateMsg current~%~%float64 start~%float64 goal~%~%float64 f~%float64 ft~%~%# float64[] function_input~%# float64[] function_target~%~%================================================================================~%MSG: dynamic_movement_primitive/StateMsg~%float64 x~%float64 xd~%float64 xdd~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemParametersMsg~%float64 initial_start~%float64 initial_goal~%~%string name~%~%locally_weighted_regression/Model lwr_model~%================================================================================~%MSG: locally_weighted_regression/Model~%int32 num_rfs~%bool use_offsets~%float64[] widths~%float64[] centers~%float64[] slopes~%float64[] offsets~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TransformationSystemMsg)))
  "Returns full string definition for message of type 'TransformationSystemMsg"
  (cl:format cl:nil "dynamic_movement_primitive/TransformationSystemStateMsg[] states~%dynamic_movement_primitive/TransformationSystemParametersMsg[] parameters~%int32 integration_method~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemStateMsg~%dynamic_movement_primitive/StateMsg internal~%dynamic_movement_primitive/StateMsg target~%dynamic_movement_primitive/StateMsg current~%~%float64 start~%float64 goal~%~%float64 f~%float64 ft~%~%# float64[] function_input~%# float64[] function_target~%~%================================================================================~%MSG: dynamic_movement_primitive/StateMsg~%float64 x~%float64 xd~%float64 xdd~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemParametersMsg~%float64 initial_start~%float64 initial_goal~%~%string name~%~%locally_weighted_regression/Model lwr_model~%================================================================================~%MSG: locally_weighted_regression/Model~%int32 num_rfs~%bool use_offsets~%float64[] widths~%float64[] centers~%float64[] slopes~%float64[] offsets~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TransformationSystemMsg>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'states) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'parameters) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TransformationSystemMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'TransformationSystemMsg
    (cl:cons ':states (states msg))
    (cl:cons ':parameters (parameters msg))
    (cl:cons ':integration_method (integration_method msg))
))
