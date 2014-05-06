; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude NC2010TransformationSystemStateMsg.msg.html

(cl:defclass <NC2010TransformationSystemStateMsg> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass NC2010TransformationSystemStateMsg (<NC2010TransformationSystemStateMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <NC2010TransformationSystemStateMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'NC2010TransformationSystemStateMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<NC2010TransformationSystemStateMsg> is deprecated: use dynamic_movement_primitive-msg:NC2010TransformationSystemStateMsg instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <NC2010TransformationSystemStateMsg>) ostream)
  "Serializes a message object of type '<NC2010TransformationSystemStateMsg>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <NC2010TransformationSystemStateMsg>) istream)
  "Deserializes a message object of type '<NC2010TransformationSystemStateMsg>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<NC2010TransformationSystemStateMsg>)))
  "Returns string type for a message object of type '<NC2010TransformationSystemStateMsg>"
  "dynamic_movement_primitive/NC2010TransformationSystemStateMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'NC2010TransformationSystemStateMsg)))
  "Returns string type for a message object of type 'NC2010TransformationSystemStateMsg"
  "dynamic_movement_primitive/NC2010TransformationSystemStateMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<NC2010TransformationSystemStateMsg>)))
  "Returns md5sum for a message object of type '<NC2010TransformationSystemStateMsg>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'NC2010TransformationSystemStateMsg)))
  "Returns md5sum for a message object of type 'NC2010TransformationSystemStateMsg"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<NC2010TransformationSystemStateMsg>)))
  "Returns full string definition for message of type '<NC2010TransformationSystemStateMsg>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'NC2010TransformationSystemStateMsg)))
  "Returns full string definition for message of type 'NC2010TransformationSystemStateMsg"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <NC2010TransformationSystemStateMsg>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <NC2010TransformationSystemStateMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'NC2010TransformationSystemStateMsg
))
