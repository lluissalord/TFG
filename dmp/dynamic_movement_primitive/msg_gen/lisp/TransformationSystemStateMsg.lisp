; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude TransformationSystemStateMsg.msg.html

(cl:defclass <TransformationSystemStateMsg> (roslisp-msg-protocol:ros-message)
  ((internal
    :reader internal
    :initarg :internal
    :type dynamic_movement_primitive-msg:StateMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:StateMsg))
   (target
    :reader target
    :initarg :target
    :type dynamic_movement_primitive-msg:StateMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:StateMsg))
   (current
    :reader current
    :initarg :current
    :type dynamic_movement_primitive-msg:StateMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:StateMsg))
   (start
    :reader start
    :initarg :start
    :type cl:float
    :initform 0.0)
   (goal
    :reader goal
    :initarg :goal
    :type cl:float
    :initform 0.0)
   (f
    :reader f
    :initarg :f
    :type cl:float
    :initform 0.0)
   (ft
    :reader ft
    :initarg :ft
    :type cl:float
    :initform 0.0))
)

(cl:defclass TransformationSystemStateMsg (<TransformationSystemStateMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TransformationSystemStateMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TransformationSystemStateMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<TransformationSystemStateMsg> is deprecated: use dynamic_movement_primitive-msg:TransformationSystemStateMsg instead.")))

(cl:ensure-generic-function 'internal-val :lambda-list '(m))
(cl:defmethod internal-val ((m <TransformationSystemStateMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:internal-val is deprecated.  Use dynamic_movement_primitive-msg:internal instead.")
  (internal m))

(cl:ensure-generic-function 'target-val :lambda-list '(m))
(cl:defmethod target-val ((m <TransformationSystemStateMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:target-val is deprecated.  Use dynamic_movement_primitive-msg:target instead.")
  (target m))

(cl:ensure-generic-function 'current-val :lambda-list '(m))
(cl:defmethod current-val ((m <TransformationSystemStateMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:current-val is deprecated.  Use dynamic_movement_primitive-msg:current instead.")
  (current m))

(cl:ensure-generic-function 'start-val :lambda-list '(m))
(cl:defmethod start-val ((m <TransformationSystemStateMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:start-val is deprecated.  Use dynamic_movement_primitive-msg:start instead.")
  (start m))

(cl:ensure-generic-function 'goal-val :lambda-list '(m))
(cl:defmethod goal-val ((m <TransformationSystemStateMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:goal-val is deprecated.  Use dynamic_movement_primitive-msg:goal instead.")
  (goal m))

(cl:ensure-generic-function 'f-val :lambda-list '(m))
(cl:defmethod f-val ((m <TransformationSystemStateMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:f-val is deprecated.  Use dynamic_movement_primitive-msg:f instead.")
  (f m))

(cl:ensure-generic-function 'ft-val :lambda-list '(m))
(cl:defmethod ft-val ((m <TransformationSystemStateMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:ft-val is deprecated.  Use dynamic_movement_primitive-msg:ft instead.")
  (ft m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TransformationSystemStateMsg>) ostream)
  "Serializes a message object of type '<TransformationSystemStateMsg>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'internal) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'target) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'current) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'start))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'goal))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'f))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'ft))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TransformationSystemStateMsg>) istream)
  "Deserializes a message object of type '<TransformationSystemStateMsg>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'internal) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'target) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'current) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'start) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'goal) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'f) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'ft) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TransformationSystemStateMsg>)))
  "Returns string type for a message object of type '<TransformationSystemStateMsg>"
  "dynamic_movement_primitive/TransformationSystemStateMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TransformationSystemStateMsg)))
  "Returns string type for a message object of type 'TransformationSystemStateMsg"
  "dynamic_movement_primitive/TransformationSystemStateMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TransformationSystemStateMsg>)))
  "Returns md5sum for a message object of type '<TransformationSystemStateMsg>"
  "cdbd9b9ee1a70ce67d7d8da964103e06")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TransformationSystemStateMsg)))
  "Returns md5sum for a message object of type 'TransformationSystemStateMsg"
  "cdbd9b9ee1a70ce67d7d8da964103e06")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TransformationSystemStateMsg>)))
  "Returns full string definition for message of type '<TransformationSystemStateMsg>"
  (cl:format cl:nil "dynamic_movement_primitive/StateMsg internal~%dynamic_movement_primitive/StateMsg target~%dynamic_movement_primitive/StateMsg current~%~%float64 start~%float64 goal~%~%float64 f~%float64 ft~%~%# float64[] function_input~%# float64[] function_target~%~%================================================================================~%MSG: dynamic_movement_primitive/StateMsg~%float64 x~%float64 xd~%float64 xdd~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TransformationSystemStateMsg)))
  "Returns full string definition for message of type 'TransformationSystemStateMsg"
  (cl:format cl:nil "dynamic_movement_primitive/StateMsg internal~%dynamic_movement_primitive/StateMsg target~%dynamic_movement_primitive/StateMsg current~%~%float64 start~%float64 goal~%~%float64 f~%float64 ft~%~%# float64[] function_input~%# float64[] function_target~%~%================================================================================~%MSG: dynamic_movement_primitive/StateMsg~%float64 x~%float64 xd~%float64 xdd~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TransformationSystemStateMsg>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'internal))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'target))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'current))
     8
     8
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TransformationSystemStateMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'TransformationSystemStateMsg
    (cl:cons ':internal (internal msg))
    (cl:cons ':target (target msg))
    (cl:cons ':current (current msg))
    (cl:cons ':start (start msg))
    (cl:cons ':goal (goal msg))
    (cl:cons ':f (f msg))
    (cl:cons ':ft (ft msg))
))
