
(cl:in-package :asdf)

(defsystem "anymal_rsl_recording-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "StartRecording" :depends-on ("_package_StartRecording"))
    (:file "_package_StartRecording" :depends-on ("_package"))
    (:file "StartRecordingInternal" :depends-on ("_package_StartRecordingInternal"))
    (:file "_package_StartRecordingInternal" :depends-on ("_package"))
    (:file "StopRecording" :depends-on ("_package_StopRecording"))
    (:file "_package_StopRecording" :depends-on ("_package"))
    (:file "StopRecordingInternal" :depends-on ("_package_StopRecordingInternal"))
    (:file "_package_StopRecordingInternal" :depends-on ("_package"))
  ))