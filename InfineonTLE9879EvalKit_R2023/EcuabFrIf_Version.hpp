#pragma once
/******************************************************************************/
/* File   : EcuabFrIf_Version.hpp                                             */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ECUABFRIF_AR_RELEASE_VERSION_MAJOR                                     4
#define ECUABFRIF_AR_RELEASE_VERSION_MINOR                                     3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ECUABFRIF_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ECUABFRIF_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ECUABFRIF_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ECUABFRIF_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

