; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude NC2010CanonicalSystemParametersMsg.msg.html

(cl:defclass <NC2010CanonicalSystemParametersMsg> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass NC2010CanonicalSystemParametersMsg (<NC2010CanonicalSystemParametersMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <NC2010CanonicalSystemParametersMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'NC2010CanonicalSystemParametersMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<NC2010CanonicalSystemParametersMsg> is deprecated: use dynamic_movement_primitive-msg:NC2010CanonicalSystemParametersMsg instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <NC2010CanonicalSystemParametersMsg>) ostream)
  "Serializes a message object of type '<NC2010CanonicalSystemParametersMsg>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <NC2010CanonicalSystemParametersMsg>) istream)
  "Deserializes a message object of type '<NC2010CanonicalSystemParametersMsg>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<NC2010CanonicalSystemParametersMsg>)))
  "Returns string type for a message object of type '<NC2010CanonicalSystemParametersMsg>"
  "dynamic_movement_primitive/NC2010CanonicalSystemParametersMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'NC2010CanonicalSystemParametersMsg)))
  "Returns string type for a message object of type 'NC2010CanonicalSystemParametersMsg"
  "dynamic_movement_primitive/NC2010CanonicalSystemParametersMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<NC2010CanonicalSystemParametersMsg>)))
  "Returns md5sum for a message object of type '<NC2010CanonicalSystemParametersMsg>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'NC2010CanonicalSystemParametersMsg)))
  "Returns md5sum for a message object of type 'NC2010CanonicalSystemParametersMsg"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<NC2010CanonicalSystemParametersMsg>)))
  "Returns full string definition for message of type '<NC2010CanonicalSystemParametersMsg>"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'NC2010CanonicalSystemParametersMsg)))
  "Returns full string definition for message of type 'NC2010CanonicalSystemParametersMsg"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <NC2010CanonicalSystemParametersMsg>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <NC2010CanonicalSystemParametersMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'NC2010CanonicalSystemParametersMsg
))
