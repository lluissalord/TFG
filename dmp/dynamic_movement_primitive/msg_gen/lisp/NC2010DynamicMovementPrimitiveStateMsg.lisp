; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude NC2010DynamicMovementPrimitiveStateMsg.msg.html

(cl:defclass <NC2010DynamicMovementPrimitiveStateMsg> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass NC2010DynamicMovementPrimitiveStateMsg (<NC2010DynamicMovementPrimitiveStateMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <NC2010DynamicMovementPrimitiveStateMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'NC2010DynamicMovementPrimitiveStateMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<NC2010DynamicMovementPrimitiveStateMsg> is deprecated: use dynamic_movement_primitive-msg:NC2010DynamicMovementPrimitiveStateMsg instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <NC2010DynamicMovementPrimitiveStateMsg>) ostream)
  "Serializes a message object of type '<NC2010DynamicMovementPrimitiveStateMsg>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <NC2010DynamicMovementPrimitiveStateMsg>) istream)
  "Deserializes a message object of type '<NC2010DynamicMovementPrimitiveStateMsg>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<NC2010DynamicMovementPrimitiveStateMsg>)))
  "Returns string type for a message object of type '<NC2010DynamicMovementPrimitiveStateMsg>"
  "dynamic_movement_primitive/NC2010DynamicMovementPrimitiveStateMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'NC2010DynamicMovementPrimitiveStateMsg)))
  "Returns string type for a message object of type 'NC2010DynamicMovementPrimitiveStateMsg"
  "dynamic_movement_primitive/NC2010DynamicMovementPrimitiveStateMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<NC2010DynamicMovementPrimitiveStateMsg>)))
  "Returns md5sum for a message object of type '<NC2010DynamicMovementPrimitiveStateMsg>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'NC2010DynamicMovementPrimitiveStateMsg)))
  "Returns md5sum for a message object of type 'NC2010DynamicMovementPrimitiveStateMsg"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<NC2010DynamicMovementPrimitiveStateMsg>)))
  "Returns full string definition for message of type '<NC2010DynamicMovementPrimitiveStateMsg>"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'NC2010DynamicMovementPrimitiveStateMsg)))
  "Returns full string definition for message of type 'NC2010DynamicMovementPrimitiveStateMsg"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <NC2010DynamicMovementPrimitiveStateMsg>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <NC2010DynamicMovementPrimitiveStateMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'NC2010DynamicMovementPrimitiveStateMsg
))
