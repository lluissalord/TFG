; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude CanonicalSystemMsg.msg.html

(cl:defclass <CanonicalSystemMsg> (roslisp-msg-protocol:ros-message)
  ((state
    :reader state
    :initarg :state
    :type dynamic_movement_primitive-msg:CanonicalSystemStateMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:CanonicalSystemStateMsg))
   (parameters
    :reader parameters
    :initarg :parameters
    :type dynamic_movement_primitive-msg:CanonicalSystemParametersMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:CanonicalSystemParametersMsg)))
)

(cl:defclass CanonicalSystemMsg (<CanonicalSystemMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CanonicalSystemMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CanonicalSystemMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<CanonicalSystemMsg> is deprecated: use dynamic_movement_primitive-msg:CanonicalSystemMsg instead.")))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <CanonicalSystemMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:state-val is deprecated.  Use dynamic_movement_primitive-msg:state instead.")
  (state m))

(cl:ensure-generic-function 'parameters-val :lambda-list '(m))
(cl:defmethod parameters-val ((m <CanonicalSystemMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:parameters-val is deprecated.  Use dynamic_movement_primitive-msg:parameters instead.")
  (parameters m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CanonicalSystemMsg>) ostream)
  "Serializes a message object of type '<CanonicalSystemMsg>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'state) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'parameters) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CanonicalSystemMsg>) istream)
  "Deserializes a message object of type '<CanonicalSystemMsg>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'state) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'parameters) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CanonicalSystemMsg>)))
  "Returns string type for a message object of type '<CanonicalSystemMsg>"
  "dynamic_movement_primitive/CanonicalSystemMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CanonicalSystemMsg)))
  "Returns string type for a message object of type 'CanonicalSystemMsg"
  "dynamic_movement_primitive/CanonicalSystemMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CanonicalSystemMsg>)))
  "Returns md5sum for a message object of type '<CanonicalSystemMsg>"
  "eee5dd56b43c4dfddaacb3ddf10b6afb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CanonicalSystemMsg)))
  "Returns md5sum for a message object of type 'CanonicalSystemMsg"
  "eee5dd56b43c4dfddaacb3ddf10b6afb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CanonicalSystemMsg>)))
  "Returns full string definition for message of type '<CanonicalSystemMsg>"
  (cl:format cl:nil "dynamic_movement_primitive/CanonicalSystemStateMsg state~%dynamic_movement_primitive/CanonicalSystemParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemStateMsg~%dynamic_movement_primitive/StateMsg state~%float64 time~%================================================================================~%MSG: dynamic_movement_primitive/StateMsg~%float64 x~%float64 xd~%float64 xdd~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemParametersMsg~%float64 alpha_x~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CanonicalSystemMsg)))
  "Returns full string definition for message of type 'CanonicalSystemMsg"
  (cl:format cl:nil "dynamic_movement_primitive/CanonicalSystemStateMsg state~%dynamic_movement_primitive/CanonicalSystemParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemStateMsg~%dynamic_movement_primitive/StateMsg state~%float64 time~%================================================================================~%MSG: dynamic_movement_primitive/StateMsg~%float64 x~%float64 xd~%float64 xdd~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemParametersMsg~%float64 alpha_x~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CanonicalSystemMsg>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'state))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'parameters))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CanonicalSystemMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'CanonicalSystemMsg
    (cl:cons ':state (state msg))
    (cl:cons ':parameters (parameters msg))
))
