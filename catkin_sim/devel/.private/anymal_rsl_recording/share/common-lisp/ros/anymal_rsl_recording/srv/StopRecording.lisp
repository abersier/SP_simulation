; Auto-generated. Do not edit!


(cl:in-package anymal_rsl_recording-srv)


;//! \htmlinclude StopRecording-request.msg.html

(cl:defclass <StopRecording-request> (roslisp-msg-protocol:ros-message)
  ((verbose
    :reader verbose
    :initarg :verbose
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass StopRecording-request (<StopRecording-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <StopRecording-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'StopRecording-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anymal_rsl_recording-srv:<StopRecording-request> is deprecated: use anymal_rsl_recording-srv:StopRecording-request instead.")))

(cl:ensure-generic-function 'verbose-val :lambda-list '(m))
(cl:defmethod verbose-val ((m <StopRecording-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anymal_rsl_recording-srv:verbose-val is deprecated.  Use anymal_rsl_recording-srv:verbose instead.")
  (verbose m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <StopRecording-request>) ostream)
  "Serializes a message object of type '<StopRecording-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'verbose) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <StopRecording-request>) istream)
  "Deserializes a message object of type '<StopRecording-request>"
    (cl:setf (cl:slot-value msg 'verbose) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<StopRecording-request>)))
  "Returns string type for a service object of type '<StopRecording-request>"
  "anymal_rsl_recording/StopRecordingRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StopRecording-request)))
  "Returns string type for a service object of type 'StopRecording-request"
  "anymal_rsl_recording/StopRecordingRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<StopRecording-request>)))
  "Returns md5sum for a message object of type '<StopRecording-request>"
  "32fb2cde53384a7b9732fe4867a515c5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'StopRecording-request)))
  "Returns md5sum for a message object of type 'StopRecording-request"
  "32fb2cde53384a7b9732fe4867a515c5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<StopRecording-request>)))
  "Returns full string definition for message of type '<StopRecording-request>"
  (cl:format cl:nil "bool verbose~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'StopRecording-request)))
  "Returns full string definition for message of type 'StopRecording-request"
  (cl:format cl:nil "bool verbose~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <StopRecording-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <StopRecording-request>))
  "Converts a ROS message object to a list"
  (cl:list 'StopRecording-request
    (cl:cons ':verbose (verbose msg))
))
;//! \htmlinclude StopRecording-response.msg.html

(cl:defclass <StopRecording-response> (roslisp-msg-protocol:ros-message)
  ((suc
    :reader suc
    :initarg :suc
    :type cl:boolean
    :initform cl:nil)
   (result
    :reader result
    :initarg :result
    :type cl:string
    :initform "")
   (message
    :reader message
    :initarg :message
    :type cl:string
    :initform ""))
)

(cl:defclass StopRecording-response (<StopRecording-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <StopRecording-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'StopRecording-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anymal_rsl_recording-srv:<StopRecording-response> is deprecated: use anymal_rsl_recording-srv:StopRecording-response instead.")))

(cl:ensure-generic-function 'suc-val :lambda-list '(m))
(cl:defmethod suc-val ((m <StopRecording-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anymal_rsl_recording-srv:suc-val is deprecated.  Use anymal_rsl_recording-srv:suc instead.")
  (suc m))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <StopRecording-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anymal_rsl_recording-srv:result-val is deprecated.  Use anymal_rsl_recording-srv:result instead.")
  (result m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <StopRecording-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anymal_rsl_recording-srv:message-val is deprecated.  Use anymal_rsl_recording-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <StopRecording-response>) ostream)
  "Serializes a message object of type '<StopRecording-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'suc) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'result))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'result))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <StopRecording-response>) istream)
  "Deserializes a message object of type '<StopRecording-response>"
    (cl:setf (cl:slot-value msg 'suc) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'result) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'result) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<StopRecording-response>)))
  "Returns string type for a service object of type '<StopRecording-response>"
  "anymal_rsl_recording/StopRecordingResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StopRecording-response)))
  "Returns string type for a service object of type 'StopRecording-response"
  "anymal_rsl_recording/StopRecordingResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<StopRecording-response>)))
  "Returns md5sum for a message object of type '<StopRecording-response>"
  "32fb2cde53384a7b9732fe4867a515c5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'StopRecording-response)))
  "Returns md5sum for a message object of type 'StopRecording-response"
  "32fb2cde53384a7b9732fe4867a515c5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<StopRecording-response>)))
  "Returns full string definition for message of type '<StopRecording-response>"
  (cl:format cl:nil "bool suc~%string result~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'StopRecording-response)))
  "Returns full string definition for message of type 'StopRecording-response"
  (cl:format cl:nil "bool suc~%string result~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <StopRecording-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'result))
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <StopRecording-response>))
  "Converts a ROS message object to a list"
  (cl:list 'StopRecording-response
    (cl:cons ':suc (suc msg))
    (cl:cons ':result (result msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'StopRecording)))
  'StopRecording-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'StopRecording)))
  'StopRecording-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StopRecording)))
  "Returns string type for a service object of type '<StopRecording>"
  "anymal_rsl_recording/StopRecording")