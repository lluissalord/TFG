; Auto-generated. Do not edit!


(cl:in-package dynamic_movement_primitive-msg)


;//! \htmlinclude DynamicMovementPrimitiveParametersMsg.msg.html

(cl:defclass <DynamicMovementPrimitiveParametersMsg> (roslisp-msg-protocol:ros-message)
  ((initial_time
    :reader initial_time
    :initarg :initial_time
    :type dynamic_movement_primitive-msg:TimeMsg
    :initform (cl:make-instance 'dynamic_movement_primitive-msg:TimeMsg))
   (teaching_duration
    :reader teaching_duration
    :initarg :teaching_duration
    :type cl:float
    :initform 0.0)
   (execution_duration
    :reader execution_duration
    :initarg :execution_duration
    :type cl:float
    :initform 0.0)
   (cutoff
    :reader cutoff
    :initarg :cutoff
    :type cl:float
    :initform 0.0)
   (type
    :reader type
    :initarg :type
    :type cl:integer
    :initform 0)
   (id
    :reader id
    :initarg :id
    :type cl:integer
    :initform 0))
)

(cl:defclass DynamicMovementPrimitiveParametersMsg (<DynamicMovementPrimitiveParametersMsg>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DynamicMovementPrimitiveParametersMsg>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DynamicMovementPrimitiveParametersMsg)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dynamic_movement_primitive-msg:<DynamicMovementPrimitiveParametersMsg> is deprecated: use dynamic_movement_primitive-msg:DynamicMovementPrimitiveParametersMsg instead.")))

(cl:ensure-generic-function 'initial_time-val :lambda-list '(m))
(cl:defmethod initial_time-val ((m <DynamicMovementPrimitiveParametersMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:initial_time-val is deprecated.  Use dynamic_movement_primitive-msg:initial_time instead.")
  (initial_time m))

(cl:ensure-generic-function 'teaching_duration-val :lambda-list '(m))
(cl:defmethod teaching_duration-val ((m <DynamicMovementPrimitiveParametersMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:teaching_duration-val is deprecated.  Use dynamic_movement_primitive-msg:teaching_duration instead.")
  (teaching_duration m))

(cl:ensure-generic-function 'execution_duration-val :lambda-list '(m))
(cl:defmethod execution_duration-val ((m <DynamicMovementPrimitiveParametersMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:execution_duration-val is deprecated.  Use dynamic_movement_primitive-msg:execution_duration instead.")
  (execution_duration m))

(cl:ensure-generic-function 'cutoff-val :lambda-list '(m))
(cl:defmethod cutoff-val ((m <DynamicMovementPrimitiveParametersMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:cutoff-val is deprecated.  Use dynamic_movement_primitive-msg:cutoff instead.")
  (cutoff m))

(cl:ensure-generic-function 'type-val :lambda-list '(m))
(cl:defmethod type-val ((m <DynamicMovementPrimitiveParametersMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:type-val is deprecated.  Use dynamic_movement_primitive-msg:type instead.")
  (type m))

(cl:ensure-generic-function 'id-val :lambda-list '(m))
(cl:defmethod id-val ((m <DynamicMovementPrimitiveParametersMsg>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dynamic_movement_primitive-msg:id-val is deprecated.  Use dynamic_movement_primitive-msg:id instead.")
  (id m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DynamicMovementPrimitiveParametersMsg>) ostream)
  "Serializes a message object of type '<DynamicMovementPrimitiveParametersMsg>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'initial_time) ostream)
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'teaching_duration))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'execution_duration))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'cutoff))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let* ((signed (cl:slot-value msg 'type)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'id)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DynamicMovementPrimitiveParametersMsg>) istream)
  "Deserializes a message object of type '<DynamicMovementPrimitiveParametersMsg>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'initial_time) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'teaching_duration) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'execution_duration) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'cutoff) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'type) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'id) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DynamicMovementPrimitiveParametersMsg>)))
  "Returns string type for a message object of type '<DynamicMovementPrimitiveParametersMsg>"
  "dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DynamicMovementPrimitiveParametersMsg)))
  "Returns string type for a message object of type 'DynamicMovementPrimitiveParametersMsg"
  "dynamic_movement_primitive/DynamicMovementPrimitiveParametersMsg")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DynamicMovementPrimitiveParametersMsg>)))
  "Returns md5sum for a message object of type '<DynamicMovementPrimitiveParametersMsg>"
  "fd17fa670eff607981ce08d952fd5648")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DynamicMovementPrimitiveParametersMsg)))
  "Returns md5sum for a message object of type 'DynamicMovementPrimitiveParametersMsg"
  "fd17fa670eff607981ce08d952fd5648")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DynamicMovementPrimitiveParametersMsg>)))
  "Returns full string definition for message of type '<DynamicMovementPrimitiveParametersMsg>"
  (cl:format cl:nil "dynamic_movement_primitive/TimeMsg initial_time~%float64 teaching_duration~%float64 execution_duration~%float64 cutoff~%int32 type~%int32 id~%~%================================================================================~%MSG: dynamic_movement_primitive/TimeMsg~%float64 delta_t~%float64 tau~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DynamicMovementPrimitiveParametersMsg)))
  "Returns full string definition for message of type 'DynamicMovementPrimitiveParametersMsg"
  (cl:format cl:nil "dynamic_movement_primitive/TimeMsg initial_time~%float64 teaching_duration~%float64 execution_duration~%float64 cutoff~%int32 type~%int32 id~%~%================================================================================~%MSG: dynamic_movement_primitive/TimeMsg~%float64 delta_t~%float64 tau~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DynamicMovementPrimitiveParametersMsg>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'initial_time))
     8
     8
     8
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DynamicMovementPrimitiveParametersMsg>))
  "Converts a ROS message object to a list"
  (cl:list 'DynamicMovementPrimitiveParametersMsg
    (cl:cons ':initial_time (initial_time msg))
    (cl:cons ':teaching_duration (teaching_duration msg))
    (cl:cons ':execution_duration (execution_duration msg))
    (cl:cons ':cutoff (cutoff msg))
    (cl:cons ':type (type msg))
    (cl:cons ':id (id msg))
))
