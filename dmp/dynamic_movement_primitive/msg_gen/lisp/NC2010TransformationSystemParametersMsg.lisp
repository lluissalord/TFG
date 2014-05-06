; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude NC2010TransformationSystemParametersMsg.msg.html

(cl:defclass <NC2010TransformationSystemParametersMsg> (roslisp-msg-protocol:ros-message)
  ((k_gain
    :reader k_gain
    :initarg :k_gain
    :type cl:float
    :initform 0.0)
   (d_gain
    :reader d_gain
    :initarg :d_gain
    :type cl:float
    :initform 0.0))
)

(cl:defclass NC2010TransformationSystemParametersMsg (<NC2010TransformationSystemParametersMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <NC2010TransformationSystemParametersMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'NC2010TransformationSystemParametersMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<NC2010TransformationSystemParametersMsg> is deprecated: use dynamic_movement_primitive-msg:NC2010TransformationSystemParametersMsg instead.")))

(cl:ensure-generic-function 'k_gain-val :lambda-list '(m))
(cl:defmethod k_gain-val ((m <NC2010TransformationSystemParametersMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:k_gain-val is deprecated.  Use dynamic_movement_primitive-msg:k_gain instead.")
  (k_gain m))

(cl:ensure-generic-function 'd_gain-val :lambda-list '(m))
(cl:defmethod d_gain-val ((m <NC2010TransformationSystemParametersMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:d_gain-val is deprecated.  Use dynamic_movement_primitive-msg:d_gain instead.")
  (d_gain m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <NC2010TransformationSystemParametersMsg>) ostream)
  "Serializes a message object of type '<NC2010TransformationSystemParametersMsg>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'k_gain))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'd_gain))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <NC2010TransformationSystemParametersMsg>) istream)
  "Deserializes a message object of type '<NC2010TransformationSystemParametersMsg>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'k_gain) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'd_gain) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<NC2010TransformationSystemParametersMsg>)))
  "Returns string type for a message object of type '<NC2010TransformationSystemParametersMsg>"
  "dynamic_movement_primitive/NC2010TransformationSystemParametersMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'NC2010TransformationSystemParametersMsg)))
  "Returns string type for a message object of type 'NC2010TransformationSystemParametersMsg"
  "dynamic_movement_primitive/NC2010TransformationSystemParametersMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<NC2010TransformationSystemParametersMsg>)))
  "Returns md5sum for a message object of type '<NC2010TransformationSystemParametersMsg>"
  "858c1fba982f6aa8325ab65de6af43ce")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'NC2010TransformationSystemParametersMsg)))
  "Returns md5sum for a message object of type 'NC2010TransformationSystemParametersMsg"
  "858c1fba982f6aa8325ab65de6af43ce")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<NC2010TransformationSystemParametersMsg>)))
  "Returns full string definition for message of type '<NC2010TransformationSystemParametersMsg>"
  (cl:format cl:nil "float64 k_gain~%float64 d_gain~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'NC2010TransformationSystemParametersMsg)))
  "Returns full string definition for message of type 'NC2010TransformationSystemParametersMsg"
  (cl:format cl:nil "float64 k_gain~%float64 d_gain~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <NC2010TransformationSystemParametersMsg>))
  (cl:+ 0
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <NC2010TransformationSystemParametersMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'NC2010TransformationSystemParametersMsg
    (cl:cons ':k_gain (k_gain msg))
    (cl:cons ':d_gain (d_gain msg))
))
