; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude ICRA2009DynamicMovementPrimitiveStateMsg.msg.html

(cl:defclass <ICRA2009DynamicMovementPrimitiveStateMsg> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass ICRA2009DynamicMovementPrimitiveStateMsg (<ICRA2009DynamicMovementPrimitiveStateMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ICRA2009DynamicMovementPrimitiveStateMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ICRA2009DynamicMovementPrimitiveStateMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<ICRA2009DynamicMovementPrimitiveStateMsg> is deprecated: use dynamic_movement_primitive-msg:ICRA2009DynamicMovementPrimitiveStateMsg instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ICRA2009DynamicMovementPrimitiveStateMsg>) ostream)
  "Serializes a message object of type '<ICRA2009DynamicMovementPrimitiveStateMsg>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ICRA2009DynamicMovementPrimitiveStateMsg>) istream)
  "Deserializes a message object of type '<ICRA2009DynamicMovementPrimitiveStateMsg>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ICRA2009DynamicMovementPrimitiveStateMsg>)))
  "Returns string type for a message object of type '<ICRA2009DynamicMovementPrimitiveStateMsg>"
  "dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveStateMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ICRA2009DynamicMovementPrimitiveStateMsg)))
  "Returns string type for a message object of type 'ICRA2009DynamicMovementPrimitiveStateMsg"
  "dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveStateMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ICRA2009DynamicMovementPrimitiveStateMsg>)))
  "Returns md5sum for a message object of type '<ICRA2009DynamicMovementPrimitiveStateMsg>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ICRA2009DynamicMovementPrimitiveStateMsg)))
  "Returns md5sum for a message object of type 'ICRA2009DynamicMovementPrimitiveStateMsg"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ICRA2009DynamicMovementPrimitiveStateMsg>)))
  "Returns full string definition for message of type '<ICRA2009DynamicMovementPrimitiveStateMsg>"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ICRA2009DynamicMovementPrimitiveStateMsg)))
  "Returns full string definition for message of type 'ICRA2009DynamicMovementPrimitiveStateMsg"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ICRA2009DynamicMovementPrimitiveStateMsg>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ICRA2009DynamicMovementPrimitiveStateMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'ICRA2009DynamicMovementPrimitiveStateMsg
))
