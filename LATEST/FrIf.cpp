/******************************************************************************/
/* File   : FrIf.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgFrIf.hpp"
#include "FrIf_core.hpp"
#include "infFrIf.hpp"

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
class module_FrIf:
      public abstract_module
   ,  public class_FrIf_Functionality
{
   public:
      module_FrIf(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, FRIF_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, FRIF_CONFIG_DATA, FRIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, FRIF_CODE) DeInitFunction (void);
      FUNC(void, FRIF_CODE) MainFunction   (void);
      FRIF_CORE_FUNCTIONALITIES
};

extern VAR(module_FrIf, FRIF_VAR) FrIf;

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
VAR(module_FrIf, FRIF_VAR) FrIf(
   {
         FRIF_AR_RELEASE_VERSION_MAJOR
      ,  FRIF_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, FRIF_CODE) module_FrIf::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, FRIF_CONFIG_DATA, FRIF_APPL_CONST) lptrCfgModule
){
#if(STD_ON == FrIf_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == FrIf_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == FrIf_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgFrIf;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == FrIf_InitCheck)
   }
#endif
}

FUNC(void, FRIF_CODE) module_FrIf::DeInitFunction(void){
#if(STD_ON == FrIf_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == FrIf_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == FrIf_InitCheck)
   }
#endif
}

FUNC(void, FRIF_CODE) module_FrIf::MainFunction(void){
#if(STD_ON == FrIf_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == FrIf_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == FrIf_InitCheck)
   }
#endif
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::ControllerInit(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::StartCommunication(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::HaltCommunication(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::AbortCommunication(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::GetState(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::SetState(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::SetWakeupChannel(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::SendWUP(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::GetSyncState(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::SetExtSync(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::GetPOCStatus(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::GetGlobalTime(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::AllowColdStart(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::GetMacroticksDuration(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::Transmit(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::SetTransceiverMode(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::GetTransceiverMode(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::GetTransceiverWUReason(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::EnableTransceiverWakeup(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::DisableTransceiverWakeup(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::ClearTransceiverWakeup(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::GetCycleLength(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::SetAbsoluteTimer(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::SetRelativeTimer(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::CancelAbsoluteTimer(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::CancelRelativeTimer(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::EnableAbsoluteTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::EnableRelativeTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::GetAbsoluteTimerIRQStatus(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::GetRelativeTimerIRQStatus(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::AckAbsoluteTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::AckRelativeTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::DisableAbsoluteTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::DisableRelativeTimerIRQ(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::GetNmVector(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::GetClockCorrection(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::GetChannelStatus(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::ReadCCConfig(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::GetWakeupRxStatus(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::JobListExec(void){
}

FUNC(void, FRIF_CODE) class_FrIf_Functionality::CbWakeupByTransceiver(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

