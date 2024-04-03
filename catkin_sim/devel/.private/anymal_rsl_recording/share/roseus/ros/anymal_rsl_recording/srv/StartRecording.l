;; Auto-generated. Do not edit!


(when (boundp 'anymal_rsl_recording::StartRecording)
  (if (not (find-package "ANYMAL_RSL_RECORDING"))
    (make-package "ANYMAL_RSL_RECORDING"))
  (shadow 'StartRecording (find-package "ANYMAL_RSL_RECORDING")))
(unless (find-package "ANYMAL_RSL_RECORDING::STARTRECORDING")
  (make-package "ANYMAL_RSL_RECORDING::STARTRECORDING"))
(unless (find-package "ANYMAL_RSL_RECORDING::STARTRECORDINGREQUEST")
  (make-package "ANYMAL_RSL_RECORDING::STARTRECORDINGREQUEST"))
(unless (find-package "ANYMAL_RSL_RECORDING::STARTRECORDINGRESPONSE")
  (make-package "ANYMAL_RSL_RECORDING::STARTRECORDINGRESPONSE"))

(in-package "ROS")





(defclass anymal_rsl_recording::StartRecordingRequest
  :super ros::object
  :slots (_yaml_file ))

(defmethod anymal_rsl_recording::StartRecordingRequest
  (:init
   (&key
    ((:yaml_file __yaml_file) "")
    )
   (send-super :init)
   (setq _yaml_file (string __yaml_file))
   self)
  (:yaml_file
   (&optional __yaml_file)
   (if __yaml_file (setq _yaml_file __yaml_file)) _yaml_file)
  (:serialization-length
   ()
   (+
    ;; string _yaml_file
    4 (length _yaml_file)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _yaml_file
       (write-long (length _yaml_file) s) (princ _yaml_file s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _yaml_file
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _yaml_file (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass anymal_rsl_recording::StartRecordingResponse
  :super ros::object
  :slots (_timestamp _suc _message ))

(defmethod anymal_rsl_recording::StartRecordingResponse
  (:init
   (&key
    ((:timestamp __timestamp) "")
    ((:suc __suc) nil)
    ((:message __message) "")
    )
   (send-super :init)
   (setq _timestamp (string __timestamp))
   (setq _suc __suc)
   (setq _message (string __message))
   self)
  (:timestamp
   (&optional __timestamp)
   (if __timestamp (setq _timestamp __timestamp)) _timestamp)
  (:suc
   (&optional (__suc :null))
   (if (not (eq __suc :null)) (setq _suc __suc)) _suc)
  (:message
   (&optional __message)
   (if __message (setq _message __message)) _message)
  (:serialization-length
   ()
   (+
    ;; string _timestamp
    4 (length _timestamp)
    ;; bool _suc
    1
    ;; string _message
    4 (length _message)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _timestamp
       (write-long (length _timestamp) s) (princ _timestamp s)
     ;; bool _suc
       (if _suc (write-byte -1 s) (write-byte 0 s))
     ;; string _message
       (write-long (length _message) s) (princ _message s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _timestamp
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _timestamp (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; bool _suc
     (setq _suc (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _message
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _message (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass anymal_rsl_recording::StartRecording
  :super ros::object
  :slots ())

(setf (get anymal_rsl_recording::StartRecording :md5sum-) "3301e16c408a17b56303a46aa82c7f9c")
(setf (get anymal_rsl_recording::StartRecording :datatype-) "anymal_rsl_recording/StartRecording")
(setf (get anymal_rsl_recording::StartRecording :request) anymal_rsl_recording::StartRecordingRequest)
(setf (get anymal_rsl_recording::StartRecording :response) anymal_rsl_recording::StartRecordingResponse)

(defmethod anymal_rsl_recording::StartRecordingRequest
  (:response () (instance anymal_rsl_recording::StartRecordingResponse :init)))

(setf (get anymal_rsl_recording::StartRecordingRequest :md5sum-) "3301e16c408a17b56303a46aa82c7f9c")
(setf (get anymal_rsl_recording::StartRecordingRequest :datatype-) "anymal_rsl_recording/StartRecordingRequest")
(setf (get anymal_rsl_recording::StartRecordingRequest :definition-)
      "string yaml_file
---
string timestamp
bool suc
string message
")

(setf (get anymal_rsl_recording::StartRecordingResponse :md5sum-) "3301e16c408a17b56303a46aa82c7f9c")
(setf (get anymal_rsl_recording::StartRecordingResponse :datatype-) "anymal_rsl_recording/StartRecordingResponse")
(setf (get anymal_rsl_recording::StartRecordingResponse :definition-)
      "string yaml_file
---
string timestamp
bool suc
string message
")



(provide :anymal_rsl_recording/StartRecording "3301e16c408a17b56303a46aa82c7f9c")


