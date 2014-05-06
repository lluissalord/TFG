; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude CanonicalSystemParametersMsg.msg.html

(cl:defclass <CanonicalSystemParametersMsg> (roslisp-msg-protocol:ros-message)
  ((alpha_x
    :reader alpha_x
    :initarg :alpha_x
    :type cl:float
    :initform 0.0))
)

(cl:defclass CanonicalSystemParametersMsg (<CanonicalSystemParametersMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CanonicalSystemParametersMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CanonicalSystemParametersMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<CanonicalSystemParametersMsg> is deprecated: use dynamic_movement_primitive-msg:CanonicalSystemParametersMsg instead.")))

(cl:ensure-generic-function 'alpha_x-val :lambda-list '(m))
(cl:defmethod alpha_x-val ((m <CanonicalSystemParametersMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:alpha_x-val is deprecated.  Use dynamic_movement_primitive-msg:alpha_x instead.")
  (alpha_x m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CanonicalSystemParametersMsg>) ostream)
  "Serializes a message object of type '<CanonicalSystemParametersMsg>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'alpha_x))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CanonicalSystemParametersMsg>) istream)
  "Deserializes a message object of type '<CanonicalSystemParametersMsg>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'alpha_x) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CanonicalSystemParametersMsg>)))
  "Returns string type for a message object of type '<CanonicalSystemParametersMsg>"
  "dynamic_movement_primitive/CanonicalSystemParametersMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CanonicalSystemParametersMsg)))
  "Returns string type for a message object of type 'CanonicalSystemParametersMsg"
  "dynamic_movement_primitive/CanonicalSystemParametersMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CanonicalSystemParametersMsg>)))
  "Returns md5sum for a message object of type '<CanonicalSystemParametersMsg>"
  "32e9ac6f353b4da7d75480ffef3fc4ff")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CanonicalSystemParametersMsg)))
  "Returns md5sum for a message object of type 'CanonicalSystemParametersMsg"
  "32e9ac6f353b4da7d75480ffef3fc4ff")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CanonicalSystemParametersMsg>)))
  "Returns full string definition for message of type '<CanonicalSystemParametersMsg>"
  (cl:format cl:nil "float64 alpha_x~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CanonicalSystemParametersMsg)))
  "Returns full string definition for message of type 'CanonicalSystemParametersMsg"
  (cl:format cl:nil "float64 alpha_x~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CanonicalSystemParametersMsg>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CanonicalSystemParametersMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'CanonicalSystemParametersMsg
    (cl:cons ':alpha_x (alpha_x msg))
))
