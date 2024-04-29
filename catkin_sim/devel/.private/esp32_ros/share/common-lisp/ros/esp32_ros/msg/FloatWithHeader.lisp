; Auto-generated. Do not edit!


(cl:in-package esp32_ros-msg)


;//! \htmlinclude FloatWithHeader.msg.html

(cl:defclass <FloatWithHeader> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (data
    :reader data
    :initarg :data
    :type cl:float
    :initform 0.0))
)

(cl:defclass FloatWithHeader (<FloatWithHeader>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FloatWithHeader>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FloatWithHeader)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name esp32_ros-msg:<FloatWithHeader> is deprecated: use esp32_ros-msg:FloatWithHeader instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <FloatWithHeader>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader esp32_ros-msg:header-val is deprecated.  Use esp32_ros-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'data-val :lambda-list '(m))
(cl:defmethod data-val ((m <FloatWithHeader>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader esp32_ros-msg:data-val is deprecated.  Use esp32_ros-msg:data instead.")
  (data m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FloatWithHeader>) ostream)
  "Serializes a message object of type '<FloatWithHeader>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'data))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FloatWithHeader>) istream)
  "Deserializes a message object of type '<FloatWithHeader>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'data) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FloatWithHeader>)))
  "Returns string type for a message object of type '<FloatWithHeader>"
  "esp32_ros/FloatWithHeader")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FloatWithHeader)))
  "Returns string type for a message object of type 'FloatWithHeader"
  "esp32_ros/FloatWithHeader")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FloatWithHeader>)))
  "Returns md5sum for a message object of type '<FloatWithHeader>"
  "ef848af8cf12f6df11682cc76fba477b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FloatWithHeader)))
  "Returns md5sum for a message object of type 'FloatWithHeader"
  "ef848af8cf12f6df11682cc76fba477b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FloatWithHeader>)))
  "Returns full string definition for message of type '<FloatWithHeader>"
  (cl:format cl:nil "std_msgs/Header header~%float32 data~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FloatWithHeader)))
  "Returns full string definition for message of type 'FloatWithHeader"
  (cl:format cl:nil "std_msgs/Header header~%float32 data~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FloatWithHeader>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FloatWithHeader>))
  "Converts a ROS message object to a list"
  (cl:list 'FloatWithHeader
    (cl:cons ':header (header msg))
    (cl:cons ':data (data msg))
))
