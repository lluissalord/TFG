; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude DMPUtilitiesMsg.msg.html

(cl:defclass <DMPUtilitiesMsg> (roslisp-msg-protocol:ros-message)
  ((dmp_version
    :reader dmp_version
    :initarg :dmp_version
    :type cl:string
    :initform "")
   (icra2009_dmp
    :reader icra2009_dmp
    :initarg :icra2009_dmp
    :type dynamic_movement_primitive-msg:ICRA2009DynamicMovementPrimitiveMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:ICRA2009DynamicMovementPrimitiveMsg))
   (nc2010_dmp
    :reader nc2010_dmp
    :initarg :nc2010_dmp
    :type dynamic_movement_primitive-msg:NC2010DynamicMovementPrimitiveMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:NC2010DynamicMovementPrimitiveMsg)))
)

(cl:defclass DMPUtilitiesMsg (<DMPUtilitiesMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DMPUtilitiesMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DMPUtilitiesMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<DMPUtilitiesMsg> is deprecated: use dynamic_movement_primitive-msg:DMPUtilitiesMsg instead.")))

(cl:ensure-generic-function 'dmp_version-val :lambda-list '(m))
(cl:defmethod dmp_version-val ((m <DMPUtilitiesMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:dmp_version-val is deprecated.  Use dynamic_movement_primitive-msg:dmp_version instead.")
  (dmp_version m))

(cl:ensure-generic-function 'icra2009_dmp-val :lambda-list '(m))
(cl:defmethod icra2009_dmp-val ((m <DMPUtilitiesMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:icra2009_dmp-val is deprecated.  Use dynamic_movement_primitive-msg:icra2009_dmp instead.")
  (icra2009_dmp m))

(cl:ensure-generic-function 'nc2010_dmp-val :lambda-list '(m))
(cl:defmethod nc2010_dmp-val ((m <DMPUtilitiesMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:nc2010_dmp-val is deprecated.  Use dynamic_movement_primitive-msg:nc2010_dmp instead.")
  (nc2010_dmp m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<DMPUtilitiesMsg>)))
    "Constants for message type '<DMPUtilitiesMsg>"
  '((:ICRA2009 . ICRA2009)
    (:NC2010 . NC2010))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'DMPUtilitiesMsg)))
    "Constants for message type 'DMPUtilitiesMsg"
  '((:ICRA2009 . ICRA2009)
    (:NC2010 . NC2010))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DMPUtilitiesMsg>) ostream)
  "Serializes a message object of type '<DMPUtilitiesMsg>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'dmp_version))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'dmp_version))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'icra2009_dmp) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'nc2010_dmp) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DMPUtilitiesMsg>) istream)
  "Deserializes a message object of type '<DMPUtilitiesMsg>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'dmp_version) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'dmp_version) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'icra2009_dmp) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'nc2010_dmp) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DMPUtilitiesMsg>)))
  "Returns string type for a message object of type '<DMPUtilitiesMsg>"
  "dynamic_movement_primitive/DMPUtilitiesMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DMPUtilitiesMsg)))
  "Returns string type for a message object of type 'DMPUtilitiesMsg"
  "dynamic_movement_primitive/DMPUtilitiesMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DMPUtilitiesMsg>)))
  "Returns md5sum for a message object of type '<DMPUtilitiesMsg>"
  "606043f93a494c67d2a6701fbca9a0e4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DMPUtilitiesMsg)))
  "Returns md5sum for a message object of type 'DMPUtilitiesMsg"
  "606043f93a494c67d2a6701fbca9a0e4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DMPUtilitiesMsg>)))
  "Returns full string definition for message of type '<DMPUtilitiesMsg>"
  (cl:format cl:nil "string dmp_version~%string ICRA2009=ICRA2009~%string NC2010=NC2010~%dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveMsg icra2009_dmp~%dynamic_movement_primitive/NC2010DynamicMovementPrimitiveMsg nc2010_dmp~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveMsg~%dynamic_movement_primitive/DynamicMovementPrimitiveMsg dmp~%dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveStateMsg state~%dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveParametersMsg parameters~%dynamic_movement_primitive/ICRA2009TransformationSystemMsg[] transformation_systems~%dynamic_movement_primitive/ICRA2009CanonicalSystemMsg canonical_system~%================================================================================~%MSG: dynamic_movement_primitive/DynamicMovementPrimitiveMsg~%dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg state~%dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg~%bool is_learned~%bool is_setup~%bool is_start_set~%dynamic_movement_primitive/TimeMsg current_time~%int32 num_training_samples~%int32 num_generated_samples~%int32 seq~%~%================================================================================~%MSG: dynamic_movement_primitive/TimeMsg~%float64 delta_t~%float64 tau~%~%================================================================================~%MSG: dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg~%dynamic_movement_primitive/TimeMsg initial_time~%float64 teaching_duration~%float64 execution_duration~%float64 cutoff~%int32 type~%int32 id~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveStateMsg~%~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveParametersMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009TransformationSystemMsg~%dynamic_movement_primitive/TransformationSystemMsg transformation_system~%dynamic_movement_primitive/ICRA2009TransformationSystemStateMsg[] states~%dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg[] parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemMsg~%dynamic_movement_primitive/TransformationSystemStateMsg[] states~%dynamic_movement_primitive/TransformationSystemParametersMsg[] parameters~%int32 integration_method~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemStateMsg~%dynamic_movement_primitive/StateMsg internal~%dynamic_movement_primitive/StateMsg target~%dynamic_movement_primitive/StateMsg current~%~%float64 start~%float64 goal~%~%float64 f~%float64 ft~%~%# float64[] function_input~%# float64[] function_target~%~%================================================================================~%MSG: dynamic_movement_primitive/StateMsg~%float64 x~%float64 xd~%float64 xdd~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemParametersMsg~%float64 initial_start~%float64 initial_goal~%~%string name~%~%locally_weighted_regression/Model lwr_model~%================================================================================~%MSG: locally_weighted_regression/Model~%int32 num_rfs~%bool use_offsets~%float64[] widths~%float64[] centers~%float64[] slopes~%float64[] offsets~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009TransformationSystemStateMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg~%float64 k_gain~%float64 d_gain~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemMsg~%dynamic_movement_primitive/CanonicalSystemMsg canonical_system~%dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg state~%dynamic_movement_primitive/ICRA2009CanonicalSystemParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemMsg~%dynamic_movement_primitive/CanonicalSystemStateMsg state~%dynamic_movement_primitive/CanonicalSystemParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemStateMsg~%dynamic_movement_primitive/StateMsg state~%float64 time~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemParametersMsg~%float64 alpha_x~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemParametersMsg~%~%~%================================================================================~%MSG: dynamic_movement_primitive/NC2010DynamicMovementPrimitiveMsg~%dynamic_movement_primitive/DynamicMovementPrimitiveMsg dmp~%dynamic_movement_primitive/NC2010DynamicMovementPrimitiveStateMsg state~%dynamic_movement_primitive/NC2010DynamicMovementPrimitiveParametersMsg parameters~%dynamic_movement_primitive/NC2010TransformationSystemMsg[] transformation_systems~%dynamic_movement_primitive/NC2010CanonicalSystemMsg canonical_system~%================================================================================~%MSG: dynamic_movement_primitive/NC2010DynamicMovementPrimitiveStateMsg~%~%~%================================================================================~%MSG: dynamic_movement_primitive/NC2010DynamicMovementPrimitiveParametersMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/NC2010TransformationSystemMsg~%dynamic_movement_primitive/TransformationSystemMsg transformation_system~%dynamic_movement_primitive/NC2010TransformationSystemStateMsg[] states~%dynamic_movement_primitive/NC2010TransformationSystemParametersMsg[] parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/NC2010TransformationSystemStateMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/NC2010TransformationSystemParametersMsg~%float64 k_gain~%float64 d_gain~%~%================================================================================~%MSG: dynamic_movement_primitive/NC2010CanonicalSystemMsg~%dynamic_movement_primitive/CanonicalSystemMsg canonical_system~%dynamic_movement_primitive/NC2010CanonicalSystemStateMsg state~%dynamic_movement_primitive/NC2010CanonicalSystemParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/NC2010CanonicalSystemStateMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/NC2010CanonicalSystemParametersMsg~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DMPUtilitiesMsg)))
  "Returns full string definition for message of type 'DMPUtilitiesMsg"
  (cl:format cl:nil "string dmp_version~%string ICRA2009=ICRA2009~%string NC2010=NC2010~%dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveMsg icra2009_dmp~%dynamic_movement_primitive/NC2010DynamicMovementPrimitiveMsg nc2010_dmp~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveMsg~%dynamic_movement_primitive/DynamicMovementPrimitiveMsg dmp~%dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveStateMsg state~%dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveParametersMsg parameters~%dynamic_movement_primitive/ICRA2009TransformationSystemMsg[] transformation_systems~%dynamic_movement_primitive/ICRA2009CanonicalSystemMsg canonical_system~%================================================================================~%MSG: dynamic_movement_primitive/DynamicMovementPrimitiveMsg~%dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg state~%dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/DynamicMovementPrimitiveStateMsg~%bool is_learned~%bool is_setup~%bool is_start_set~%dynamic_movement_primitive/TimeMsg current_time~%int32 num_training_samples~%int32 num_generated_samples~%int32 seq~%~%================================================================================~%MSG: dynamic_movement_primitive/TimeMsg~%float64 delta_t~%float64 tau~%~%================================================================================~%MSG: dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg~%dynamic_movement_primitive/TimeMsg initial_time~%float64 teaching_duration~%float64 execution_duration~%float64 cutoff~%int32 type~%int32 id~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveStateMsg~%~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009DynamicMovementPrimitiveParametersMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009TransformationSystemMsg~%dynamic_movement_primitive/TransformationSystemMsg transformation_system~%dynamic_movement_primitive/ICRA2009TransformationSystemStateMsg[] states~%dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg[] parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemMsg~%dynamic_movement_primitive/TransformationSystemStateMsg[] states~%dynamic_movement_primitive/TransformationSystemParametersMsg[] parameters~%int32 integration_method~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemStateMsg~%dynamic_movement_primitive/StateMsg internal~%dynamic_movement_primitive/StateMsg target~%dynamic_movement_primitive/StateMsg current~%~%float64 start~%float64 goal~%~%float64 f~%float64 ft~%~%# float64[] function_input~%# float64[] function_target~%~%================================================================================~%MSG: dynamic_movement_primitive/StateMsg~%float64 x~%float64 xd~%float64 xdd~%~%================================================================================~%MSG: dynamic_movement_primitive/TransformationSystemParametersMsg~%float64 initial_start~%float64 initial_goal~%~%string name~%~%locally_weighted_regression/Model lwr_model~%================================================================================~%MSG: locally_weighted_regression/Model~%int32 num_rfs~%bool use_offsets~%float64[] widths~%float64[] centers~%float64[] slopes~%float64[] offsets~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009TransformationSystemStateMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009TransformationSystemParametersMsg~%float64 k_gain~%float64 d_gain~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemMsg~%dynamic_movement_primitive/CanonicalSystemMsg canonical_system~%dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg state~%dynamic_movement_primitive/ICRA2009CanonicalSystemParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemMsg~%dynamic_movement_primitive/CanonicalSystemStateMsg state~%dynamic_movement_primitive/CanonicalSystemParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemStateMsg~%dynamic_movement_primitive/StateMsg state~%float64 time~%================================================================================~%MSG: dynamic_movement_primitive/CanonicalSystemParametersMsg~%float64 alpha_x~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemStateMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/ICRA2009CanonicalSystemParametersMsg~%~%~%================================================================================~%MSG: dynamic_movement_primitive/NC2010DynamicMovementPrimitiveMsg~%dynamic_movement_primitive/DynamicMovementPrimitiveMsg dmp~%dynamic_movement_primitive/NC2010DynamicMovementPrimitiveStateMsg state~%dynamic_movement_primitive/NC2010DynamicMovementPrimitiveParametersMsg parameters~%dynamic_movement_primitive/NC2010TransformationSystemMsg[] transformation_systems~%dynamic_movement_primitive/NC2010CanonicalSystemMsg canonical_system~%================================================================================~%MSG: dynamic_movement_primitive/NC2010DynamicMovementPrimitiveStateMsg~%~%~%================================================================================~%MSG: dynamic_movement_primitive/NC2010DynamicMovementPrimitiveParametersMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/NC2010TransformationSystemMsg~%dynamic_movement_primitive/TransformationSystemMsg transformation_system~%dynamic_movement_primitive/NC2010TransformationSystemStateMsg[] states~%dynamic_movement_primitive/NC2010TransformationSystemParametersMsg[] parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/NC2010TransformationSystemStateMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/NC2010TransformationSystemParametersMsg~%float64 k_gain~%float64 d_gain~%~%================================================================================~%MSG: dynamic_movement_primitive/NC2010CanonicalSystemMsg~%dynamic_movement_primitive/CanonicalSystemMsg canonical_system~%dynamic_movement_primitive/NC2010CanonicalSystemStateMsg state~%dynamic_movement_primitive/NC2010CanonicalSystemParametersMsg parameters~%~%================================================================================~%MSG: dynamic_movement_primitive/NC2010CanonicalSystemStateMsg~%~%================================================================================~%MSG: dynamic_movement_primitive/NC2010CanonicalSystemParametersMsg~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DMPUtilitiesMsg>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'dmp_version))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'icra2009_dmp))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'nc2010_dmp))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DMPUtilitiesMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'DMPUtilitiesMsg
    (cl:cons ':dmp_version (dmp_version msg))
    (cl:cons ':icra2009_dmp (icra2009_dmp msg))
    (cl:cons ':nc2010_dmp (nc2010_dmp msg))
))
