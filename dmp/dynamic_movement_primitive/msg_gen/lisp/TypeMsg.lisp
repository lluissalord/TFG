; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude TypeMsg.msg.html

(cl:defclass <TypeMsg> (roslisp-msg-protocol:ros-message)
  ((type
    :reader type
    :initarg :type
    :type cl:integer
    :initform 0))
)

(cl:defclass TypeMsg (<TypeMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TypeMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TypeMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<TypeMsg> is deprecated: use dynamic_movement_primitive-msg:TypeMsg instead.")))

(cl:ensure-generic-function 'type-val :lambda-list '(m))
(cl:defmethod type-val ((m <TypeMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:type-val is deprecated.  Use dynamic_movement_primitive-msg:type instead.")
  (type m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<TypeMsg>)))
    "Constants for message type '<TypeMsg>"
  '((:UNSPECIFIED . 0)
    (:DISCRETE_JOINT_SPACE . 1)
    (:DISCRETE_CARTESIAN_SPACE . 2)
    (:DISCRETE_CARTESIAN_AND_JOINT_SPACE . 3)
    (:NUM_TYPES . 4))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'TypeMsg)))
    "Constants for message type 'TypeMsg"
  '((:UNSPECIFIED . 0)
    (:DISCRETE_JOINT_SPACE . 1)
    (:DISCRETE_CARTESIAN_SPACE . 2)
    (:DISCRETE_CARTESIAN_AND_JOINT_SPACE . 3)
    (:NUM_TYPES . 4))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TypeMsg>) ostream)
  "Serializes a message object of type '<TypeMsg>"
  (cl:let* ((signed (cl:slot-value msg 'type)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TypeMsg>) istream)
  "Deserializes a message object of type '<TypeMsg>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'type) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TypeMsg>)))
  "Returns string type for a message object of type '<TypeMsg>"
  "dynamic_movement_primitive/TypeMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TypeMsg)))
  "Returns string type for a message object of type 'TypeMsg"
  "dynamic_movement_primitive/TypeMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TypeMsg>)))
  "Returns md5sum for a message object of type '<TypeMsg>"
  "9d058b1d56f9e4525193e11aae09e0d7")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TypeMsg)))
  "Returns md5sum for a message object of type 'TypeMsg"
  "9d058b1d56f9e4525193e11aae09e0d7")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TypeMsg>)))
  "Returns full string definition for message of type '<TypeMsg>"
  (cl:format cl:nil "int32 type~%int32 UNSPECIFIED = 0~%int32 DISCRETE_JOINT_SPACE = 1~%int32 DISCRETE_CARTESIAN_SPACE = 2~%int32 DISCRETE_CARTESIAN_AND_JOINT_SPACE = 3~%int32 NUM_TYPES = 4~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TypeMsg)))
  "Returns full string definition for message of type 'TypeMsg"
  (cl:format cl:nil "int32 type~%int32 UNSPECIFIED = 0~%int32 DISCRETE_JOINT_SPACE = 1~%int32 DISCRETE_CARTESIAN_SPACE = 2~%int32 DISCRETE_CARTESIAN_AND_JOINT_SPACE = 3~%int32 NUM_TYPES = 4~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TypeMsg>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TypeMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'TypeMsg
    (cl:cons ':type (type msg))
))
