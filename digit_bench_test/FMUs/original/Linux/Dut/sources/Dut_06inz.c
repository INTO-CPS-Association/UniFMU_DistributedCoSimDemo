/* Initialization */
#include "Dut_model.h"
#include "Dut_11mix.h"
#include "Dut_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void Dut_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
angleToTorqueAdaptor.move.phi_support = 0.0
*/
void Dut_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[2]/* angleToTorqueAdaptor.move.phi_support variable */)  = 0.0;
  TRACE_POP
}
extern void Dut_eqFunction_11(DATA *data, threadData_t *threadData);


/*
equation index: 3
type: SIMPLE_ASSIGN
out_speed = dut_turbine.w
*/
void Dut_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[11]/* out_speed variable */)  = (data->localData[0]->realVars[4]/* dut_turbine.w DUMMY_STATE */) ;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
$DER.dut_turbine.phi = dut_turbine.w
*/
void Dut_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[0]/* der(dut_turbine.phi) DUMMY_DER */)  = (data->localData[0]->realVars[4]/* dut_turbine.w DUMMY_STATE */) ;
  TRACE_POP
}
extern void Dut_eqFunction_15(DATA *data, threadData_t *threadData);

extern void Dut_eqFunction_16(DATA *data, threadData_t *threadData);

extern void Dut_eqFunction_17(DATA *data, threadData_t *threadData);

extern void Dut_eqFunction_12(DATA *data, threadData_t *threadData);


/*
equation index: 9
type: SIMPLE_ASSIGN
out_angle = dut_turbine.phi
*/
void Dut_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  (data->localData[0]->realVars[10]/* out_angle variable */)  = (data->localData[0]->realVars[3]/* dut_turbine.phi DUMMY_STATE */) ;
  TRACE_POP
}
OMC_DISABLE_OPT
void Dut_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Dut_eqFunction_1(data, threadData);
  Dut_eqFunction_11(data, threadData);
  Dut_eqFunction_3(data, threadData);
  Dut_eqFunction_4(data, threadData);
  Dut_eqFunction_15(data, threadData);
  Dut_eqFunction_16(data, threadData);
  Dut_eqFunction_17(data, threadData);
  Dut_eqFunction_12(data, threadData);
  Dut_eqFunction_9(data, threadData);
  TRACE_POP
}

int Dut_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  Dut_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/* No Dut_functionInitialEquations_lambda0 function */

int Dut_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

