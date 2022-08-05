#pragma once
/******************************************************************************/
/* File   : EcuabFrIf_core.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_EcuabFrIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define FRIF_CORE_FUNCTIONALITIES                                              \
              FUNC(void, FRIF_CODE) ControllerInit            (void);          \
              FUNC(void, FRIF_CODE) StartServiceCommunication        (void);          \
              FUNC(void, FRIF_CODE) HaltServiceCommunication         (void);          \
              FUNC(void, FRIF_CODE) AbortServiceCommunication        (void);          \
              FUNC(void, FRIF_CODE) GetState                  (void);          \
              FUNC(void, FRIF_CODE) SetState                  (void);          \
              FUNC(void, FRIF_CODE) SetWakeupChannel          (void);          \
              FUNC(void, FRIF_CODE) SendWUP                   (void);          \
              FUNC(void, FRIF_CODE) GetSyncState              (void);          \
              FUNC(void, FRIF_CODE) SetExtSync                (void);          \
              FUNC(void, FRIF_CODE) GetPOCStatus              (void);          \
              FUNC(void, FRIF_CODE) GetGlobalTime             (void);          \
              FUNC(void, FRIF_CODE) AllowColdStart            (void);          \
              FUNC(void, FRIF_CODE) GetMacroticksDuration     (void);          \
              FUNC(void, FRIF_CODE) Transmit                  (void);          \
              FUNC(void, FRIF_CODE) SetTransceiverMode        (void);          \
              FUNC(void, FRIF_CODE) GetTransceiverMode        (void);          \
              FUNC(void, FRIF_CODE) GetTransceiverWUReason    (void);          \
              FUNC(void, FRIF_CODE) EnableTransceiverWakeup   (void);          \
              FUNC(void, FRIF_CODE) DisableTransceiverWakeup  (void);          \
              FUNC(void, FRIF_CODE) ClearTransceiverWakeup    (void);          \
              FUNC(void, FRIF_CODE) GetCycleLength            (void);          \
              FUNC(void, FRIF_CODE) SetAbsoluteTimer          (void);          \
              FUNC(void, FRIF_CODE) SetRelativeTimer          (void);          \
              FUNC(void, FRIF_CODE) McalCancelAbsoluteTimer       (void);          \
              FUNC(void, FRIF_CODE) McalCancelRelativeTimer       (void);          \
              FUNC(void, FRIF_CODE) EnableAbsoluteTimerIRQ    (void);          \
              FUNC(void, FRIF_CODE) EnableRelativeTimerIRQ    (void);          \
              FUNC(void, FRIF_CODE) GetAbsoluteTimerIRQStatus (void);          \
              FUNC(void, FRIF_CODE) GetRelativeTimerIRQStatus (void);          \
              FUNC(void, FRIF_CODE) AckAbsoluteTimerIRQ       (void);          \
              FUNC(void, FRIF_CODE) AckRelativeTimerIRQ       (void);          \
              FUNC(void, FRIF_CODE) DisableAbsoluteTimerIRQ   (void);          \
              FUNC(void, FRIF_CODE) DisableRelativeTimerIRQ   (void);          \
              FUNC(void, FRIF_CODE) GetServiceNmVector               (void);          \
              FUNC(void, FRIF_CODE) GetClockCorrection        (void);          \
              FUNC(void, FRIF_CODE) GetChannelStatus          (void);          \
              FUNC(void, FRIF_CODE) ReadCCConfig              (void);          \
              FUNC(void, FRIF_CODE) GetWakeupRxStatus         (void);          \
              FUNC(void, FRIF_CODE) JobListExec               (void);          \
              FUNC(void, FRIF_CODE) CbWakeupByTransceiver     (void);          \

#define FRIF_CORE_FUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, FRIF_CODE) ControllerInit            (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) StartServiceCommunication        (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) HaltServiceCommunication         (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) AbortServiceCommunication        (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) GetState                  (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) SetState                  (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) SetWakeupChannel          (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) SendWUP                   (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) GetSyncState              (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) SetExtSync                (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) GetPOCStatus              (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) GetGlobalTime             (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) AllowColdStart            (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) GetMacroticksDuration     (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) Transmit                  (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) SetTransceiverMode        (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) GetTransceiverMode        (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) GetTransceiverWUReason    (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) EnableTransceiverWakeup   (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) DisableTransceiverWakeup  (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) ClearTransceiverWakeup    (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) GetCycleLength            (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) SetAbsoluteTimer          (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) SetRelativeTimer          (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) McalCancelAbsoluteTimer       (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) McalCancelRelativeTimer       (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) EnableAbsoluteTimerIRQ    (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) EnableRelativeTimerIRQ    (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) GetAbsoluteTimerIRQStatus (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) GetRelativeTimerIRQStatus (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) AckAbsoluteTimerIRQ       (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) AckRelativeTimerIRQ       (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) DisableAbsoluteTimerIRQ   (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) DisableRelativeTimerIRQ   (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) GetServiceNmVector               (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) GetClockCorrection        (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) GetChannelStatus          (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) ReadCCConfig              (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) GetWakeupRxStatus         (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) JobListExec               (void) = 0;      \
      virtual FUNC(void, FRIF_CODE) CbWakeupByTransceiver     (void) = 0;      \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_EcuabFrIf_Functionality{
   public:
      FRIF_CORE_FUNCTIONALITIES_VIRTUAL
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

