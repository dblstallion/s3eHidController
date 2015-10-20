/*
 * WARNING: this is an autogenerated file and will be overwritten by
 * the extension interface script.
 */
/**
 * Definitions for functions types passed to/from s3eExt interface
 */
typedef       bool(*s3eHidControllerIsConnected_t)();
typedef       bool(*s3eHidControllerUpdate_t)();
typedef      float(*s3eHidControllerGetStick1XAxis_t)();
typedef      float(*s3eHidControllerGetStick1YAxis_t)();
typedef      float(*s3eHidControllerGetStick2XAxis_t)();
typedef      float(*s3eHidControllerGetStick2YAxis_t)();
typedef      float(*s3eHidControllerGetLeftTrigger_t)();
typedef      float(*s3eHidControllerGetRightTrigger_t)();
typedef       bool(*s3eHidControllerGetButtonX_t)();
typedef       bool(*s3eHidControllerGetButtonY_t)();
typedef       bool(*s3eHidControllerGetButtonA_t)();
typedef       bool(*s3eHidControllerGetButtonB_t)();
typedef       bool(*s3eHidControllerGetButtonDPadLeft_t)();
typedef       bool(*s3eHidControllerGetButtonDPadRight_t)();
typedef       bool(*s3eHidControllerGetButtonDPadUp_t)();
typedef       bool(*s3eHidControllerGetButtonDPadDown_t)();
typedef       bool(*s3eHidControllerGetButtonLShoulderDown_t)();
typedef       bool(*s3eHidControllerGetButtonRShoulderDown_t)();
typedef       bool(*s3eHidControllerGetButtonStart_t)();
typedef       bool(*s3eHidControllerGetButtonSelect_t)();
typedef       bool(*s3eHidControllerUpdateLegacy_t)(float dt);

/**
 * struct that gets filled in by s3eHidControllerRegister
 */
typedef struct s3eHidControllerFuncs
{
    s3eHidControllerIsConnected_t m_s3eHidControllerIsConnected;
    s3eHidControllerUpdate_t m_s3eHidControllerUpdate;
    s3eHidControllerGetStick1XAxis_t m_s3eHidControllerGetStick1XAxis;
    s3eHidControllerGetStick1YAxis_t m_s3eHidControllerGetStick1YAxis;
    s3eHidControllerGetStick2XAxis_t m_s3eHidControllerGetStick2XAxis;
    s3eHidControllerGetStick2YAxis_t m_s3eHidControllerGetStick2YAxis;
    s3eHidControllerGetLeftTrigger_t m_s3eHidControllerGetLeftTrigger;
    s3eHidControllerGetRightTrigger_t m_s3eHidControllerGetRightTrigger;
    s3eHidControllerGetButtonX_t m_s3eHidControllerGetButtonX;
    s3eHidControllerGetButtonY_t m_s3eHidControllerGetButtonY;
    s3eHidControllerGetButtonA_t m_s3eHidControllerGetButtonA;
    s3eHidControllerGetButtonB_t m_s3eHidControllerGetButtonB;
    s3eHidControllerGetButtonDPadLeft_t m_s3eHidControllerGetButtonDPadLeft;
    s3eHidControllerGetButtonDPadRight_t m_s3eHidControllerGetButtonDPadRight;
    s3eHidControllerGetButtonDPadUp_t m_s3eHidControllerGetButtonDPadUp;
    s3eHidControllerGetButtonDPadDown_t m_s3eHidControllerGetButtonDPadDown;
    s3eHidControllerGetButtonLShoulderDown_t m_s3eHidControllerGetButtonLShoulderDown;
    s3eHidControllerGetButtonRShoulderDown_t m_s3eHidControllerGetButtonRShoulderDown;
    s3eHidControllerGetButtonStart_t m_s3eHidControllerGetButtonStart;
    s3eHidControllerGetButtonSelect_t m_s3eHidControllerGetButtonSelect;
    s3eHidControllerUpdateLegacy_t m_s3eHidControllerUpdateLegacy;
} s3eHidControllerFuncs;