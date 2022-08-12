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
#define ECUABFRIF_CORE_FUNCTIONALITIES                                              \
              FUNC(void, ECUABFRIF_CODE) ControllerInit            (void);          \
              FUNC(void, ECUABFRIF_CODE) StartServiceCommunication        (void);          \
              FUNC(void, ECUABFRIF_CODE) HaltServiceCommunication         (void);          \
              FUNC(void, ECUABFRIF_CODE) AbortServiceCommunication        (void);          \
              FUNC(void, ECUABFRIF_CODE) GetState                  (void);          \
              FUNC(void, ECUABFRIF_CODE) SetState                  (void);          \
              FUNC(void, ECUABFRIF_CODE) SetWakeupChannel          (void);          \
              FUNC(void, ECUABFRIF_CODE) SendWUP                   (void);          \
              FUNC(void, ECUABFRIF_CODE) GetSyncState              (void);          \
              FUNC(void, ECUABFRIF_CODE) SetExtSync                (void);          \
              FUNC(void, ECUABFRIF_CODE) GetPOCStatus              (void);          \
              FUNC(void, ECUABFRIF_CODE) GetGlobalTime             (void);          \
              FUNC(void, ECUABFRIF_CODE) AllowColdStart            (void);          \
              FUNC(void, ECUABFRIF_CODE) GetMacroticksDuration     (void);          \
              FUNC(void, ECUABFRIF_CODE) Transmit                  (void);          \
              FUNC(void, ECUABFRIF_CODE) SetTransceiverMode        (void);          \
              FUNC(void, ECUABFRIF_CODE) GetTransceiverMode        (void);          \
              FUNC(void, ECUABFRIF_CODE) GetTransceiverWUReason    (void);          \
              FUNC(void, ECUABFRIF_CODE) EnableTransceiverWakeup   (void);          \
              FUNC(void, ECUABFRIF_CODE) DisableTransceiverWakeup  (void);          \
              FUNC(void, ECUABFRIF_CODE) ClearTransceiverWakeup    (void);          \
              FUNC(void, ECUABFRIF_CODE) GetCycleLength            (void);          \
              FUNC(void, ECUABFRIF_CODE) SetAbsoluteTimer          (void);          \
              FUNC(void, ECUABFRIF_CODE) SetRelativeTimer          (void);          \
              FUNC(void, ECUABFRIF_CODE) McalCancelAbsoluteTimer       (void);          \
              FUNC(void, ECUABFRIF_CODE) McalCancelRelativeTimer       (void);          \
              FUNC(void, ECUABFRIF_CODE) EnableAbsoluteTimerIRQ    (void);          \
              FUNC(void, ECUABFRIF_CODE) EnableRelativeTimerIRQ    (void);          \
              FUNC(void, ECUABFRIF_CODE) GetAbsoluteTimerIRQStatus (void);          \
              FUNC(void, ECUABFRIF_CODE) GetRelativeTimerIRQStatus (void);          \
              FUNC(void, ECUABFRIF_CODE) AckAbsoluteTimerIRQ       (void);          \
              FUNC(void, ECUABFRIF_CODE) AckRelativeTimerIRQ       (void);          \
              FUNC(void, ECUABFRIF_CODE) DisableAbsoluteTimerIRQ   (void);          \
              FUNC(void, ECUABFRIF_CODE) DisableRelativeTimerIRQ   (void);          \
              FUNC(void, ECUABFRIF_CODE) GetServiceNmVector               (void);          \
              FUNC(void, ECUABFRIF_CODE) GetClockCorrection        (void);          \
              FUNC(void, ECUABFRIF_CODE) GetChannelStatus          (void);          \
              FUNC(void, ECUABFRIF_CODE) ReadCCConfig              (void);          \
              FUNC(void, ECUABFRIF_CODE) GetWakeupRxStatus         (void);          \
              FUNC(void, ECUABFRIF_CODE) JobListExec               (void);          \
              FUNC(void, ECUABFRIF_CODE) CbWakeupByTransceiver     (void);          \

#define ECUABFRIF_CORE_FUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, ECUABFRIF_CODE) ControllerInit            (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) StartServiceCommunication        (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) HaltServiceCommunication         (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) AbortServiceCommunication        (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) GetState                  (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) SetState                  (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) SetWakeupChannel          (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) SendWUP                   (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) GetSyncState              (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) SetExtSync                (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) GetPOCStatus              (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) GetGlobalTime             (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) AllowColdStart            (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) GetMacroticksDuration     (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) Transmit                  (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) SetTransceiverMode        (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) GetTransceiverMode        (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) GetTransceiverWUReason    (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) EnableTransceiverWakeup   (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) DisableTransceiverWakeup  (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) ClearTransceiverWakeup    (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) GetCycleLength            (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) SetAbsoluteTimer          (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) SetRelativeTimer          (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) McalCancelAbsoluteTimer       (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) McalCancelRelativeTimer       (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) EnableAbsoluteTimerIRQ    (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) EnableRelativeTimerIRQ    (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) GetAbsoluteTimerIRQStatus (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) GetRelativeTimerIRQStatus (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) AckAbsoluteTimerIRQ       (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) AckRelativeTimerIRQ       (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) DisableAbsoluteTimerIRQ   (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) DisableRelativeTimerIRQ   (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) GetServiceNmVector               (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) GetClockCorrection        (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) GetChannelStatus          (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) ReadCCConfig              (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) GetWakeupRxStatus         (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) JobListExec               (void) = 0;      \
      virtual FUNC(void, ECUABFRIF_CODE) CbWakeupByTransceiver     (void) = 0;      \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_EcuabFrIf_Functionality{
   public:
      ECUABFRIF_CORE_FUNCTIONALITIES_VIRTUAL
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

