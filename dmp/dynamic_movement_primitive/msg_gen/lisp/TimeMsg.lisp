; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude TimeMsg.msg.html

(cl:defclass <TimeMsg> (roslisp-msg-protocol:ros-message)
  ((delta_t
    :reader delta_t
    :initarg :delta_t
    :type cl:float
    :initform 0.0)
   (tau
    :reader tau
    :initarg :tau
    :type cl:float
    :initform 0.0))
)

(cl:defclass TimeMsg (<TimeMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TimeMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TimeMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<TimeMsg> is deprecated: use dynamic_movement_primitive-msg:TimeMsg instead.")))

(cl:ensure-generic-function 'delta_t-val :lambda-list '(m))
(cl:defmethod delta_t-val ((m <TimeMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:delta_t-val is deprecated.  Use dynamic_movement_primitive-msg:delta_t instead.")
  (delta_t m))

(cl:ensure-generic-function 'tau-val :lambda-list '(m))
(cl:defmethod tau-val ((m <TimeMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:tau-val is deprecated.  Use dynamic_movement_primitive-msg:tau instead.")
  (tau m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TimeMsg>) ostream)
  "Serializes a message object of type '<TimeMsg>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'delta_t))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'tau))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TimeMsg>) istream)
  "Deserializes a message object of type '<TimeMsg>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'delta_t) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'tau) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TimeMsg>)))
  "Returns string type for a message object of type '<TimeMsg>"
  "dynamic_movement_primitive/TimeMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TimeMsg)))
  "Returns string type for a message object of type 'TimeMsg"
  "dynamic_movement_primitive/TimeMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TimeMsg>)))
  "Returns md5sum for a message object of type '<TimeMsg>"
  "d0c165b9f99767f2c4715b0aa4b5e215")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TimeMsg)))
  "Returns md5sum for a message object of type 'TimeMsg"
  "d0c165b9f99767f2c4715b0aa4b5e215")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TimeMsg>)))
  "Returns full string definition for message of type '<TimeMsg>"
  (cl:format cl:nil "float64 delta_t~%float64 tau~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TimeMsg)))
  "Returns full string definition for message of type 'TimeMsg"
  (cl:format cl:nil "float64 delta_t~%float64 tau~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TimeMsg>))
  (cl:+ 0
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TimeMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'TimeMsg
    (cl:cons ':delta_t (delta_t msg))
    (cl:cons ':tau (tau msg))
))
