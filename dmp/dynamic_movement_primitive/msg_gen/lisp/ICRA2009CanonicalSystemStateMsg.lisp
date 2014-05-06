; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude ICRA2009CanonicalSystemStateMsg.msg.html

(cl:defclass <ICRA2009CanonicalSystemStateMsg> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass ICRA2009CanonicalSystemStateMsg (<ICRA2009CanonicalSystemStateMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ICRA2009CanonicalSystemStateMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ICRA2009CanonicalSystemStateMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<ICRA2009CanonicalSystemStateMsg> is deprecated: use dynamic_movement_primitive-msg:ICRA2009CanonicalSystemStateMsg instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ICRA2009CanonicalSystemStateMsg>) ostream)
  "Serializes a message object of type '<ICRA2009CanonicalSystemStateMsg>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ICRA2009CanonicalSystemStateMsg>) istream)
  "Deserializes a message object of type '<ICRA2009CanonicalSystemStateMsg>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ICRA2009CanonicalSystemStateMsg>)))
  "Returns string type for a message object of type '<ICRA2009CanonicalSystemStateMsg>"
  "dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ICRA2009CanonicalSystemStateMsg)))
  "Returns string type for a message object of type 'ICRA2009CanonicalSystemStateMsg"
  "dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ICRA2009CanonicalSystemStateMsg>)))
  "Returns md5sum for a message object of type '<ICRA2009CanonicalSystemStateMsg>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ICRA2009CanonicalSystemStateMsg)))
  "Returns md5sum for a message object of type 'ICRA2009CanonicalSystemStateMsg"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ICRA2009CanonicalSystemStateMsg>)))
  "Returns full string definition for message of type '<ICRA2009CanonicalSystemStateMsg>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ICRA2009CanonicalSystemStateMsg)))
  "Returns full string definition for message of type 'ICRA2009CanonicalSystemStateMsg"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ICRA2009CanonicalSystemStateMsg>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ICRA2009CanonicalSystemStateMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'ICRA2009CanonicalSystemStateMsg
))
