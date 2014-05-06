; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude DynamicMovementPrimitiveStateMsg.msg.html

(cl:defclass <DynamicMovementPrimitiveStateMsg> (roslisp-msg-protocol:ros-message)
  ((is_learned
    :reader is_learned
    :initarg :is_learned
    :type cl:boolean
    :initform cl:nil)
   (is_setup
    :reader is_setup
    :initarg :is_setup
    :type cl:boolean
    :initform cl:nil)
   (is_start_set
    :reader is_start_set
    :initarg :is_start_set
    :type cl:boolean
    :initform cl:nil)
   (current_time
    :reader current_time
    :initarg :current_time
    :type dynamic_movement_primitive-msg:TimeMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:TimeMsg))
   (num_training_samples
    :reader num_training_samples
    :initarg :num_training_samples
    :type cl:integer
    :initform 0)
   (num_generated_samples
    :reader num_generated_samples
    :initarg :num_generated_samples
    :type cl:integer
    :initform 0)
   (seq
    :reader seq
    :initarg :seq
    :type cl:integer
    :initform 0))
)

(cl:defclass DynamicMovementPrimitiveStateMsg (<DynamicMovementPrimitiveStateMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DynamicMovementPrimitiveStateMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DynamicMovementPrimitiveStateMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<DynamicMovementPrimitiveStateMsg> is deprecated: use dynamic_movement_primitive-msg:DynamicMovementPrimitiveStateMsg instead.")))

(cl:ensure-generic-function 'is_learned-val :lambda-list '(m))
(cl:defmethod is_learned-val ((m <DynamicMovementPrimitiveStateMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:is_learned-val is deprecated.  Use dynamic_movement_primitive-msg:is_learned instead.")
  (is_learned m))

(cl:ensure-generic-function 'is_setup-val :lambda-list '(m))
(cl:defmethod is_setup-val ((m <DynamicMovementPrimitiveStateMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:is_setup-val is deprecated.  Use dynamic_movement_primitive-msg:is_setup instead.")
  (is_setup m))

(cl:ensure-generic-function 'is_start_set-val :lambda-list '(m))
(cl:defmethod is_start_set-val ((m <DynamicMovementPrimitiveStateMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:is_start_set-val is deprecated.  Use dynamic_movement_primitive-msg:is_start_set instead.")
  (is_start_set m))

(cl:ensure-generic-function 'current_time-val :lambda-list '(m))
(cl:defmethod current_time-val ((m <DynamicMovementPrimitiveStateMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:current_time-val is deprecated.  Use dynamic_movement_primitive-msg:current_time instead.")
  (current_time m))

(cl:ensure-generic-function 'num_training_samples-val :lambda-list '(m))
(cl:defmethod num_training_samples-val ((m <DynamicMovementPrimitiveStateMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:num_training_samples-val is deprecated.  Use dynamic_movement_primitive-msg:num_training_samples instead.")
  (num_training_samples m))

(cl:ensure-generic-function 'num_generated_samples-val :lambda-list '(m))
(cl:defmethod num_generated_samples-val ((m <DynamicMovementPrimitiveStateMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:num_generated_samples-val is deprecated.  Use dynamic_movement_primitive-msg:num_generated_samples instead.")
  (num_generated_samples m))

(cl:ensure-generic-function 'seq-val :lambda-list '(m))
(cl:defmethod seq-val ((m <DynamicMovementPrimitiveStateMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:seq-val is deprecated.  Use dynamic_movement_primitive-msg:seq instead.")
  (seq m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DynamicMovementPrimitiveStateMsg>) ostream)
  "Serializes a message object of type '<DynamicMovementPrimitiveStateMsg>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'is_learned) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'is_setup) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'is_start_set) 1 0)) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'current_time) ostream)
  (cl:let* ((signed (cl:slot-value msg 'num_training_samples)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'num_generated_samples)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'seq)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DynamicMovementPrimitiveStateMsg>) istream)
  "Deserializes a message object of type '<DynamicMovementPrimitiveStateMsg>"
    (cl:setf (cl:slot-value msg 'is_learned) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'is_setup) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'is_start_set) (cl:not (cl:zerop (cl:read-byte istream))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'current_time) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'num_training_samples) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'num_generated_samples) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'seq) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DynamicMovementPrimitiveStateMsg>)))
  "Returns string type for a message object of type '<DynamicMovementPrimitiveStateMsg>"
  "dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DynamicMovementPrimitiveStateMsg)))
  "Returns string type for a message object of type 'DynamicMovementPrimitiveStateMsg"
  "dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DynamicMovementPrimitiveStateMsg>)))
  "Returns md5sum for a message object of type '<DynamicMovementPrimitiveStateMsg>"
  "ff70d60cb2445b7eba523337d26ec715")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DynamicMovementPrimitiveStateMsg)))
  "Returns md5sum for a message object of type 'DynamicMovementPrimitiveStateMsg"
  "ff70d60cb2445b7eba523337d26ec715")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DynamicMovementPrimitiveStateMsg>)))
  "Returns full string definition for message of type '<DynamicMovementPrimitiveStateMsg>"
  (cl:format cl:nil "bool is_learned~%bool is_setup~%bool is_start_set~%dynamic_movement_primitive/TimeMsg current_time~%int32 num_training_samples~%int32 num_generated_samples~%int32 seq~%~%================================================================================~%MSG: dynamic_movement_primitive/TimeMsg~%float64 delta_t~%float64 tau~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DynamicMovementPrimitiveStateMsg)))
  "Returns full string definition for message of type 'DynamicMovementPrimitiveStateMsg"
  (cl:format cl:nil "bool is_learned~%bool is_setup~%bool is_start_set~%dynamic_movement_primitive/TimeMsg current_time~%int32 num_training_samples~%int32 num_generated_samples~%int32 seq~%~%================================================================================~%MSG: dynamic_movement_primitive/TimeMsg~%float64 delta_t~%float64 tau~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DynamicMovementPrimitiveStateMsg>))
  (cl:+ 0
     1
     1
     1
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'current_time))
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DynamicMovementPrimitiveStateMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'DynamicMovementPrimitiveStateMsg
    (cl:cons ':is_learned (is_learned msg))
    (cl:cons ':is_setup (is_setup msg))
    (cl:cons ':is_start_set (is_start_set msg))
    (cl:cons ':current_time (current_time msg))
    (cl:cons ':num_training_samples (num_training_samples msg))
    (cl:cons ':num_generated_samples (num_generated_samples msg))
    (cl:cons ':seq (seq msg))
))
