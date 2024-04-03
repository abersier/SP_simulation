;; Auto-generated. Do not edit!


(when (boundp 'anymal_rsl_recording::StopRecording)
  (if (not (find-package "ANYMAL_RSL_RECORDING"))
    (make-package "ANYMAL_RSL_RECORDING"))
  (shadow 'StopRecording (find-package "ANYMAL_RSL_RECORDING")))
(unless (find-package "ANYMAL_RSL_RECORDING::STOPRECORDING")
  (make-package "ANYMAL_RSL_RECORDING::STOPRECORDING"))
(unless (find-package "ANYMAL_RSL_RECORDING::STOPRECORDINGREQUEST")
  (make-package "ANYMAL_RSL_RECORDING::STOPRECORDINGREQUEST"))
(unless (find-package "ANYMAL_RSL_RECORDING::STOPRECORDINGRESPONSE")
  (make-package "ANYMAL_RSL_RECORDING::STOPRECORDINGRESPONSE"))

(in-package "ROS")





(defclass anymal_rsl_recording::StopRecordingRequest
  :super ros::object
  :slots (_verbose ))

(defmethod anymal_rsl_recording::StopRecordingRequest
  (:init
   (&key
    ((:verbose __verbose) nil)
    )
   (send-super :init)
   (setq _verbose __verbose)
   self)
  (:verbose
   (&optional (__verbose :null))
   (if (not (eq __verbose :null)) (setq _verbose __verbose)) _verbose)
  (:serialization-length
   ()
   (+
    ;; bool _verbose
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _verbose
       (if _verbose (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _verbose
     (setq _verbose (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass anymal_rsl_recording::StopRecordingResponse
  :super ros::object
  :slots (_suc _result _message ))

(defmethod anymal_rsl_recording::StopRecordingResponse
  (:init
   (&key
    ((:suc __suc) nil)
    ((:result __result) "")
    ((:message __message) "")
    )
   (send-super :init)
   (setq _suc __suc)
   (setq _result (string __result))
   (setq _message (string __message))
   self)
  (:suc
   (&optional (__suc :null))
   (if (not (eq __suc :null)) (setq _suc __suc)) _suc)
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:message
   (&optional __message)
   (if __message (setq _message __message)) _message)
  (:serialization-length
   ()
   (+
    ;; bool _suc
    1
    ;; string _result
    4 (length _result)
    ;; string _message
    4 (length _message)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _suc
       (if _suc (write-byte -1 s) (write-byte 0 s))
     ;; string _result
       (write-long (length _result) s) (princ _result s)
     ;; string _message
       (write-long (length _message) s) (princ _message s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _suc
     (setq _suc (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _result
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _result (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; string _message
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _message (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass anymal_rsl_recording::StopRecording
  :super ros::object
  :slots ())

(setf (get anymal_rsl_recording::StopRecording :md5sum-) "32fb2cde53384a7b9732fe4867a515c5")
(setf (get anymal_rsl_recording::StopRecording :datatype-) "anymal_rsl_recording/StopRecording")
(setf (get anymal_rsl_recording::StopRecording :request) anymal_rsl_recording::StopRecordingRequest)
(setf (get anymal_rsl_recording::StopRecording :response) anymal_rsl_recording::StopRecordingResponse)

(defmethod anymal_rsl_recording::StopRecordingRequest
  (:response () (instance anymal_rsl_recording::StopRecordingResponse :init)))

(setf (get anymal_rsl_recording::StopRecordingRequest :md5sum-) "32fb2cde53384a7b9732fe4867a515c5")
(setf (get anymal_rsl_recording::StopRecordingRequest :datatype-) "anymal_rsl_recording/StopRecordingRequest")
(setf (get anymal_rsl_recording::StopRecordingRequest :definition-)
      "bool verbose
---
bool suc
string result
string message
")

(setf (get anymal_rsl_recording::StopRecordingResponse :md5sum-) "32fb2cde53384a7b9732fe4867a515c5")
(setf (get anymal_rsl_recording::StopRecordingResponse :datatype-) "anymal_rsl_recording/StopRecordingResponse")
(setf (get anymal_rsl_recording::StopRecordingResponse :definition-)
      "bool verbose
---
bool suc
string result
string message
")



(provide :anymal_rsl_recording/StopRecording "32fb2cde53384a7b9732fe4867a515c5")

