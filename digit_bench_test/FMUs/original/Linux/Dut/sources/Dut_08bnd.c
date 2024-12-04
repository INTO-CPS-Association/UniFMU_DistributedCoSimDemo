/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "Dut_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

OMC_DISABLE_OPT
int Dut_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void Dut_updateBoundParameters_0(DATA *data, threadData_t *threadData);
extern void Dut_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 28
type: ALGORITHM

  assert(dut_turbine.stateSelect >= StateSelect.never and dut_turbine.stateSelect <= StateSelect.always, "Variable violating min/max constraint: StateSelect.never <= dut_turbine.stateSelect <= StateSelect.always, has value: " + String(dut_turbine.stateSelect, "d"));
*/
OMC_DISABLE_OPT
static void Dut_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,118,"Variable violating min/max constraint: StateSelect.never <= dut_turbine.stateSelect <= StateSelect.always, has value: ");
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  static int tmp5 = 0;
  if(!tmp5)
  {
    tmp0 = GreaterEq((data->simulationInfo->integerParameter[3]/* dut_turbine.stateSelect PARAM */) ,1);
    tmp1 = LessEq((data->simulationInfo->integerParameter[3]/* dut_turbine.stateSelect PARAM */) ,5);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[3]/* dut_turbine.stateSelect PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta4 = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ndut_turbine.stateSelect >= StateSelect.never and dut_turbine.stateSelect <= StateSelect.always", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta4));
        } else {
          FILE_INFO info = {"C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",5,3,7,57,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndut_turbine.stateSelect >= StateSelect.never and dut_turbine.stateSelect <= StateSelect.always", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta4));
        }
      }
      tmp5 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 29
type: ALGORITHM

  assert(dut_turbine.J >= 0.0, "Variable violating min constraint: 0.0 <= dut_turbine.J, has value: " + String(dut_turbine.J, "g"));
*/
OMC_DISABLE_OPT
static void Dut_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,68,"Variable violating min constraint: 0.0 <= dut_turbine.J, has value: ");
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  static int tmp10 = 0;
  if(!tmp10)
  {
    tmp6 = GreaterEq((data->simulationInfo->realParameter[0]/* dut_turbine.J PARAM */) ,0.0);
    if(!tmp6)
    {
      tmp8 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[0]/* dut_turbine.J PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta9 = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ndut_turbine.J >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta9));
        } else {
          FILE_INFO info = {"C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",4,3,4,61,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndut_turbine.J >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta9));
        }
      }
      tmp10 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void Dut_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Dut_eqFunction_1(data, threadData);
  Dut_eqFunction_28(data, threadData);
  Dut_eqFunction_29(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int Dut_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  (data->simulationInfo->integerParameter[0]/* angleToTorqueAdaptor.multiplex3.n1 PARAM */)  = ((modelica_integer) 1);
  data->modelData->integerParameterData[0].time_unvarying = 1;
  (data->simulationInfo->integerParameter[1]/* angleToTorqueAdaptor.multiplex3.n2 PARAM */)  = ((modelica_integer) 1);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  (data->simulationInfo->integerParameter[2]/* angleToTorqueAdaptor.multiplex3.n3 PARAM */)  = ((modelica_integer) 1);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[0]/* angleToTorqueAdaptor.move.useSupport PARAM */)  = 0;
  data->modelData->booleanParameterData[0].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[1]/* angleToTorqueAdaptor.use_a PARAM */)  = 1;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[2]/* angleToTorqueAdaptor.use_w PARAM */)  = 1;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[3]/* coupling.use_a PARAM */)  = 1;
  data->modelData->booleanParameterData[3].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[4]/* coupling.use_w PARAM */)  = 1;
  data->modelData->booleanParameterData[4].time_unvarying = 1;
  (data->simulationInfo->integerParameter[3]/* dut_turbine.stateSelect PARAM */)  = 4;
  data->modelData->integerParameterData[3].time_unvarying = 1;
  Dut_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

