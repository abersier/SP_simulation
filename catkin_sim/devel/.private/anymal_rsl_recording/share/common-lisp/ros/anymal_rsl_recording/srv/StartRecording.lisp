; Auto-generated. Do not edit!


(cl:in-package anymal_rsl_recording-srv)


;//! \htmlinclude StartRecording-request.msg.html

(cl:defclass <StartRecording-request> (roslisp-msg-protocol:ros-message)
  ((yaml_file
    :reader yaml_file
    :initarg :yaml_file
    :type cl:string
    :initform ""))
)

(cl:defclass StartRecording-request (<StartRecording-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <StartRecording-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'StartRecording-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anymal_rsl_recording-srv:<StartRecording-request> is deprecated: use anymal_rsl_recording-srv:StartRecording-request instead.")))

(cl:ensure-generic-function 'yaml_file-val :lambda-list '(m))
(cl:defmethod yaml_file-val ((m <StartRecording-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anymal_rsl_recording-srv:yaml_file-val is deprecated.  Use anymal_rsl_recording-srv:yaml_file instead.")
  (yaml_file m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <StartRecording-request>) ostream)
  "Serializes a message object of type '<StartRecording-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'yaml_file))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'yaml_file))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <StartRecording-request>) istream)
  "Deserializes a message object of type '<StartRecording-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'yaml_file) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'yaml_file) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<StartRecording-request>)))
  "Returns string type for a service object of type '<StartRecording-request>"
  "anymal_rsl_recording/StartRecordingRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StartRecording-request)))
  "Returns string type for a service object of type 'StartRecording-request"
  "anymal_rsl_recording/StartRecordingRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<StartRecording-request>)))
  "Returns md5sum for a message object of type '<StartRecording-request>"
  "3301e16c408a17b56303a46aa82c7f9c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'StartRecording-request)))
  "Returns md5sum for a message object of type 'StartRecording-request"
  "3301e16c408a17b56303a46aa82c7f9c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<StartRecording-request>)))
  "Returns full string definition for message of type '<StartRecording-request>"
  (cl:format cl:nil "string yaml_file~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'StartRecording-request)))
  "Returns full string definition for message of type 'StartRecording-request"
  (cl:format cl:nil "string yaml_file~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <StartRecording-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'yaml_file))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <StartRecording-request>))
  "Converts a ROS message object to a list"
  (cl:list 'StartRecording-request
    (cl:cons ':yaml_file (yaml_file msg))
))
;//! \htmlinclude StartRecording-response.msg.html

(cl:defclass <StartRecording-response> (roslisp-msg-protocol:ros-message)
  ((timestamp
    :reader timestamp
    :initarg :timestamp
    :type cl:string
    :initform "")
   (suc
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

(cl:defclass StartRecording-response (<StartRecording-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <StartRecording-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'StartRecording-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name anymal_rsl_recording-srv:<StartRecording-response> is deprecated: use anymal_rsl_recording-srv:StartRecording-response instead.")))

(cl:ensure-generic-function 'timestamp-val :lambda-list '(m))
(cl:defmethod timestamp-val ((m <StartRecording-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anymal_rsl_recording-srv:timestamp-val is deprecated.  Use anymal_rsl_recording-srv:timestamp instead.")
  (timestamp m))

(cl:ensure-generic-function 'suc-val :lambda-list '(m))
(cl:defmethod suc-val ((m <StartRecording-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anymal_rsl_recording-srv:suc-val is deprecated.  Use anymal_rsl_recording-srv:suc instead.")
  (suc m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <StartRecording-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader anymal_rsl_recording-srv:message-val is deprecated.  Use anymal_rsl_recording-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <StartRecording-response>) ostream)
  "Serializes a message object of type '<StartRecording-response>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'timestamp))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'timestamp))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'suc) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <StartRecording-response>) istream)
  "Deserializes a message object of type '<StartRecording-response>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'timestamp) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'timestamp) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<StartRecording-response>)))
  "Returns string type for a service object of type '<StartRecording-response>"
  "anymal_rsl_recording/StartRecordingResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StartRecording-response)))
  "Returns string type for a service object of type 'StartRecording-response"
  "anymal_rsl_recording/StartRecordingResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<StartRecording-response>)))
  "Returns md5sum for a message object of type '<StartRecording-response>"
  "3301e16c408a17b56303a46aa82c7f9c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'StartRecording-response)))
  "Returns md5sum for a message object of type 'StartRecording-response"
  "3301e16c408a17b56303a46aa82c7f9c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<StartRecording-response>)))
  "Returns full string definition for message of type '<StartRecording-response>"
  (cl:format cl:nil "string timestamp~%bool suc~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'StartRecording-response)))
  "Returns full string definition for message of type 'StartRecording-response"
  (cl:format cl:nil "string timestamp~%bool suc~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <StartRecording-response>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'timestamp))
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <StartRecording-response>))
  "Converts a ROS message object to a list"
  (cl:list 'StartRecording-response
    (cl:cons ':timestamp (timestamp msg))
    (cl:cons ':suc (suc msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'StartRecording)))
  'StartRecording-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'StartRecording)))
  'StartRecording-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StartRecording)))
  "Returns string type for a service object of type '<StartRecording>"
  "anymal_rsl_recording/StartRecording")