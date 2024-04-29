
(cl:in-package :asdf)

(defsystem "esp32_ros-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "FloatWithHeader" :depends-on ("_package_FloatWithHeader"))
    (:file "_package_FloatWithHeader" :depends-on ("_package"))
  ))