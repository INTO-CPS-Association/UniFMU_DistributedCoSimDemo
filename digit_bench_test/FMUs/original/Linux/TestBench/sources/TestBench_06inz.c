/* Initialization */
#include "TestBench_model.h"
#include "TestBench_11mix.h"
#include "TestBench_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void TestBench_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
test_bench_torque.phi_support = 0.0
*/
void TestBench_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[23]/* test_bench_torque.phi_support variable */)  = 0.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
test_bench_speed_sensor.flange.tau = 0.0
*/
void TestBench_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[22]/* test_bench_speed_sensor.flange.tau variable */)  = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
angle_sensor.flange.tau = 0.0
*/
void TestBench_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[13]/* angle_sensor.flange.tau variable */)  = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
testbench_inertia.phi = $START.testbench_inertia.phi
*/
void TestBench_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[2]/* testbench_inertia.phi STATE(1,testbench_inertia.w) */)  = (data->modelData->realVarsData[2]/* testbench_inertia.phi STATE(1,testbench_inertia.w) */).attribute .start;
  TRACE_POP
}
extern void TestBench_eqFunction_37(DATA *data, threadData_t *threadData);


/*
equation index: 6
type: SIMPLE_ASSIGN
testbench_inertia.w = $START.testbench_inertia.w
*/
void TestBench_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->realVars[3]/* testbench_inertia.w STATE(1,testbench_inertia.a) */)  = (data->modelData->realVarsData[3]/* testbench_inertia.w STATE(1,testbench_inertia.a) */).attribute .start;
  TRACE_POP
}
extern void TestBench_eqFunction_32(DATA *data, threadData_t *threadData);

extern void TestBench_eqFunction_36(DATA *data, threadData_t *threadData);

extern void TestBench_eqFunction_31(DATA *data, threadData_t *threadData);


/*
equation index: 10
type: SIMPLE_ASSIGN
coupling.phi = $START.coupling.phi
*/
void TestBench_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[0]/* coupling.phi STATE(1,out_speed) */)  = (data->modelData->realVarsData[0]/* coupling.phi STATE(1,out_speed) */).attribute .start;
  TRACE_POP
}
extern void TestBench_eqFunction_39(DATA *data, threadData_t *threadData);

extern void TestBench_eqFunction_40(DATA *data, threadData_t *threadData);

extern void TestBench_eqFunction_41(DATA *data, threadData_t *threadData);

extern void TestBench_eqFunction_42(DATA *data, threadData_t *threadData);


/*
equation index: 15
type: SIMPLE_ASSIGN
coupling.w_internal = testbench_inertia.w + testbench_coupling.w_rel
*/
void TestBench_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->realVars[14]/* coupling.w_internal DUMMY_STATE */)  = (data->localData[0]->realVars[3]/* testbench_inertia.w STATE(1,testbench_inertia.a) */)  + (data->localData[0]->realVars[30]/* testbench_coupling.w_rel DUMMY_STATE */) ;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
out_speed = coupling.w_internal
*/
void TestBench_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->realVars[20]/* out_speed variable */)  = (data->localData[0]->realVars[14]/* coupling.w_internal DUMMY_STATE */) ;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
$DER.coupling.phi = coupling.w_internal
*/
void TestBench_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  (data->localData[0]->realVars[4]/* der(coupling.phi) STATE_DER */)  = (data->localData[0]->realVars[14]/* coupling.w_internal DUMMY_STATE */) ;
  TRACE_POP
}
extern void TestBench_eqFunction_52(DATA *data, threadData_t *threadData);

extern void TestBench_eqFunction_46(DATA *data, threadData_t *threadData);

extern void TestBench_eqFunction_51(DATA *data, threadData_t *threadData);


/*
equation index: 21
type: SIMPLE_ASSIGN
testbench_coupling.a_rel = $DER.testbench_coupling.tau_d / testbench_coupling.d
*/
void TestBench_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  (data->localData[0]->realVars[25]/* testbench_coupling.a_rel variable */)  = DIVISION_SIM((data->localData[0]->realVars[11]/* der(testbench_coupling.tau_d) DUMMY_DER */) ,(data->simulationInfo->realParameter[5]/* testbench_coupling.d PARAM */) ,"testbench_coupling.d",equationIndexes);
  TRACE_POP
}
extern void TestBench_eqFunction_50(DATA *data, threadData_t *threadData);

extern void TestBench_eqFunction_53(DATA *data, threadData_t *threadData);

extern void TestBench_eqFunction_38(DATA *data, threadData_t *threadData);


/*
equation index: 25
type: SIMPLE_ASSIGN
test_bench_ctrl.x = $START.test_bench_ctrl.x
*/
void TestBench_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  (data->localData[0]->realVars[1]/* test_bench_ctrl.x STATE(1) */)  = (data->modelData->realVarsData[1]/* test_bench_ctrl.x STATE(1) */).attribute .start;
  TRACE_POP
}
extern void TestBench_eqFunction_33(DATA *data, threadData_t *threadData);

extern void TestBench_eqFunction_34(DATA *data, threadData_t *threadData);

extern void TestBench_eqFunction_48(DATA *data, threadData_t *threadData);

extern void TestBench_eqFunction_49(DATA *data, threadData_t *threadData);

extern void TestBench_eqFunction_35(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void TestBench_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TestBench_eqFunction_1(data, threadData);
  TestBench_eqFunction_2(data, threadData);
  TestBench_eqFunction_3(data, threadData);
  TestBench_eqFunction_4(data, threadData);
  TestBench_eqFunction_37(data, threadData);
  TestBench_eqFunction_6(data, threadData);
  TestBench_eqFunction_32(data, threadData);
  TestBench_eqFunction_36(data, threadData);
  TestBench_eqFunction_31(data, threadData);
  TestBench_eqFunction_10(data, threadData);
  TestBench_eqFunction_39(data, threadData);
  TestBench_eqFunction_40(data, threadData);
  TestBench_eqFunction_41(data, threadData);
  TestBench_eqFunction_42(data, threadData);
  TestBench_eqFunction_15(data, threadData);
  TestBench_eqFunction_16(data, threadData);
  TestBench_eqFunction_17(data, threadData);
  TestBench_eqFunction_52(data, threadData);
  TestBench_eqFunction_46(data, threadData);
  TestBench_eqFunction_51(data, threadData);
  TestBench_eqFunction_21(data, threadData);
  TestBench_eqFunction_50(data, threadData);
  TestBench_eqFunction_53(data, threadData);
  TestBench_eqFunction_38(data, threadData);
  TestBench_eqFunction_25(data, threadData);
  TestBench_eqFunction_33(data, threadData);
  TestBench_eqFunction_34(data, threadData);
  TestBench_eqFunction_48(data, threadData);
  TestBench_eqFunction_49(data, threadData);
  TestBench_eqFunction_35(data, threadData);
  TRACE_POP
}

int TestBench_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  TestBench_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/* No TestBench_functionInitialEquations_lambda0 function */

int TestBench_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

