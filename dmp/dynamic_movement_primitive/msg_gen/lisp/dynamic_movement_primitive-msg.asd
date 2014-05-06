
(cl:in-package :asdf)

(defsystem "dynamic_movement_primitive-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :locally_weighted_regression-msg
)
  :components ((:file "_package")
    (:file "ICRA2009TransformationSystemMsg" :depends-on ("_package_ICRA2009TransformationSystemMsg"))
    (:file "_package_ICRA2009TransformationSystemMsg" :depends-on ("_package"))
    (:file "TimeMsg" :depends-on ("_package_TimeMsg"))
    (:file "_package_TimeMsg" :depends-on ("_package"))
    (:file "TypeMsg" :depends-on ("_package_TypeMsg"))
    (:file "_package_TypeMsg" :depends-on ("_package"))
    (:file "ICRA2009TransformationSystemStateMsg" :depends-on ("_package_ICRA2009TransformationSystemStateMsg"))
    (:file "_package_ICRA2009TransformationSystemStateMsg" :depends-on ("_package"))
    (:file "TransformationSystemMsg" :depends-on ("_package_TransformationSystemMsg"))
    (:file "_package_TransformationSystemMsg" :depends-on ("_package"))
    (:file "TransformationSystemParametersMsg" :depends-on ("_package_TransformationSystemParametersMsg"))
    (:file "_package_TransformationSystemParametersMsg" :depends-on ("_package"))
    (:file "ICRA2009DynamicMovementPrimitiveMsg" :depends-on ("_package_ICRA2009DynamicMovementPrimitiveMsg"))
    (:file "_package_ICRA2009DynamicMovementPrimitiveMsg" :depends-on ("_package"))
    (:file "StateMsg" :depends-on ("_package_StateMsg"))
    (:file "_package_StateMsg" :depends-on ("_package"))
    (:file "ICRA2009CanonicalSystemMsg" :depends-on ("_package_ICRA2009CanonicalSystemMsg"))
    (:file "_package_ICRA2009CanonicalSystemMsg" :depends-on ("_package"))
    (:file "CanonicalSystemParametersMsg" :depends-on ("_package_CanonicalSystemParametersMsg"))
    (:file "_package_CanonicalSystemParametersMsg" :depends-on ("_package"))
    (:file "NC2010CanonicalSystemParametersMsg" :depends-on ("_package_NC2010CanonicalSystemParametersMsg"))
    (:file "_package_NC2010CanonicalSystemParametersMsg" :depends-on ("_package"))
    (:file "DynamicMovementPrimitiveMsg" :depends-on ("_package_DynamicMovementPrimitiveMsg"))
    (:file "_package_DynamicMovementPrimitiveMsg" :depends-on ("_package"))
    (:file "ICRA2009DynamicMovementPrimitiveParametersMsg" :depends-on ("_package_ICRA2009DynamicMovementPrimitiveParametersMsg"))
    (:file "_package_ICRA2009DynamicMovementPrimitiveParametersMsg" :depends-on ("_package"))
    (:file "DynamicMovementPrimitiveStateMsg" :depends-on ("_package_DynamicMovementPrimitiveStateMsg"))
    (:file "_package_DynamicMovementPrimitiveStateMsg" :depends-on ("_package"))
    (:file "NC2010DynamicMovementPrimitiveStateMsg" :depends-on ("_package_NC2010DynamicMovementPrimitiveStateMsg"))
    (:file "_package_NC2010DynamicMovementPrimitiveStateMsg" :depends-on ("_package"))
    (:file "ControllerStatusMsg" :depends-on ("_package_ControllerStatusMsg"))
    (:file "_package_ControllerStatusMsg" :depends-on ("_package"))
    (:file "NC2010TransformationSystemStateMsg" :depends-on ("_package_NC2010TransformationSystemStateMsg"))
    (:file "_package_NC2010TransformationSystemStateMsg" :depends-on ("_package"))
    (:file "DMPUtilitiesMsg" :depends-on ("_package_DMPUtilitiesMsg"))
    (:file "_package_DMPUtilitiesMsg" :depends-on ("_package"))
    (:file "NC2010CanonicalSystemMsg" :depends-on ("_package_NC2010CanonicalSystemMsg"))
    (:file "_package_NC2010CanonicalSystemMsg" :depends-on ("_package"))
    (:file "ICRA2009CanonicalSystemStateMsg" :depends-on ("_package_ICRA2009CanonicalSystemStateMsg"))
    (:file "_package_ICRA2009CanonicalSystemStateMsg" :depends-on ("_package"))
    (:file "NC2010CanonicalSystemStateMsg" :depends-on ("_package_NC2010CanonicalSystemStateMsg"))
    (:file "_package_NC2010CanonicalSystemStateMsg" :depends-on ("_package"))
    (:file "NC2010TransformationSystemMsg" :depends-on ("_package_NC2010TransformationSystemMsg"))
    (:file "_package_NC2010TransformationSystemMsg" :depends-on ("_package"))
    (:file "NC2010DynamicMovementPrimitiveParametersMsg" :depends-on ("_package_NC2010DynamicMovementPrimitiveParametersMsg"))
    (:file "_package_NC2010DynamicMovementPrimitiveParametersMsg" :depends-on ("_package"))
    (:file "TransformationSystemStateMsg" :depends-on ("_package_TransformationSystemStateMsg"))
    (:file "_package_TransformationSystemStateMsg" :depends-on ("_package"))
    (:file "ICRA2009TransformationSystemParametersMsg" :depends-on ("_package_ICRA2009TransformationSystemParametersMsg"))
    (:file "_package_ICRA2009TransformationSystemParametersMsg" :depends-on ("_package"))
    (:file "CanonicalSystemMsg" :depends-on ("_package_CanonicalSystemMsg"))
    (:file "_package_CanonicalSystemMsg" :depends-on ("_package"))
    (:file "ICRA2009CanonicalSystemParametersMsg" :depends-on ("_package_ICRA2009CanonicalSystemParametersMsg"))
    (:file "_package_ICRA2009CanonicalSystemParametersMsg" :depends-on ("_package"))
    (:file "NC2010TransformationSystemParametersMsg" :depends-on ("_package_NC2010TransformationSystemParametersMsg"))
    (:file "_package_NC2010TransformationSystemParametersMsg" :depends-on ("_package"))
    (:file "DynamicMovementPrimitiveParametersMsg" :depends-on ("_package_DynamicMovementPrimitiveParametersMsg"))
    (:file "_package_DynamicMovementPrimitiveParametersMsg" :depends-on ("_package"))
    (:file "NC2010DynamicMovementPrimitiveMsg" :depends-on ("_package_NC2010DynamicMovementPrimitiveMsg"))
    (:file "_package_NC2010DynamicMovementPrimitiveMsg" :depends-on ("_package"))
    (:file "ICRA2009DynamicMovementPrimitiveStateMsg" :depends-on ("_package_ICRA2009DynamicMovementPrimitiveStateMsg"))
    (:file "_package_ICRA2009DynamicMovementPrimitiveStateMsg" :depends-on ("_package"))
    (:file "CanonicalSystemStateMsg" :depends-on ("_package_CanonicalSystemStateMsg"))
    (:file "_package_CanonicalSystemStateMsg" :depends-on ("_package"))
  ))