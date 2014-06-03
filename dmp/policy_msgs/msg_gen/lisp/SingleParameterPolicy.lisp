; Auto-generated. Do not edit!


(cl:in-package policy_msgs-msg)


;//! \htmlinclude SingleParameterPolicy.msg.html

(cl:defclass <SingleParameterPolicy> (roslisp-msg-protocol:ros-message)
  ((initialized
    :reader initialized
    :initarg :initialized
    :type cl:boolean
    :initform cl:nil)
   (num_dimensions
    :reader num_dimensions
    :initarg :num_dimensions
    :type cl:integer
    :initform 0)
   (num_time_steps
    :reader num_time_steps
    :initarg :num_time_steps
    :type cl:integer
    :initform 0)
   (parameters
    :reader parameters
    :initarg :parameters
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (id
    :reader id
    :initarg :id
    :type cl:integer
    :initform 0)
   (library_directory_name
    :reader library_directory_name
    :initarg :library_directory_name
    :type cl:string
    :initform ""))
)

(cl:defclass SingleParameterPolicy (<SingleParameterPolicy>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SingleParameterPolicy>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SingleParameterPolicy)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name policy_msgs-msg:<SingleParameterPolicy> is deprecated: use policy_msgs-msg:SingleParameterPolicy instead.")))

(cl:ensure-generic-function 'initialized-val :lambda-list '(m))
(cl:defmethod initialized-val ((m <SingleParameterPolicy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader policy_msgs-msg:initialized-val is deprecated.  Use policy_msgs-msg:initialized instead.")
  (initialized m))

(cl:ensure-generic-function 'num_dimensions-val :lambda-list '(m))
(cl:defmethod num_dimensions-val ((m <SingleParameterPolicy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader policy_msgs-msg:num_dimensions-val is deprecated.  Use policy_msgs-msg:num_dimensions instead.")
  (num_dimensions m))

(cl:ensure-generic-function 'num_time_steps-val :lambda-list '(m))
(cl:defmethod num_time_steps-val ((m <SingleParameterPolicy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader policy_msgs-msg:num_time_steps-val is deprecated.  Use policy_msgs-msg:num_time_steps instead.")
  (num_time_steps m))

(cl:ensure-generic-function 'parameters-val :lambda-list '(m))
(cl:defmethod parameters-val ((m <SingleParameterPolicy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader policy_msgs-msg:parameters-val is deprecated.  Use policy_msgs-msg:parameters instead.")
  (parameters m))

(cl:ensure-generic-function 'id-val :lambda-list '(m))
(cl:defmethod id-val ((m <SingleParameterPolicy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader policy_msgs-msg:id-val is deprecated.  Use policy_msgs-msg:id instead.")
  (id m))

(cl:ensure-generic-function 'library_directory_name-val :lambda-list '(m))
(cl:defmethod library_directory_name-val ((m <SingleParameterPolicy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader policy_msgs-msg:library_directory_name-val is deprecated.  Use policy_msgs-msg:library_directory_name instead.")
  (library_directory_name m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SingleParameterPolicy>) ostream)
  "Serializes a message object of type '<SingleParameterPolicy>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'initialized) 1 0)) ostream)
  (cl:let* ((signed (cl:slot-value msg 'num_dimensions)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'num_time_steps)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'parameters))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'parameters))
  (cl:let* ((signed (cl:slot-value msg 'id)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'library_directory_name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'library_directory_name))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SingleParameterPolicy>) istream)
  "Deserializes a message object of type '<SingleParameterPolicy>"
    (cl:setf (cl:slot-value msg 'initialized) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'num_dimensions) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'num_time_steps) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'parameters) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'parameters)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits))))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'id) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'library_directory_name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'library_directory_name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SingleParameterPolicy>)))
  "Returns string type for a message object of type '<SingleParameterPolicy>"
  "policy_msgs/SingleParameterPolicy")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SingleParameterPolicy)))
  "Returns string type for a message object of type 'SingleParameterPolicy"
  "policy_msgs/SingleParameterPolicy")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SingleParameterPolicy>)))
  "Returns md5sum for a message object of type '<SingleParameterPolicy>"
  "13a6d0d4357dfb9862d925356ffa184c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SingleParameterPolicy)))
  "Returns md5sum for a message object of type 'SingleParameterPolicy"
  "13a6d0d4357dfb9862d925356ffa184c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SingleParameterPolicy>)))
  "Returns full string definition for message of type '<SingleParameterPolicy>"
  (cl:format cl:nil "bool initialized~%int32 num_dimensions~%int32 num_time_steps~%float64[] parameters~%int32 id~%string library_directory_name~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SingleParameterPolicy)))
  "Returns full string definition for message of type 'SingleParameterPolicy"
  (cl:format cl:nil "bool initialized~%int32 num_dimensions~%int32 num_time_steps~%float64[] parameters~%int32 id~%string library_directory_name~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SingleParameterPolicy>))
  (cl:+ 0
     1
     4
     4
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'parameters) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     4
     4 (cl:length (cl:slot-value msg 'library_directory_name))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SingleParameterPolicy>))
  "Converts a ROS message object to a list"
  (cl:list 'SingleParameterPolicy
    (cl:cons ':initialized (initialized msg))
    (cl:cons ':num_dimensions (num_dimensions msg))
    (cl:cons ':num_time_steps (num_time_steps msg))
    (cl:cons ':parameters (parameters msg))
    (cl:cons ':id (id msg))
    (cl:cons ':library_directory_name (library_directory_name msg))
))
