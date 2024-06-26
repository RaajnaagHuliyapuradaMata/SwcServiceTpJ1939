#pragma once
/******************************************************************************/
/* File   : EcuabJ1939Tp.hpp                                                       */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstEcuabJ1939Tp.hpp"
#include "CfgEcuabJ1939Tp.hpp"
#include "EcuabJ1939Tp_core.hpp"
#include "infEcuabJ1939Tp_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabJ1939Tp:
      INTERFACES_EXPORTED_J1939TP
      public abstract_module
   ,  public class_EcuabJ1939Tp_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstEcuabJ1939Tp_Type* lptrConst = (ConstEcuabJ1939Tp_Type*)NULL_PTR;
      infServicePduRClient_Lo infServicePduRClient_EcuabJ1939Tp;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, J1939TP_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, J1939TP_CONST,       J1939TP_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   J1939TP_CONFIG_DATA, J1939TP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, J1939TP_CODE) DeInitFunction (void);
      FUNC(void, J1939TP_CODE) MainFunction   (void);
      J1939TP_CORE_FUNCTIONALITIES
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
extern VAR(module_EcuabJ1939Tp, J1939TP_VAR) EcuabJ1939Tp;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

