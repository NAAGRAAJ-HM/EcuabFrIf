#pragma once
/******************************************************************************/
/* File   : EcuabFrIf.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infEcuabFrIf_ServiceNvM_Types.hpp"
#include "CfgEcuabFrIf.hpp"
#include "EcuabFrIf_core.hpp"
#include "infEcuabFrIf_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabFrIf:
      INTERFACES_EXPORTED_ECUABFRIF
      public abstract_module
   ,  public class_EcuabFrIf_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;
      infServicePduRClient_Lo infServicePduRClient_EcuabFrIf;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ECUABFRIF_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, ECUABFRIF_CONST,       ECUABFRIF_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABFRIF_CONFIG_DATA, ECUABFRIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ECUABFRIF_CODE) DeInitFunction (void);
      FUNC(void, ECUABFRIF_CODE) MainFunction   (void);
      ECUABFRIF_CORE_FUNCTIONALITIES
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
extern VAR(module_EcuabFrIf, ECUABFRIF_VAR) EcuabFrIf;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

