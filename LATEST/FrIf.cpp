/******************************************************************************/
/* File   : FrIf.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.hpp"
#include "CfgFrIf.hpp"
#include "infFrIf_EcuM.hpp"
#include "infFrIf_Dcm.hpp"
#include "infFrIf_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define FRIF_AR_RELEASE_MAJOR_VERSION                                          4
#define FRIF_AR_RELEASE_MINOR_VERSION                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(FRIF_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible FRIF_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(FRIF_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible FRIF_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_FrIf:
      public abstract_module
{
   public:
      FUNC(void, FRIF_CODE) InitFunction   (void);
      FUNC(void, FRIF_CODE) DeInitFunction (void);
      FUNC(void, FRIF_CODE) GetVersionInfo (void);
      FUNC(void, FRIF_CODE) MainFunction   (void);

   private:
      CONST(Std_TypeVersionInfo, FRIF_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
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
VAR(module_FrIf, FRIF_VAR) FrIf;
CONSTP2VAR(infEcuMClient, FRIF_VAR, FRIF_CONST) gptrinfEcuMClient_FrIf = &FrIf;
CONSTP2VAR(infDcmClient,  FRIF_VAR, FRIF_CONST) gptrinfDcmClient_FrIf  = &FrIf;
CONSTP2VAR(infSchMClient, FRIF_VAR, FRIF_CONST) gptrinfSchMClient_FrIf = &FrIf;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, FRIF_CODE) module_FrIf::InitFunction(void){
   FrIf.IsInitDone = E_OK;
}

FUNC(void, FRIF_CODE) module_FrIf::DeInitFunction(void){
   FrIf.IsInitDone = E_NOT_OK;
}

FUNC(void, FRIF_CODE) module_FrIf::GetVersionInfo(void){
#if(STD_ON == FrIf_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, FRIF_CODE) module_FrIf::MainFunction(void){
}

class class_FrIf_Unused{
   public:
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
};

FUNC(void, FRIF_CODE) class_FrIf_Unused::ControllerInit(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::StartCommunication(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::HaltCommunication(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::AbortCommunication(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetState(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::SetState(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::SetWakeupChannel(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::SendWUP(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetSyncState(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::SetExtSync(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetPOCStatus(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetGlobalTime(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::AllowColdStart(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetMacroticksDuration(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::Transmit(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::SetTransceiverMode(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetTransceiverMode(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetTransceiverWUReason(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::EnableTransceiverWakeup(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::DisableTransceiverWakeup(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::ClearTransceiverWakeup(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetCycleLength(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::SetAbsoluteTimer(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::SetRelativeTimer(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::CancelAbsoluteTimer(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::CancelRelativeTimer(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::EnableAbsoluteTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::EnableRelativeTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetAbsoluteTimerIRQStatus(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetRelativeTimerIRQStatus(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::AckAbsoluteTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::AckRelativeTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::DisableAbsoluteTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::DisableRelativeTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetNmVector(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetClockCorrection(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetChannelStatus(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::ReadCCConfig(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::GetWakeupRxStatus(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::JobListExec(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Unused::CbWakeupByTransceiver(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

