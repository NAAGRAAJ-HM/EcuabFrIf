/******************************************************************************/
/* File   : FrIf.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "FrIf.hpp"
#include "infFrIf_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define FRIF_AR_RELEASE_VERSION_MAJOR                                          4
#define FRIF_AR_RELEASE_VERSION_MINOR                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(FRIF_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible FRIF_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(FRIF_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible FRIF_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, FRIF_VAR, FRIF_CONST) gptrinfEcuMClient_FrIf = &FrIf;
CONSTP2VAR(infDcmClient,  FRIF_VAR, FRIF_CONST) gptrinfDcmClient_FrIf  = &FrIf;
CONSTP2VAR(infSchMClient, FRIF_VAR, FRIF_CONST) gptrinfSchMClient_FrIf = &FrIf;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_FrIf, FRIF_VAR) FrIf;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, FRIF_CODE) module_FrIf::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, FRIF_CONFIG_DATA, FRIF_APPL_CONST) lptrCfgModule
){
#if(STD_ON == FrIf_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         lptrCfg = lptrCfgModule;
      }
      else{
#if(STD_ON == FrIf_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == FrIf_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == FrIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FRIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FRIF_CODE) module_FrIf::DeInitFunction(
   void
){
#if(STD_ON == FrIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == FrIf_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == FrIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FRIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FRIF_CODE) module_FrIf::MainFunction(
   void
){
#if(STD_ON == FrIf_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == FrIf_InitCheck)
   }
   else{
#if(STD_ON == FrIf_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  FRIF_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, FRIF_CODE) module_FrIf::ControllerInit(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::StartCommunication(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::HaltCommunication(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::AbortCommunication(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::GetState(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::SetState(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::SetWakeupChannel(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::SendWUP(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::GetSyncState(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::SetExtSync(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::GetPOCStatus(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::GetGlobalTime(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::AllowColdStart(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::GetMacroticksDuration(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::Transmit(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::SetTransceiverMode(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::GetTransceiverMode(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::GetTransceiverWUReason(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::EnableTransceiverWakeup(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::DisableTransceiverWakeup(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::ClearTransceiverWakeup(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::GetCycleLength(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::SetAbsoluteTimer(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::SetRelativeTimer(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::CancelAbsoluteTimer(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::CancelRelativeTimer(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::EnableAbsoluteTimerIRQ(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::EnableRelativeTimerIRQ(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::GetAbsoluteTimerIRQStatus(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::GetRelativeTimerIRQStatus(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::AckAbsoluteTimerIRQ(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::AckRelativeTimerIRQ(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::DisableAbsoluteTimerIRQ(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::DisableRelativeTimerIRQ(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::GetNmVector(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::GetClockCorrection(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::GetChannelStatus(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::ReadCCConfig(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::GetWakeupRxStatus(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::JobListExec(
   void
){
}

FUNC(void, FRIF_CODE) module_FrIf::CbWakeupByTransceiver(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

