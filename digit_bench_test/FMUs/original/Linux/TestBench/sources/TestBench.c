/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "TestBench_model.h"
#include "simulation/solver/events.h"



/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int TestBench_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  (data->localData[0]->realVars[15]/* in_set_speed variable */)  = data->simulationInfo->inputVars[0];
  (data->localData[0]->realVars[16]/* in_torque variable */)  = data->simulationInfo->inputVars[1];
  
  TRACE_POP
  return 0;
}

int TestBench_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[15].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[16].attribute.start;
  
  TRACE_POP
  return 0;
}

int TestBench_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[15].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[16].attribute.start = data->simulationInfo->inputVars[1];
  
  TRACE_POP
  return 0;
}

int TestBench_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[15].info.name;
  names[1] = (char *) data->modelData->realVarsData[16].info.name;
  
  TRACE_POP
  return 0;
}

int TestBench_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int TestBench_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int TestBench_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = (data->localData[0]->realVars[17]/* out_acceleration variable */) ;
  data->simulationInfo->outputVars[1] = (data->localData[0]->realVars[18]/* out_angle variable */) ;
  data->simulationInfo->outputVars[2] = (data->localData[0]->realVars[19]/* out_angle_inertia variable */) ;
  data->simulationInfo->outputVars[3] = (data->localData[0]->realVars[20]/* out_speed variable */) ;
  
  TRACE_POP
  return 0;
}

int TestBench_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 31
type: SIMPLE_ASSIGN
$DER.testbench_inertia.phi = testbench_inertia.w
*/
void TestBench_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  (data->localData[0]->realVars[6]/* der(testbench_inertia.phi) STATE_DER */)  = (data->localData[0]->realVars[3]/* testbench_inertia.w STATE(1,testbench_inertia.a) */) ;
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
test_bench_feedback.y = in_set_speed - testbench_inertia.w
*/
void TestBench_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  (data->localData[0]->realVars[21]/* test_bench_feedback.y variable */)  = (data->localData[0]->realVars[15]/* in_set_speed variable */)  - (data->localData[0]->realVars[3]/* testbench_inertia.w STATE(1,testbench_inertia.a) */) ;
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
test_bench_torque.tau = test_bench_ctrl.k * (test_bench_ctrl.x + test_bench_feedback.y)
*/
void TestBench_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  (data->localData[0]->realVars[24]/* test_bench_torque.tau variable */)  = ((data->simulationInfo->realParameter[1]/* test_bench_ctrl.k PARAM */) ) * ((data->localData[0]->realVars[1]/* test_bench_ctrl.x STATE(1) */)  + (data->localData[0]->realVars[21]/* test_bench_feedback.y variable */) );
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
testbench_inertia.a = (test_bench_torque.tau - in_torque) / testbench_inertia.J
*/
void TestBench_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->realVars[31]/* testbench_inertia.a variable */)  = DIVISION_SIM((data->localData[0]->realVars[24]/* test_bench_torque.tau variable */)  - (data->localData[0]->realVars[16]/* in_torque variable */) ,(data->simulationInfo->realParameter[8]/* testbench_inertia.J PARAM */) ,"testbench_inertia.J",equationIndexes);
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
$DER.testbench_inertia.w = testbench_inertia.a
*/
void TestBench_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  (data->localData[0]->realVars[7]/* der(testbench_inertia.w) STATE_DER */)  = (data->localData[0]->realVars[31]/* testbench_inertia.a variable */) ;
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
$DER.test_bench_ctrl.x = test_bench_feedback.y / test_bench_ctrl.T
*/
void TestBench_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  (data->localData[0]->realVars[5]/* der(test_bench_ctrl.x) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[21]/* test_bench_feedback.y variable */) ,(data->simulationInfo->realParameter[0]/* test_bench_ctrl.T PARAM */) ,"test_bench_ctrl.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
out_angle_inertia = testbench_inertia.phi
*/
void TestBench_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  (data->localData[0]->realVars[19]/* out_angle_inertia variable */)  = (data->localData[0]->realVars[2]/* testbench_inertia.phi STATE(1,testbench_inertia.w) */) ;
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
out_angle = coupling.phi
*/
void TestBench_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  (data->localData[0]->realVars[18]/* out_angle variable */)  = (data->localData[0]->realVars[0]/* coupling.phi STATE(1,out_speed) */) ;
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
testbench_coupling.phi_rel = coupling.phi - testbench_inertia.phi
*/
void TestBench_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->realVars[27]/* testbench_coupling.phi_rel DUMMY_STATE */)  = (data->localData[0]->realVars[0]/* coupling.phi STATE(1,out_speed) */)  - (data->localData[0]->realVars[2]/* testbench_inertia.phi STATE(1,testbench_inertia.w) */) ;
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
testbench_coupling.tau_c = testbench_coupling.c * (testbench_coupling.phi_rel - testbench_coupling.phi_rel0)
*/
void TestBench_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->realVars[28]/* testbench_coupling.tau_c DUMMY_STATE */)  = ((data->simulationInfo->realParameter[4]/* testbench_coupling.c PARAM */) ) * ((data->localData[0]->realVars[27]/* testbench_coupling.phi_rel DUMMY_STATE */)  - (data->simulationInfo->realParameter[7]/* testbench_coupling.phi_rel0 PARAM */) );
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
testbench_coupling.tau_d = (-testbench_coupling.tau_c) - in_torque
*/
void TestBench_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  (data->localData[0]->realVars[29]/* testbench_coupling.tau_d DUMMY_STATE */)  = (-(data->localData[0]->realVars[28]/* testbench_coupling.tau_c DUMMY_STATE */) ) - (data->localData[0]->realVars[16]/* in_torque variable */) ;
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
testbench_coupling.w_rel = testbench_coupling.tau_d / testbench_coupling.d
*/
void TestBench_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  (data->localData[0]->realVars[30]/* testbench_coupling.w_rel DUMMY_STATE */)  = DIVISION_SIM((data->localData[0]->realVars[29]/* testbench_coupling.tau_d DUMMY_STATE */) ,(data->simulationInfo->realParameter[5]/* testbench_coupling.d PARAM */) ,"testbench_coupling.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
out_speed = testbench_inertia.w + testbench_coupling.w_rel
*/
void TestBench_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  (data->localData[0]->realVars[20]/* out_speed variable */)  = (data->localData[0]->realVars[3]/* testbench_inertia.w STATE(1,testbench_inertia.a) */)  + (data->localData[0]->realVars[30]/* testbench_coupling.w_rel DUMMY_STATE */) ;
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
$DER.coupling.phi = out_speed
*/
void TestBench_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  (data->localData[0]->realVars[4]/* der(coupling.phi) STATE_DER */)  = (data->localData[0]->realVars[20]/* out_speed variable */) ;
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
coupling.w_internal = out_speed
*/
void TestBench_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  (data->localData[0]->realVars[14]/* coupling.w_internal DUMMY_STATE */)  = (data->localData[0]->realVars[20]/* out_speed variable */) ;
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
$DER.testbench_coupling.tau_c = testbench_coupling.c * testbench_coupling.w_rel
*/
void TestBench_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  (data->localData[0]->realVars[10]/* der(testbench_coupling.tau_c) DUMMY_DER */)  = ((data->simulationInfo->realParameter[4]/* testbench_coupling.c PARAM */) ) * ((data->localData[0]->realVars[30]/* testbench_coupling.w_rel DUMMY_STATE */) );
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
testbench_coupling.a_rel = (-$DER.testbench_coupling.tau_c) / testbench_coupling.d
*/
void TestBench_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  (data->localData[0]->realVars[25]/* testbench_coupling.a_rel variable */)  = DIVISION_SIM((-(data->localData[0]->realVars[10]/* der(testbench_coupling.tau_c) DUMMY_DER */) ),(data->simulationInfo->realParameter[5]/* testbench_coupling.d PARAM */) ,"testbench_coupling.d",equationIndexes);
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
out_acceleration = testbench_inertia.a + testbench_coupling.a_rel
*/
void TestBench_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  (data->localData[0]->realVars[17]/* out_acceleration variable */)  = (data->localData[0]->realVars[31]/* testbench_inertia.a variable */)  + (data->localData[0]->realVars[25]/* testbench_coupling.a_rel variable */) ;
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
$DER.coupling.w_internal = out_acceleration
*/
void TestBench_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  (data->localData[0]->realVars[8]/* der(coupling.w_internal) DUMMY_DER */)  = (data->localData[0]->realVars[17]/* out_acceleration variable */) ;
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
$DER.testbench_coupling.w_rel = testbench_coupling.a_rel
*/
void TestBench_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  (data->localData[0]->realVars[12]/* der(testbench_coupling.w_rel) DUMMY_DER */)  = (data->localData[0]->realVars[25]/* testbench_coupling.a_rel variable */) ;
  TRACE_POP
}
/*
equation index: 51
type: SIMPLE_ASSIGN
$DER.testbench_coupling.tau_d = -$DER.testbench_coupling.tau_c
*/
void TestBench_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  (data->localData[0]->realVars[11]/* der(testbench_coupling.tau_d) DUMMY_DER */)  = (-(data->localData[0]->realVars[10]/* der(testbench_coupling.tau_c) DUMMY_DER */) );
  TRACE_POP
}
/*
equation index: 52
type: SIMPLE_ASSIGN
$DER.testbench_coupling.phi_rel = testbench_coupling.w_rel
*/
void TestBench_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  (data->localData[0]->realVars[9]/* der(testbench_coupling.phi_rel) DUMMY_DER */)  = (data->localData[0]->realVars[30]/* testbench_coupling.w_rel DUMMY_STATE */) ;
  TRACE_POP
}
/*
equation index: 53
type: SIMPLE_ASSIGN
testbench_coupling.lossPower = testbench_coupling.tau_d * testbench_coupling.w_rel
*/
void TestBench_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  (data->localData[0]->realVars[26]/* testbench_coupling.lossPower variable */)  = ((data->localData[0]->realVars[29]/* testbench_coupling.tau_d DUMMY_STATE */) ) * ((data->localData[0]->realVars[30]/* testbench_coupling.w_rel DUMMY_STATE */) );
  TRACE_POP
}

OMC_DISABLE_OPT
int TestBench_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  TestBench_functionLocalKnownVars(data, threadData);
  TestBench_eqFunction_31(data, threadData);

  TestBench_eqFunction_32(data, threadData);

  TestBench_eqFunction_33(data, threadData);

  TestBench_eqFunction_34(data, threadData);

  TestBench_eqFunction_35(data, threadData);

  TestBench_eqFunction_36(data, threadData);

  TestBench_eqFunction_37(data, threadData);

  TestBench_eqFunction_38(data, threadData);

  TestBench_eqFunction_39(data, threadData);

  TestBench_eqFunction_40(data, threadData);

  TestBench_eqFunction_41(data, threadData);

  TestBench_eqFunction_42(data, threadData);

  TestBench_eqFunction_43(data, threadData);

  TestBench_eqFunction_44(data, threadData);

  TestBench_eqFunction_45(data, threadData);

  TestBench_eqFunction_46(data, threadData);

  TestBench_eqFunction_47(data, threadData);

  TestBench_eqFunction_48(data, threadData);

  TestBench_eqFunction_49(data, threadData);

  TestBench_eqFunction_50(data, threadData);

  TestBench_eqFunction_51(data, threadData);

  TestBench_eqFunction_52(data, threadData);

  TestBench_eqFunction_53(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int TestBench_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void TestBench_eqFunction_31(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_32(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_33(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_34(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_35(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_36(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_39(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_40(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_41(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_42(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_43(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_44(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  {
    TestBench_eqFunction_31(data, threadData);
    threadData->lastEquationSolved = 31;
  }
  {
    TestBench_eqFunction_32(data, threadData);
    threadData->lastEquationSolved = 32;
  }
  {
    TestBench_eqFunction_33(data, threadData);
    threadData->lastEquationSolved = 33;
  }
  {
    TestBench_eqFunction_34(data, threadData);
    threadData->lastEquationSolved = 34;
  }
  {
    TestBench_eqFunction_35(data, threadData);
    threadData->lastEquationSolved = 35;
  }
  {
    TestBench_eqFunction_36(data, threadData);
    threadData->lastEquationSolved = 36;
  }
  {
    TestBench_eqFunction_39(data, threadData);
    threadData->lastEquationSolved = 39;
  }
  {
    TestBench_eqFunction_40(data, threadData);
    threadData->lastEquationSolved = 40;
  }
  {
    TestBench_eqFunction_41(data, threadData);
    threadData->lastEquationSolved = 41;
  }
  {
    TestBench_eqFunction_42(data, threadData);
    threadData->lastEquationSolved = 42;
  }
  {
    TestBench_eqFunction_43(data, threadData);
    threadData->lastEquationSolved = 43;
  }
  {
    TestBench_eqFunction_44(data, threadData);
    threadData->lastEquationSolved = 44;
  }
}

int TestBench_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  TestBench_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "TestBench_12jac.h"
#include "TestBench_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks TestBench_callback = {
   NULL,    /* performSimulation */
   NULL,    /* performQSSSimulation */
   NULL,    /* updateContinuousSystem */
   TestBench_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   NULL,    /* initialNonLinearSystem */
   NULL,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   TestBench_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   TestBench_initializeDAEmodeData,
   TestBench_functionODE,
   TestBench_functionAlgebraics,
   TestBench_functionDAE,
   TestBench_functionLocalKnownVars,
   TestBench_input_function,
   TestBench_input_function_init,
   TestBench_input_function_updateStartValues,
   TestBench_data_function,
   TestBench_output_function,
   TestBench_setc_function,
   TestBench_function_storeDelayed,
   TestBench_function_storeSpatialDistribution,
   TestBench_function_initSpatialDistribution,
   TestBench_updateBoundVariableAttributes,
   TestBench_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   NULL,
   TestBench_functionRemovedInitialEquations,
   TestBench_updateBoundParameters,
   TestBench_checkForAsserts,
   TestBench_function_ZeroCrossingsEquations,
   TestBench_function_ZeroCrossings,
   TestBench_function_updateRelations,
   TestBench_zeroCrossingDescription,
   TestBench_relationDescription,
   TestBench_function_initSample,
   TestBench_INDEX_JAC_A,
   TestBench_INDEX_JAC_B,
   TestBench_INDEX_JAC_C,
   TestBench_INDEX_JAC_D,
   TestBench_INDEX_JAC_F,
   TestBench_initialAnalyticJacobianA,
   TestBench_initialAnalyticJacobianB,
   TestBench_initialAnalyticJacobianC,
   TestBench_initialAnalyticJacobianD,
   TestBench_initialAnalyticJacobianF,
   TestBench_functionJacA_column,
   TestBench_functionJacB_column,
   TestBench_functionJacC_column,
   TestBench_functionJacD_column,
   TestBench_functionJacF_column,
   TestBench_linear_model_frame,
   TestBench_linear_model_datarecovery_frame,
   TestBench_mayer,
   TestBench_lagrange,
   TestBench_pickUpBoundsForInputsInOptimization,
   TestBench_setInputData,
   TestBench_getTimeGrid,
   TestBench_symbolicInlineSystem,
   TestBench_function_initSynchronous,
   TestBench_function_updateSynchronous,
   TestBench_function_equationsSynchronous,
   TestBench_inputNames,
   TestBench_dataReconciliationInputNames,
   TestBench_read_input_fmu,
   NULL,
   NULL,
   -1,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Complex 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,78,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Dut"
#define _OMC_LIT_RESOURCE_1_dir_data "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,3,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,97,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Modelica"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,8,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,79,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/ModelicaServices 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,87,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "SetInput"
#define _OMC_LIT_RESOURCE_4_dir_data "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,8,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,97,_OMC_LIT_RESOURCE_4_dir_data);

#define _OMC_LIT_RESOURCE_5_name_data "TestBench"
#define _OMC_LIT_RESOURCE_5_dir_data "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_name,9,_OMC_LIT_RESOURCE_5_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir,97,_OMC_LIT_RESOURCE_5_dir_data);

#define _OMC_LIT_RESOURCE_6_name_data "coupled_decoupled"
#define _OMC_LIT_RESOURCE_6_dir_data "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_name,17,_OMC_LIT_RESOURCE_6_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir,97,_OMC_LIT_RESOURCE_6_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,14,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir)}};
void TestBench_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &TestBench_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "TestBench";
  data->modelData->modelFilePrefix = "TestBench";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model";
  data->modelData->modelGUID = "{31db0ec3-addd-4a38-b54b-0ac8aabf3699}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 4;
  data->modelData->nVariablesReal = 32;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 9;
  data->modelData->nParametersInteger = 3;
  data->modelData->nParametersBoolean = 4;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 2;
  data->modelData->nOutputVars = 4;
  
  data->modelData->nAliasReal = 29;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/TestBench_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 0;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 73;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 0;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 5;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nBaseClocks = 0;
  
  data->modelData->nSpatialDistributions = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->linearizationDumpLanguage =
  OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

