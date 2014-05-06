; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude CanonicalSystemStateMsg.msg.html

(cl:defclass <CanonicalSystemStateMsg> (roslisp-msg-protocol:ros-message)
  ((state
    :reader state
    :initarg :state
    :type dynamic_movement_primitive-msg:StateMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:StateMsg))
   (time
    :reader time
    :initarg :time
    :type cl:float
    :initform 0.0))
)

(cl:defclass CanonicalSystemStateMsg (<CanonicalSystemStateMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CanonicalSystemStateMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CanonicalSystemStateMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<CanonicalSystemStateMsg> is deprecated: use dynamic_movement_primitive-msg:CanonicalSystemStateMsg instead.")))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <CanonicalSystemStateMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:state-val is deprecated.  Use dynamic_movement_primitive-msg:state instead.")
  (state m))

(cl:ensure-generic-function 'time-val :lambda-list '(m))
(cl:defmethod time-val ((m <CanonicalSystemStateMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:time-val is deprecated.  Use dynamic_movement_primitive-msg:time instead.")
  (time m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CanonicalSystemStateMsg>) ostream)
  "Serializes a message object of type '<CanonicalSystemStateMsg>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'state) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'time))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CanonicalSystemStateMsg>) istream)
  "Deserializes a message object of type '<CanonicalSystemStateMsg>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'state) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'time) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CanonicalSystemStateMsg>)))
  "Returns string type for a message object of type '<CanonicalSystemStateMsg>"
  "dynamic_movement_primitive/CanonicalSystemStateMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CanonicalSystemStateMsg)))
  "Returns string type for a message object of type 'CanonicalSystemStateMsg"
  "dynamic_movement_primitive/CanonicalSystemStateMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CanonicalSystemStateMsg>)))
  "Returns md5sum for a message object of type '<CanonicalSystemStateMsg>"
  "4d5ada7db67bc2b1869eb6c0d8fec7cd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CanonicalSystemStateMsg)))
  "Returns md5sum for a message object of type 'CanonicalSystemStateMsg"
  "4d5ada7db67bc2b1869eb6c0d8fec7cd")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CanonicalSystemStateMsg>)))
  "Returns full string definition for message of type '<CanonicalSystemStateMsg>"
  (cl:format cl:nil "dynamic_movement_primitive/StateMsg state~%float64 time~%================================================================================~%MSG: dynamic_movement_primitive/StateMsg~%float64 x~%float64 xd~%float64 xdd~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CanonicalSystemStateMsg)))
  "Returns full string definition for message of type 'CanonicalSystemStateMsg"
  (cl:format cl:nil "dynamic_movement_primitive/StateMsg state~%float64 time~%================================================================================~%MSG: dynamic_movement_primitive/StateMsg~%float64 x~%float64 xd~%float64 xdd~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CanonicalSystemStateMsg>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'state))
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CanonicalSystemStateMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'CanonicalSystemStateMsg
    (cl:cons ':state (state msg))
    (cl:cons ':time (time msg))
))
