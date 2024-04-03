; Auto-generated. Do not edit!


(cl:in-package anymal_rsl_recording-srv)


;//! \htmlinclude StartRecordingInternal-request.msg.html

(cl:defclass <StartRecordingInternal-request> (roslisp-msg-protocol:ros-message)
  ((topics
    :reader topics
    :initarg :topics
    :type cl:string
    :initform "")
   (timestamp
    :reader timestamp
    :initarg :timestamp
    :type cl:string
    :initform ""))
)

(cl:defclass StartRecordingInternal-request (<StartRecordingInternal-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <StartRecordingInternal-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'StartRecordingInternal-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anymal_rsl_recording-srv:<StartRecordingInternal-request> is deprecated: use anymal_rsl_recording-srv:StartRecordingInternal-request instead.")))

(cl:ensure-generic-function 'topics-val :lambda-list '(m))
(cl:defmethod topics-val ((m <StartRecordingInternal-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anymal_rsl_recording-srv:topics-val is deprecated.  Use anymal_rsl_recording-srv:topics instead.")
  (topics m))

(cl:ensure-generic-function 'timestamp-val :lambda-list '(m))
(cl:defmethod timestamp-val ((m <StartRecordingInternal-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anymal_rsl_recording-srv:timestamp-val is deprecated.  Use anymal_rsl_recording-srv:timestamp instead.")
  (timestamp m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <StartRecordingInternal-request>) ostream)
  "Serializes a message object of type '<StartRecordingInternal-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'topics))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'topics))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'timestamp))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'timestamp))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <StartRecordingInternal-request>) istream)
  "Deserializes a message object of type '<StartRecordingInternal-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'topics) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'topics) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'timestamp) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'timestamp) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<StartRecordingInternal-request>)))
  "Returns string type for a service object of type '<StartRecordingInternal-request>"
  "anymal_rsl_recording/StartRecordingInternalRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StartRecordingInternal-request)))
  "Returns string type for a service object of type 'StartRecordingInternal-request"
  "anymal_rsl_recording/StartRecordingInternalRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<StartRecordingInternal-request>)))
  "Returns md5sum for a message object of type '<StartRecordingInternal-request>"
  "31953adc5c144f572ee1dd85f7900ed7")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'StartRecordingInternal-request)))
  "Returns md5sum for a message object of type 'StartRecordingInternal-request"
  "31953adc5c144f572ee1dd85f7900ed7")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<StartRecordingInternal-request>)))
  "Returns full string definition for message of type '<StartRecordingInternal-request>"
  (cl:format cl:nil "string topics~%string timestamp~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'StartRecordingInternal-request)))
  "Returns full string definition for message of type 'StartRecordingInternal-request"
  (cl:format cl:nil "string topics~%string timestamp~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <StartRecordingInternal-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'topics))
     4 (cl:length (cl:slot-value msg 'timestamp))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <StartRecordingInternal-request>))
  "Converts a ROS message object to a list"
  (cl:list 'StartRecordingInternal-request
    (cl:cons ':topics (topics msg))
    (cl:cons ':timestamp (timestamp msg))
))
;//! \htmlinclude StartRecordingInternal-response.msg.html

(cl:defclass <StartRecordingInternal-response> (roslisp-msg-protocol:ros-message)
  ((suc
    :reader suc
    :initarg :suc
    :type cl:boolean
    :initform cl:nil)
   (message
    :reader message
    :initarg :message
    :type cl:string
    :initform ""))
)

(cl:defclass StartRecordingInternal-response (<StartRecordingInternal-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <StartRecordingInternal-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'StartRecordingInternal-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anymal_rsl_recording-srv:<StartRecordingInternal-response> is deprecated: use anymal_rsl_recording-srv:StartRecordingInternal-response instead.")))

(cl:ensure-generic-function 'suc-val :lambda-list '(m))
(cl:defmethod suc-val ((m <StartRecordingInternal-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anymal_rsl_recording-srv:suc-val is deprecated.  Use anymal_rsl_recording-srv:suc instead.")
  (suc m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <StartRecordingInternal-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anymal_rsl_recording-srv:message-val is deprecated.  Use anymal_rsl_recording-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <StartRecordingInternal-response>) ostream)
  "Serializes a message object of type '<StartRecordingInternal-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'suc) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <StartRecordingInternal-response>) istream)
  "Deserializes a message object of type '<StartRecordingInternal-response>"
    (cl:setf (cl:slot-value msg 'suc) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'message) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'message) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<StartRecordingInternal-response>)))
  "Returns string type for a service object of type '<StartRecordingInternal-response>"
  "anymal_rsl_recording/StartRecordingInternalResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StartRecordingInternal-response)))
  "Returns string type for a service object of type 'StartRecordingInternal-response"
  "anymal_rsl_recording/StartRecordingInternalResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<StartRecordingInternal-response>)))
  "Returns md5sum for a message object of type '<StartRecordingInternal-response>"
  "31953adc5c144f572ee1dd85f7900ed7")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'StartRecordingInternal-response)))
  "Returns md5sum for a message object of type 'StartRecordingInternal-response"
  "31953adc5c144f572ee1dd85f7900ed7")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<StartRecordingInternal-response>)))
  "Returns full string definition for message of type '<StartRecordingInternal-response>"
  (cl:format cl:nil "bool suc~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'StartRecordingInternal-response)))
  "Returns full string definition for message of type 'StartRecordingInternal-response"
  (cl:format cl:nil "bool suc~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <StartRecordingInternal-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <StartRecordingInternal-response>))
  "Converts a ROS message object to a list"
  (cl:list 'StartRecordingInternal-response
    (cl:cons ':suc (suc msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'StartRecordingInternal)))
  'StartRecordingInternal-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'StartRecordingInternal)))
  'StartRecordingInternal-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StartRecordingInternal)))
  "Returns string type for a service object of type '<StartRecordingInternal>"
  "anymal_rsl_recording/StartRecordingInternal")