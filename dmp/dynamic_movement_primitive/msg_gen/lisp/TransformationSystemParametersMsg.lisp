; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude TransformationSystemParametersMsg.msg.html

(cl:defclass <TransformationSystemParametersMsg> (roslisp-msg-protocol:ros-message)
  ((initial_start
    :reader initial_start
    :initarg :initial_start
    :type cl:float
    :initform 0.0)
   (initial_goal
    :reader initial_goal
    :initarg :initial_goal
    :type cl:float
    :initform 0.0)
   (name
    :reader name
    :initarg :name
    :type cl:string
    :initform "")
   (lwr_model
    :reader lwr_model
    :initarg :lwr_model
    :type locally_weighted_regression-msg:Model
    :initform (cl:make-instance 'locally_weighted_regression-msg:Model)))
)

(cl:defclass TransformationSystemParametersMsg (<TransformationSystemParametersMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TransformationSystemParametersMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TransformationSystemParametersMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<TransformationSystemParametersMsg> is deprecated: use dynamic_movement_primitive-msg:TransformationSystemParametersMsg instead.")))

(cl:ensure-generic-function 'initial_start-val :lambda-list '(m))
(cl:defmethod initial_start-val ((m <TransformationSystemParametersMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:initial_start-val is deprecated.  Use dynamic_movement_primitive-msg:initial_start instead.")
  (initial_start m))

(cl:ensure-generic-function 'initial_goal-val :lambda-list '(m))
(cl:defmethod initial_goal-val ((m <TransformationSystemParametersMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:initial_goal-val is deprecated.  Use dynamic_movement_primitive-msg:initial_goal instead.")
  (initial_goal m))

(cl:ensure-generic-function 'name-val :lambda-list '(m))
(cl:defmethod name-val ((m <TransformationSystemParametersMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:name-val is deprecated.  Use dynamic_movement_primitive-msg:name instead.")
  (name m))

(cl:ensure-generic-function 'lwr_model-val :lambda-list '(m))
(cl:defmethod lwr_model-val ((m <TransformationSystemParametersMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:lwr_model-val is deprecated.  Use dynamic_movement_primitive-msg:lwr_model instead.")
  (lwr_model m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TransformationSystemParametersMsg>) ostream)
  "Serializes a message object of type '<TransformationSystemParametersMsg>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'initial_start))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'initial_goal))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'name))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'lwr_model) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TransformationSystemParametersMsg>) istream)
  "Deserializes a message object of type '<TransformationSystemParametersMsg>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'initial_start) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'initial_goal) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'lwr_model) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TransformationSystemParametersMsg>)))
  "Returns string type for a message object of type '<TransformationSystemParametersMsg>"
  "dynamic_movement_primitive/TransformationSystemParametersMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TransformationSystemParametersMsg)))
  "Returns string type for a message object of type 'TransformationSystemParametersMsg"
  "dynamic_movement_primitive/TransformationSystemParametersMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TransformationSystemParametersMsg>)))
  "Returns md5sum for a message object of type '<TransformationSystemParametersMsg>"
  "66ade66cd12b78653ad8c723f086d415")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TransformationSystemParametersMsg)))
  "Returns md5sum for a message object of type 'TransformationSystemParametersMsg"
  "66ade66cd12b78653ad8c723f086d415")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TransformationSystemParametersMsg>)))
  "Returns full string definition for message of type '<TransformationSystemParametersMsg>"
  (cl:format cl:nil "float64 initial_start~%float64 initial_goal~%~%string name~%~%locally_weighted_regression/Model lwr_model~%================================================================================~%MSG: locally_weighted_regression/Model~%int32 num_rfs~%bool use_offsets~%float64[] widths~%float64[] centers~%float64[] slopes~%float64[] offsets~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TransformationSystemParametersMsg)))
  "Returns full string definition for message of type 'TransformationSystemParametersMsg"
  (cl:format cl:nil "float64 initial_start~%float64 initial_goal~%~%string name~%~%locally_weighted_regression/Model lwr_model~%================================================================================~%MSG: locally_weighted_regression/Model~%int32 num_rfs~%bool use_offsets~%float64[] widths~%float64[] centers~%float64[] slopes~%float64[] offsets~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TransformationSystemParametersMsg>))
  (cl:+ 0
     8
     8
     4 (cl:length (cl:slot-value msg 'name))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'lwr_model))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TransformationSystemParametersMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'TransformationSystemParametersMsg
    (cl:cons ':initial_start (initial_start msg))
    (cl:cons ':initial_goal (initial_goal msg))
    (cl:cons ':name (name msg))
    (cl:cons ':lwr_model (lwr_model msg))
))
