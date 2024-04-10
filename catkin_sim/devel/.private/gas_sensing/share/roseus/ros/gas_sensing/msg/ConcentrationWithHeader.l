;; Auto-generated. Do not edit!


(when (boundp 'gas_sensing::ConcentrationWithHeader)
  (if (not (find-package "GAS_SENSING"))
    (make-package "GAS_SENSING"))
  (shadow 'ConcentrationWithHeader (find-package "GAS_SENSING")))
(unless (find-package "GAS_SENSING::CONCENTRATIONWITHHEADER")
  (make-package "GAS_SENSING::CONCENTRATIONWITHHEADER"))

(in-package "ROS")
;;//! \htmlinclude ConcentrationWithHeader.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass gas_sensing::ConcentrationWithHeader
  :super ros::object
  :slots (_header _concentration _pose ))

(defmethod gas_sensing::ConcentrationWithHeader
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:concentration __concentration) 0.0)
    ((:pose __pose) (instance geometry_msgs::Pose :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _concentration (float __concentration))
   (setq _pose __pose)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:concentration
   (&optional __concentration)
   (if __concentration (setq _concentration __concentration)) _concentration)
  (:pose
   (&rest __pose)
   (if (keywordp (car __pose))
       (send* _pose __pose)
     (progn
       (if __pose (setq _pose (car __pose)))
       _pose)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; float32 _concentration
    4
    ;; geometry_msgs/Pose _pose
    (send _pose :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; float32 _concentration
       (sys::poke _concentration (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; geometry_msgs/Pose _pose
       (send _pose :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; float32 _concentration
     (setq _concentration (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; geometry_msgs/Pose _pose
     (send _pose :deserialize buf ptr-) (incf ptr- (send _pose :serialization-length))
   ;;
   self)
  )

(setf (get gas_sensing::ConcentrationWithHeader :md5sum-) "2da1435b54a9d90dbfea04b09044643e")
(setf (get gas_sensing::ConcentrationWithHeader :datatype-) "gas_sensing/ConcentrationWithHeader")
(setf (get gas_sensing::ConcentrationWithHeader :definition-)
      "# ConcentrationWithHeader.msg
std_msgs/Header header
float32 concentration
geometry_msgs/Pose pose

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

")



(provide :gas_sensing/ConcentrationWithHeader "2da1435b54a9d90dbfea04b09044643e")


