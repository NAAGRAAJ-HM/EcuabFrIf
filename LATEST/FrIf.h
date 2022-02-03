#pragma once
/*****************************************************/
/* File   : FrIf.h                                   */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Std_Types.h"
#include "Compiler_Cfg_FrIf.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class class_FrIf{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, FRIF_CODE) GetVersionInfo            (void);
      FUNC(void, FRIF_CODE) ControllerInit            (void);
      FUNC(void, FRIF_CODE) StartCommunication        (void);
      FUNC(void, FRIF_CODE) HaltCommunication         (void);
      FUNC(void, FRIF_CODE) AbortCommunication        (void);
      FUNC(void, FRIF_CODE) GetState                  (void);
      FUNC(void, FRIF_CODE) SetState                  (void);
      FUNC(void, FRIF_CODE) SetWakeupChannel          (void);
      FUNC(void, FRIF_CODE) SendWUP                   (void);
      FUNC(void, FRIF_CODE) GetSyncState              (void);
      FUNC(void, FRIF_CODE) SetExtSync                (void);
      FUNC(void, FRIF_CODE) GetPOCStatus              (void);
      FUNC(void, FRIF_CODE) GetGlobalTime             (void);
      FUNC(void, FRIF_CODE) AllowColdStart            (void);
      FUNC(void, FRIF_CODE) GetMacroticksDuration     (void);
      FUNC(void, FRIF_CODE) Transmit                  (void);
      FUNC(void, FRIF_CODE) SetTransceiverMode        (void);
      FUNC(void, FRIF_CODE) GetTransceiverMode        (void);
      FUNC(void, FRIF_CODE) GetTransceiverWUReason    (void);
      FUNC(void, FRIF_CODE) EnableTransceiverWakeup   (void);
      FUNC(void, FRIF_CODE) DisableTransceiverWakeup  (void);
      FUNC(void, FRIF_CODE) ClearTransceiverWakeup    (void);
      FUNC(void, FRIF_CODE) GetCycleLength            (void);
      FUNC(void, FRIF_CODE) SetAbsoluteTimer          (void);
      FUNC(void, FRIF_CODE) SetRelativeTimer          (void);
      FUNC(void, FRIF_CODE) CancelAbsoluteTimer       (void);
      FUNC(void, FRIF_CODE) CancelRelativeTimer       (void);
      FUNC(void, FRIF_CODE) EnableAbsoluteTimerIRQ    (void);
      FUNC(void, FRIF_CODE) EnableRelativeTimerIRQ    (void);
      FUNC(void, FRIF_CODE) GetAbsoluteTimerIRQStatus (void);
      FUNC(void, FRIF_CODE) GetRelativeTimerIRQStatus (void);
      FUNC(void, FRIF_CODE) AckAbsoluteTimerIRQ       (void);
      FUNC(void, FRIF_CODE) AckRelativeTimerIRQ       (void);
      FUNC(void, FRIF_CODE) DisableAbsoluteTimerIRQ   (void);
      FUNC(void, FRIF_CODE) DisableRelativeTimerIRQ   (void);
      FUNC(void, FRIF_CODE) GetNmVector               (void);
      FUNC(void, FRIF_CODE) GetClockCorrection        (void);
      FUNC(void, FRIF_CODE) GetChannelStatus          (void);
      FUNC(void, FRIF_CODE) ReadCCConfig              (void);
      FUNC(void, FRIF_CODE) GetWakeupRxStatus         (void);
      FUNC(void, FRIF_CODE) JobListExec               (void);
      FUNC(void, FRIF_CODE) CbWakeupByTransceiver     (void);
      FUNC(void, FRIF_CODE) MainFunction              (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern class_FrIf FrIf;

/*****************************************************/
/* EOF                                               */
/*****************************************************/



