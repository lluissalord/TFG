; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude DynamicMovementPrimitiveMsg.msg.html

(cl:defclass <DynamicMovementPrimitiveMsg> (roslisp-msg-protocol:ros-message)
  ((state
    :reader state
    :initarg :state
    :type dynamic_movement_primitive-msg:DynamicMovementPrimitiveStateMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:DynamicMovementPrimitiveStateMsg))
   (parameters
    :reader parameters
    :initarg :parameters
    :type dynamic_movement_primitive-msg:DynamicMovementPrimitiveParametersMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:DynamicMovementPrimitiveParametersMsg)))
)

(cl:defclass DynamicMovementPrimitiveMsg (<DynamicMovementPrimitiveMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DynamicMovementPrimitiveMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DynamicMovementPrimitiveMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<DynamicMovementPrimitiveMsg> is deprecated: use dynamic_movement_primitive-msg:DynamicMovementPrimitiveMsg instead.")))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <DynamicMovementPrimitiveMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:state-val is deprecated.  Use dynamic_movement_primitive-msg:state instead.")
  (state m))

(cl:ensure-generic-function 'parameters-val :lambda-list '(m))
(cl:defmethod parameters-val ((m <DynamicMovementPrimitiveMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:parameters-val is deprecated.  Use dynamic_movement_primitive-msg:parameters instead.")
  (parameters m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DynamicMovementPrimitiveMsg>) ostream)
  "Serializes a message object of type '<DynamicMovementPrimitiveMsg>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'state) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'parameters) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DynamicMovementPrimitiveMsg>) istream)
  "Deserializes a message object of type '<DynamicMovementPrimitiveMsg>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'state) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'parameters) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DynamicMovementPrimitiveMsg>)))
  "Returns string type for a message object of type '<DynamicMovementPrimitiveMsg>"
  "dynamic_movement_primitive/DynamicMovementPrimitiveMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DynamicMovementPrimitiveMsg)))
  "Returns string type for a message object of type 'DynamicMovementPrimitiveMsg"
  "dynamic_movement_primitive/DynamicMovementPrimitiveMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DynamicMovementPrimitiveMsg>)))
  "Returns md5sum for a message object of type '<DynamicMovementPrimitiveMsg>"
  "e9c0198c49e0197d90520f69fba523ac")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DynamicMovementPrimitiveMsg)))
  "Returns md5sum for a message object of type 'DynamicMovementPrimitiveMsg"
  "e9c0198c49e0197d90520f69fba523ac")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DynamicMovementPrimitiveMsg>)))
  "Returns full string definition for message of type '<DynamicMovementPrimitiveMsg>"
  (cl:format cl:nil "dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg state~%dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg~%bool is_learned~%bool is_setup~%bool is_start_set~%dynamic_movement_primitive/TimeMsg current_time~%int32 num_training_samples~%int32 num_generated_samples~%int32 seq~%~%================================================================================~%MSG: dynamic_movement_primitive/TimeMsg~%float64 delta_t~%float64 tau~%~%================================================================================~%MSG: dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg~%dynamic_movement_primitive/TimeMsg initial_time~%float64 teaching_duration~%float64 execution_duration~%float64 cutoff~%int32 type~%int32 id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DynamicMovementPrimitiveMsg)))
  "Returns full string definition for message of type 'DynamicMovementPrimitiveMsg"
  (cl:format cl:nil "dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg state~%dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg~%bool is_learned~%bool is_setup~%bool is_start_set~%dynamic_movement_primitive/TimeMsg current_time~%int32 num_training_samples~%int32 num_generated_samples~%int32 seq~%~%================================================================================~%MSG: dynamic_movement_primitive/TimeMsg~%float64 delta_t~%float64 tau~%~%================================================================================~%MSG: dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg~%dynamic_movement_primitive/TimeMsg initial_time~%float64 teaching_duration~%float64 execution_duration~%float64 cutoff~%int32 type~%int32 id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DynamicMovementPrimitiveMsg>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'state))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'parameters))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DynamicMovementPrimitiveMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'DynamicMovementPrimitiveMsg
    (cl:cons ':state (state msg))
    (cl:cons ':parameters (parameters msg))
))
