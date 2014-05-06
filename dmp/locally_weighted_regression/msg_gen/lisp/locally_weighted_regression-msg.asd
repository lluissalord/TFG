
(cl:in-package :asdf)

(defsystem "locally_weighted_regression-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Model" :depends-on ("_package_Model"))
    (:file "_package_Model" :depends-on ("_package"))
  ))