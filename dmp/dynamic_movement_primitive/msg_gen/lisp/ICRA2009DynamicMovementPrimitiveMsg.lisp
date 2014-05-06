; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude ICRA2009DynamicMovementPrimitiveMsg.msg.html

(cl:defclass <ICRA2009DynamicMovementPrimitiveMsg> (roslisp-msg-protocol:ros-message)
  ((dmp
    :reader dmp
    :initarg :dmp
    :type dynamic_movement_primitive-msg:DynamicMovementPrimitiveMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:DynamicMovementPrimitiveMsg))
   (state
    :reader state
    :initarg :state
    :type dynamic_movement_primitive-msg:ICRA2009DynamicMovementPrimitiveStateMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:ICRA2009DynamicMovementPrimitiveStateMsg))
   (parameters
    :reader parameters
    :initarg :parameters
    :type dynamic_movement_primitive-msg:ICRA2009DynamicMovementPrimitiveParametersMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:ICRA2009DynamicMovementPrimitiveParametersMsg))
   (transformation_systems
    :reader transformation_systems
    :initarg :transformation_systems
    :type (cl:vector dynamic_movement_primitive-msg:ICRA2009TransformationSystemMsg)
   :initform (cl:make-array 0 :element-type 'dynamic_movement_primitive-msg:ICRA2009TransformationSystemMsg :initial-element (cl:make-instance 'dynamic_movement_primitive-msg:ICRA2009TransformationSystemMsg)))
   (canonical_system
    :reader canonical_system
    :initarg :canonical_system
    :type dynamic_movement_primitive-msg:ICRA2009CanonicalSystemMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:ICRA2009CanonicalSystemMsg)))
)

(cl:defclass ICRA2009DynamicMovementPrimitiveMsg (<ICRA2009DynamicMovementPrimitiveMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ICRA2009DynamicMovementPrimitiveMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ICRA2009DynamicMovementPrimitiveMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<ICRA2009DynamicMovementPrimitiveMsg> is deprecated: use dynamic_movement_primitive-msg:ICRA2009DynamicMovementPrimitiveMsg instead.")))

(cl:ensure-generic-function 'dmp-val :lambda-list '(m))
(cl:defmethod dmp-val ((m <ICRA2009DynamicMovementPrimitiveMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:dmp-val is deprecated.  Use dynamic_movement_primitive-msg:dmp instead.")
  (dmp m))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <ICRA2009DynamicMovementPrimitiveMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:state-val is deprecated.  Use dynamic_movement_primitive-msg:state instead.")
  (state m))

(cl:ensure-generic-function 'parameters-val :lambda-list '(m))
(cl:defmethod parameters-val ((m <ICRA2009DynamicMovementPrimitiveMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:parameters-val is deprecated.  Use dynamic_movement_primitive-msg:parameters instead.")
  (parameters m))

(cl:ensure-generic-function 'transformation_systems-val :lambda-list '(m))
(cl:defmethod transformation_systems-val ((m <ICRA2009DynamicMovementPrimitiveMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:transformation_systems-val is deprecated.  Use dynamic_movement_primitive-msg:transformation_systems instead.")
  (transformation_systems m))

(cl:ensure-generic-function 'canonical_system-val :lambda-list '(m))
(cl:defmethod canonical_system-val ((m <ICRA2009DynamicMovementPrimitiveMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:canonical_system-val is deprecated.  Use dynamic_movement_primitive-msg:canonical_system instead.")
  (canonical_system m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ICRA2009DynamicMovementPrimitiveMsg>) ostream)
  "Serializes a message object of type '<ICRA2009DynamicMovementPrimitiveMsg>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'dmp) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'state) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'parameters) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'transformation_systems))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'transformation_systems))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'canonical_system) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ICRA2009DynamicMovementPrimitiveMsg>) istream)
  "Deserializes a message object of type '<ICRA2009DynamicMovementPrimitiveMsg>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'dmp) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'state) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'parameters) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'transformation_systems) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'transformation_systems)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'dynamic_movement_primitive-msg:ICRA2009TransformationSystemMsg))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'canonical_system) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ICRA2009DynamicMovementPrimitiveMsg>)))
  "Returns string type for a message object of type '<ICRA2009DynamicMovementPrimitiveMsg>"
  "dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ICRA2009DynamicMovementPrimitiveMsg)))
  "Returns string type for a message object of type 'ICRA2009DynamicMovementPrimitiveMsg"
  "dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ICRA2009DynamicMovementPrimitiveMsg>)))
  "Returns md5sum for a message object of type '<ICRA2009DynamicMovementPrimitiveMsg>"
  "1c750ea21fb7c4573eda84873df00917")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ICRA2009DynamicMovementPrimitiveMsg)))
  "Returns md5sum for a message object of type 'ICRA2009DynamicMovementPrimitiveMsg"
  "1c750ea21fb7c4573eda84873df00917")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ICRA2009DynamicMovementPrimitiveMsg>)))
  "Returns full string definition for message of type '<ICRA2009DynamicMovementPrimitiveMsg>"
  (cl:format cl:nil "dynamic_movement_primitive/DynamicMovementPrimitiveMsg dmp~%dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveStateMsg state~%dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveParametersMsg parameters~%dynamic_movement_primitive/ICRA2009TransformationSystemMsg[] transformation_systems~%dynamic_movement_primitive/ICRA2009CanonicalSystemMsg canonical_system~%================================================================================~%MSG: dynamic_movement_primitive/DynamicMovementPrimitiveMsg~%dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg state~%dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg~%bool is_learned~%bool is_setup~%bool is_start_set~%dynamic_movement_primitive/TimeMsg current_time~%int32 num_training_samples~%int32 num_generated_samples~%int32 seq~%~%================================================================================~%MSG: dynamic_movement_primitive/TimeMsg~%float64 delta_t~%float64 tau~%~%================================================================================~%MSG: dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg~%dynamic_movement_primitive/TimeMsg initial_time~%float64 teaching_duration~%float64 execution_duration~%float64 cutoff~%int32 type~%int32 id~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveStateMsg~%~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveParametersMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009TransformationSystemMsg~%dynamic_movement_primitive/TransformationSystemMsg transformation_system~%dynamic_movement_primitive/ICRA2009TransformationSystemStateMsg[] states~%dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg[] parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemMsg~%dynamic_movement_primitive/TransformationSystemStateMsg[] states~%dynamic_movement_primitive/TransformationSystemParametersMsg[] parameters~%int32 integration_method~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemStateMsg~%dynamic_movement_primitive/StateMsg internal~%dynamic_movement_primitive/StateMsg target~%dynamic_movement_primitive/StateMsg current~%~%float64 start~%float64 goal~%~%float64 f~%float64 ft~%~%# float64[] function_input~%# float64[] function_target~%~%================================================================================~%MSG: dynamic_movement_primitive/StateMsg~%float64 x~%float64 xd~%float64 xdd~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemParametersMsg~%float64 initial_start~%float64 initial_goal~%~%string name~%~%locally_weighted_regression/Model lwr_model~%================================================================================~%MSG: locally_weighted_regression/Model~%int32 num_rfs~%bool use_offsets~%float64[] widths~%float64[] centers~%float64[] slopes~%float64[] offsets~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009TransformationSystemStateMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg~%float64 k_gain~%float64 d_gain~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemMsg~%dynamic_movement_primitive/CanonicalSystemMsg canonical_system~%dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg state~%dynamic_movement_primitive/ICRA2009CanonicalSystemParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemMsg~%dynamic_movement_primitive/CanonicalSystemStateMsg state~%dynamic_movement_primitive/CanonicalSystemParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemStateMsg~%dynamic_movement_primitive/StateMsg state~%float64 time~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemParametersMsg~%float64 alpha_x~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemParametersMsg~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ICRA2009DynamicMovementPrimitiveMsg)))
  "Returns full string definition for message of type 'ICRA2009DynamicMovementPrimitiveMsg"
  (cl:format cl:nil "dynamic_movement_primitive/DynamicMovementPrimitiveMsg dmp~%dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveStateMsg state~%dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveParametersMsg parameters~%dynamic_movement_primitive/ICRA2009TransformationSystemMsg[] transformation_systems~%dynamic_movement_primitive/ICRA2009CanonicalSystemMsg canonical_system~%================================================================================~%MSG: dynamic_movement_primitive/DynamicMovementPrimitiveMsg~%dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg state~%dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg~%bool is_learned~%bool is_setup~%bool is_start_set~%dynamic_movement_primitive/TimeMsg current_time~%int32 num_training_samples~%int32 num_generated_samples~%int32 seq~%~%================================================================================~%MSG: dynamic_movement_primitive/TimeMsg~%float64 delta_t~%float64 tau~%~%================================================================================~%MSG: dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg~%dynamic_movement_primitive/TimeMsg initial_time~%float64 teaching_duration~%float64 execution_duration~%float64 cutoff~%int32 type~%int32 id~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveStateMsg~%~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveParametersMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009TransformationSystemMsg~%dynamic_movement_primitive/TransformationSystemMsg transformation_system~%dynamic_movement_primitive/ICRA2009TransformationSystemStateMsg[] states~%dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg[] parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemMsg~%dynamic_movement_primitive/TransformationSystemStateMsg[] states~%dynamic_movement_primitive/TransformationSystemParametersMsg[] parameters~%int32 integration_method~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemStateMsg~%dynamic_movement_primitive/StateMsg internal~%dynamic_movement_primitive/StateMsg target~%dynamic_movement_primitive/StateMsg current~%~%float64 start~%float64 goal~%~%float64 f~%float64 ft~%~%# float64[] function_input~%# float64[] function_target~%~%================================================================================~%MSG: dynamic_movement_primitive/StateMsg~%float64 x~%float64 xd~%float64 xdd~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemParametersMsg~%float64 initial_start~%float64 initial_goal~%~%string name~%~%locally_weighted_regression/Model lwr_model~%================================================================================~%MSG: locally_weighted_regression/Model~%int32 num_rfs~%bool use_offsets~%float64[] widths~%float64[] centers~%float64[] slopes~%float64[] offsets~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009TransformationSystemStateMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg~%float64 k_gain~%float64 d_gain~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemMsg~%dynamic_movement_primitive/CanonicalSystemMsg canonical_system~%dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg state~%dynamic_movement_primitive/ICRA2009CanonicalSystemParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemMsg~%dynamic_movement_primitive/CanonicalSystemStateMsg state~%dynamic_movement_primitive/CanonicalSystemParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemStateMsg~%dynamic_movement_primitive/StateMsg state~%float64 time~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemParametersMsg~%float64 alpha_x~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemParametersMsg~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ICRA2009DynamicMovementPrimitiveMsg>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'dmp))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'state))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'parameters))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'transformation_systems) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'canonical_system))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ICRA2009DynamicMovementPrimitiveMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'ICRA2009DynamicMovementPrimitiveMsg
    (cl:cons ':dmp (dmp msg))
    (cl:cons ':state (state msg))
    (cl:cons ':parameters (parameters msg))
    (cl:cons ':transformation_systems (transformation_systems msg))
    (cl:cons ':canonical_system (canonical_system msg))
))
