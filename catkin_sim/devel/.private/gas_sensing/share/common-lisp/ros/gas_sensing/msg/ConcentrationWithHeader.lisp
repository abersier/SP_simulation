; Auto-generated. Do not edit!


(cl:in-package gas_sensing-msg)


;//! \htmlinclude ConcentrationWithHeader.msg.html

(cl:defclass <ConcentrationWithHeader> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (concentration
    :reader concentration
    :initarg :concentration
    :type cl:float
    :initform 0.0)
   (pose
    :reader pose
    :initarg :pose
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose)))
)

(cl:defclass ConcentrationWithHeader (<ConcentrationWithHeader>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ConcentrationWithHeader>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ConcentrationWithHeader)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name gas_sensing-msg:<ConcentrationWithHeader> is deprecated: use gas_sensing-msg:ConcentrationWithHeader instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <ConcentrationWithHeader>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gas_sensing-msg:header-val is deprecated.  Use gas_sensing-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'concentration-val :lambda-list '(m))
(cl:defmethod concentration-val ((m <ConcentrationWithHeader>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gas_sensing-msg:concentration-val is deprecated.  Use gas_sensing-msg:concentration instead.")
  (concentration m))

(cl:ensure-generic-function 'pose-val :lambda-list '(m))
(cl:defmethod pose-val ((m <ConcentrationWithHeader>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader gas_sensing-msg:pose-val is deprecated.  Use gas_sensing-msg:pose instead.")
  (pose m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ConcentrationWithHeader>) ostream)
  "Serializes a message object of type '<ConcentrationWithHeader>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'concentration))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'pose) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ConcentrationWithHeader>) istream)
  "Deserializes a message object of type '<ConcentrationWithHeader>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'concentration) (roslisp-utils:decode-single-float-bits bits)))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'pose) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ConcentrationWithHeader>)))
  "Returns string type for a message object of type '<ConcentrationWithHeader>"
  "gas_sensing/ConcentrationWithHeader")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ConcentrationWithHeader)))
  "Returns string type for a message object of type 'ConcentrationWithHeader"
  "gas_sensing/ConcentrationWithHeader")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ConcentrationWithHeader>)))
  "Returns md5sum for a message object of type '<ConcentrationWithHeader>"
  "2da1435b54a9d90dbfea04b09044643e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ConcentrationWithHeader)))
  "Returns md5sum for a message object of type 'ConcentrationWithHeader"
  "2da1435b54a9d90dbfea04b09044643e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ConcentrationWithHeader>)))
  "Returns full string definition for message of type '<ConcentrationWithHeader>"
  (cl:format cl:nil "# ConcentrationWithHeader.msg~%std_msgs/Header header~%float32 concentration~%geometry_msgs/Pose pose~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ConcentrationWithHeader)))
  "Returns full string definition for message of type 'ConcentrationWithHeader"
  (cl:format cl:nil "# ConcentrationWithHeader.msg~%std_msgs/Header header~%float32 concentration~%geometry_msgs/Pose pose~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ConcentrationWithHeader>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'pose))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ConcentrationWithHeader>))
  "Converts a ROS message object to a list"
  (cl:list 'ConcentrationWithHeader
    (cl:cons ':header (header msg))
    (cl:cons ':concentration (concentration msg))
    (cl:cons ':pose (pose msg))
))
