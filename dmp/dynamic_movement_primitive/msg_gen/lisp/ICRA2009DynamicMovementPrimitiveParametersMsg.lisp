; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude ICRA2009DynamicMovementPrimitiveParametersMsg.msg.html

(cl:defclass <ICRA2009DynamicMovementPrimitiveParametersMsg> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass ICRA2009DynamicMovementPrimitiveParametersMsg (<ICRA2009DynamicMovementPrimitiveParametersMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ICRA2009DynamicMovementPrimitiveParametersMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ICRA2009DynamicMovementPrimitiveParametersMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<ICRA2009DynamicMovementPrimitiveParametersMsg> is deprecated: use dynamic_movement_primitive-msg:ICRA2009DynamicMovementPrimitiveParametersMsg instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ICRA2009DynamicMovementPrimitiveParametersMsg>) ostream)
  "Serializes a message object of type '<ICRA2009DynamicMovementPrimitiveParametersMsg>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ICRA2009DynamicMovementPrimitiveParametersMsg>) istream)
  "Deserializes a message object of type '<ICRA2009DynamicMovementPrimitiveParametersMsg>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ICRA2009DynamicMovementPrimitiveParametersMsg>)))
  "Returns string type for a message object of type '<ICRA2009DynamicMovementPrimitiveParametersMsg>"
  "dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveParametersMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ICRA2009DynamicMovementPrimitiveParametersMsg)))
  "Returns string type for a message object of type 'ICRA2009DynamicMovementPrimitiveParametersMsg"
  "dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveParametersMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ICRA2009DynamicMovementPrimitiveParametersMsg>)))
  "Returns md5sum for a message object of type '<ICRA2009DynamicMovementPrimitiveParametersMsg>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ICRA2009DynamicMovementPrimitiveParametersMsg)))
  "Returns md5sum for a message object of type 'ICRA2009DynamicMovementPrimitiveParametersMsg"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ICRA2009DynamicMovementPrimitiveParametersMsg>)))
  "Returns full string definition for message of type '<ICRA2009DynamicMovementPrimitiveParametersMsg>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ICRA2009DynamicMovementPrimitiveParametersMsg)))
  "Returns full string definition for message of type 'ICRA2009DynamicMovementPrimitiveParametersMsg"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ICRA2009DynamicMovementPrimitiveParametersMsg>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ICRA2009DynamicMovementPrimitiveParametersMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'ICRA2009DynamicMovementPrimitiveParametersMsg
))
