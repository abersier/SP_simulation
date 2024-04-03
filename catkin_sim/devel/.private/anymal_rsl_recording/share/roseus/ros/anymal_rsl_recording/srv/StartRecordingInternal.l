;; Auto-generated. Do not edit!


(when (boundp 'anymal_rsl_recording::StartRecordingInternal)
  (if (not (find-package "ANYMAL_RSL_RECORDING"))
    (make-package "ANYMAL_RSL_RECORDING"))
  (shadow 'StartRecordingInternal (find-package "ANYMAL_RSL_RECORDING")))
(unless (find-package "ANYMAL_RSL_RECORDING::STARTRECORDINGINTERNAL")
  (make-package "ANYMAL_RSL_RECORDING::STARTRECORDINGINTERNAL"))
(unless (find-package "ANYMAL_RSL_RECORDING::STARTRECORDINGINTERNALREQUEST")
  (make-package "ANYMAL_RSL_RECORDING::STARTRECORDINGINTERNALREQUEST"))
(unless (find-package "ANYMAL_RSL_RECORDING::STARTRECORDINGINTERNALRESPONSE")
  (make-package "ANYMAL_RSL_RECORDING::STARTRECORDINGINTERNALRESPONSE"))

(in-package "ROS")





(defclass anymal_rsl_recording::StartRecordingInternalRequest
  :super ros::object
  :slots (_topics _timestamp ))

(defmethod anymal_rsl_recording::StartRecordingInternalRequest
  (:init
   (&key
    ((:topics __topics) "")
    ((:timestamp __timestamp) "")
    )
   (send-super :init)
   (setq _topics (string __topics))
   (setq _timestamp (string __timestamp))
   self)
  (:topics
   (&optional __topics)
   (if __topics (setq _topics __topics)) _topics)
  (:timestamp
   (&optional __timestamp)
   (if __timestamp (setq _timestamp __timestamp)) _timestamp)
  (:serialization-length
   ()
   (+
    ;; string _topics
    4 (length _topics)
    ;; string _timestamp
    4 (length _timestamp)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _topics
       (write-long (length _topics) s) (princ _topics s)
     ;; string _timestamp
       (write-long (length _timestamp) s) (princ _timestamp s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _topics
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _topics (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _timestamp
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _timestamp (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass anymal_rsl_recording::StartRecordingInternalResponse
  :super ros::object
  :slots (_suc _message ))

(defmethod anymal_rsl_recording::StartRecordingInternalResponse
  (:init
   (&key
    ((:suc __suc) nil)
    ((:message __message) "")
    )
   (send-super :init)
   (setq _suc __suc)
   (setq _message (string __message))
   self)
  (:suc
   (&optional (__suc :null))
   (if (not (eq __suc :null)) (setq _suc __suc)) _suc)
  (:message
   (&optional __message)
   (if __message (setq _message __message)) _message)
  (:serialization-length
   ()
   (+
    ;; bool _suc
    1
    ;; string _message
    4 (length _message)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _suc
       (if _suc (write-byte -1 s) (write-byte 0 s))
     ;; string _message
       (write-long (length _message) s) (princ _message s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _suc
     (setq _suc (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _message
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _message (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass anymal_rsl_recording::StartRecordingInternal
  :super ros::object
  :slots ())

(setf (get anymal_rsl_recording::StartRecordingInternal :md5sum-) "31953adc5c144f572ee1dd85f7900ed7")
(setf (get anymal_rsl_recording::StartRecordingInternal :datatype-) "anymal_rsl_recording/StartRecordingInternal")
(setf (get anymal_rsl_recording::StartRecordingInternal :request) anymal_rsl_recording::StartRecordingInternalRequest)
(setf (get anymal_rsl_recording::StartRecordingInternal :response) anymal_rsl_recording::StartRecordingInternalResponse)

(defmethod anymal_rsl_recording::StartRecordingInternalRequest
  (:response () (instance anymal_rsl_recording::StartRecordingInternalResponse :init)))

(setf (get anymal_rsl_recording::StartRecordingInternalRequest :md5sum-) "31953adc5c144f572ee1dd85f7900ed7")
(setf (get anymal_rsl_recording::StartRecordingInternalRequest :datatype-) "anymal_rsl_recording/StartRecordingInternalRequest")
(setf (get anymal_rsl_recording::StartRecordingInternalRequest :definition-)
      "string topics
string timestamp
---
bool suc
string message
")

(setf (get anymal_rsl_recording::StartRecordingInternalResponse :md5sum-) "31953adc5c144f572ee1dd85f7900ed7")
(setf (get anymal_rsl_recording::StartRecordingInternalResponse :datatype-) "anymal_rsl_recording/StartRecordingInternalResponse")
(setf (get anymal_rsl_recording::StartRecordingInternalResponse :definition-)
      "string topics
string timestamp
---
bool suc
string message
")



(provide :anymal_rsl_recording/StartRecordingInternal "31953adc5c144f572ee1dd85f7900ed7")


