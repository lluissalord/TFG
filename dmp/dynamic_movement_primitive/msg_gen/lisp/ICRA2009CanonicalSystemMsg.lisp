; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude ICRA2009CanonicalSystemMsg.msg.html

(cl:defclass <ICRA2009CanonicalSystemMsg> (roslisp-msg-protocol:ros-message)
  ((canonical_system
    :reader canonical_system
    :initarg :canonical_system
    :type dynamic_movement_primitive-msg:CanonicalSystemMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:CanonicalSystemMsg))
   (state
    :reader state
    :initarg :state
    :type dynamic_movement_primitive-msg:ICRA2009CanonicalSystemStateMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:ICRA2009CanonicalSystemStateMsg))
   (parameters
    :reader parameters
    :initarg :parameters
    :type dynamic_movement_primitive-msg:ICRA2009CanonicalSystemParametersMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:ICRA2009CanonicalSystemParametersMsg)))
)

(cl:defclass ICRA2009CanonicalSystemMsg (<ICRA2009CanonicalSystemMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ICRA2009CanonicalSystemMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ICRA2009CanonicalSystemMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<ICRA2009CanonicalSystemMsg> is deprecated: use dynamic_movement_primitive-msg:ICRA2009CanonicalSystemMsg instead.")))

(cl:ensure-generic-function 'canonical_system-val :lambda-list '(m))
(cl:defmethod canonical_system-val ((m <ICRA2009CanonicalSystemMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:canonical_system-val is deprecated.  Use dynamic_movement_primitive-msg:canonical_system instead.")
  (canonical_system m))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <ICRA2009CanonicalSystemMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:state-val is deprecated.  Use dynamic_movement_primitive-msg:state instead.")
  (state m))

(cl:ensure-generic-function 'parameters-val :lambda-list '(m))
(cl:defmethod parameters-val ((m <ICRA2009CanonicalSystemMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:parameters-val is deprecated.  Use dynamic_movement_primitive-msg:parameters instead.")
  (parameters m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ICRA2009CanonicalSystemMsg>) ostream)
  "Serializes a message object of type '<ICRA2009CanonicalSystemMsg>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'canonical_system) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'state) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'parameters) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ICRA2009CanonicalSystemMsg>) istream)
  "Deserializes a message object of type '<ICRA2009CanonicalSystemMsg>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'canonical_system) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'state) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'parameters) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ICRA2009CanonicalSystemMsg>)))
  "Returns string type for a message object of type '<ICRA2009CanonicalSystemMsg>"
  "dynamic_movement_primitive/ICRA2009CanonicalSystemMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ICRA2009CanonicalSystemMsg)))
  "Returns string type for a message object of type 'ICRA2009CanonicalSystemMsg"
  "dynamic_movement_primitive/ICRA2009CanonicalSystemMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ICRA2009CanonicalSystemMsg>)))
  "Returns md5sum for a message object of type '<ICRA2009CanonicalSystemMsg>"
  "5c3c8ec3d151c9fbf9fbfff47f690d0f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ICRA2009CanonicalSystemMsg)))
  "Returns md5sum for a message object of type 'ICRA2009CanonicalSystemMsg"
  "5c3c8ec3d151c9fbf9fbfff47f690d0f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ICRA2009CanonicalSystemMsg>)))
  "Returns full string definition for message of type '<ICRA2009CanonicalSystemMsg>"
  (cl:format cl:nil "dynamic_movement_primitive/CanonicalSystemMsg canonical_system~%dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg state~%dynamic_movement_primitive/ICRA2009CanonicalSystemParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemMsg~%dynamic_movement_primitive/CanonicalSystemStateMsg state~%dynamic_movement_primitive/CanonicalSystemParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemStateMsg~%dynamic_movement_primitive/StateMsg state~%float64 time~%================================================================================~%MSG: dynamic_movement_primitive/StateMsg~%float64 x~%float64 xd~%float64 xdd~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemParametersMsg~%float64 alpha_x~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemParametersMsg~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ICRA2009CanonicalSystemMsg)))
  "Returns full string definition for message of type 'ICRA2009CanonicalSystemMsg"
  (cl:format cl:nil "dynamic_movement_primitive/CanonicalSystemMsg canonical_system~%dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg state~%dynamic_movement_primitive/ICRA2009CanonicalSystemParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemMsg~%dynamic_movement_primitive/CanonicalSystemStateMsg state~%dynamic_movement_primitive/CanonicalSystemParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemStateMsg~%dynamic_movement_primitive/StateMsg state~%float64 time~%================================================================================~%MSG: dynamic_movement_primitive/StateMsg~%float64 x~%float64 xd~%float64 xdd~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemParametersMsg~%float64 alpha_x~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemParametersMsg~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ICRA2009CanonicalSystemMsg>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'canonical_system))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'state))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'parameters))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ICRA2009CanonicalSystemMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'ICRA2009CanonicalSystemMsg
    (cl:cons ':canonical_system (canonical_system msg))
    (cl:cons ':state (state msg))
    (cl:cons ':parameters (parameters msg))
))
