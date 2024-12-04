/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "Dut_model.h"
#include "simulation/solver/events.h"



/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int Dut_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  (data->localData[0]->realVars[5]/* in_acceleration variable */)  = data->simulationInfo->inputVars[0];
  (data->localData[0]->realVars[6]/* in_angle variable */)  = data->simulationInfo->inputVars[1];
  (data->localData[0]->realVars[7]/* in_set_torque variable */)  = data->simulationInfo->inputVars[2];
  (data->localData[0]->realVars[8]/* in_speed variable */)  = data->simulationInfo->inputVars[3];
  
  TRACE_POP
  return 0;
}

int Dut_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[5].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[6].attribute.start;
  data->simulationInfo->inputVars[2] = data->modelData->realVarsData[7].attribute.start;
  data->simulationInfo->inputVars[3] = data->modelData->realVarsData[8].attribute.start;
  
  TRACE_POP
  return 0;
}

int Dut_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[5].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[6].attribute.start = data->simulationInfo->inputVars[1];
  data->modelData->realVarsData[7].attribute.start = data->simulationInfo->inputVars[2];
  data->modelData->realVarsData[8].attribute.start = data->simulationInfo->inputVars[3];
  
  TRACE_POP
  return 0;
}

int Dut_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[5].info.name;
  names[1] = (char *) data->modelData->realVarsData[6].info.name;
  names[2] = (char *) data->modelData->realVarsData[7].info.name;
  names[3] = (char *) data->modelData->realVarsData[8].info.name;
  
  TRACE_POP
  return 0;
}

int Dut_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int Dut_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Dut_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = (data->localData[0]->realVars[9]/* out_acceleration variable */) ;
  data->simulationInfo->outputVars[1] = (data->localData[0]->realVars[10]/* out_angle variable */) ;
  data->simulationInfo->outputVars[2] = (data->localData[0]->realVars[11]/* out_speed variable */) ;
  data->simulationInfo->outputVars[3] = (data->localData[0]->realVars[12]/* out_torque variable */) ;
  
  TRACE_POP
  return 0;
}

int Dut_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 10
type: SIMPLE_ASSIGN
$DER.dut_turbine.phi = in_speed
*/
void Dut_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[0]/* der(dut_turbine.phi) DUMMY_DER */)  = (data->localData[0]->realVars[8]/* in_speed variable */) ;
  TRACE_POP
}
/*
equation index: 11
type: SIMPLE_ASSIGN
dut_turbine.w = in_speed
*/
void Dut_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  (data->localData[0]->realVars[4]/* dut_turbine.w DUMMY_STATE */)  = (data->localData[0]->realVars[8]/* in_speed variable */) ;
  TRACE_POP
}
/*
equation index: 12
type: SIMPLE_ASSIGN
dut_turbine.phi = in_angle
*/
void Dut_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  (data->localData[0]->realVars[3]/* dut_turbine.phi DUMMY_STATE */)  = (data->localData[0]->realVars[6]/* in_angle variable */) ;
  TRACE_POP
}
/*
equation index: 13
type: SIMPLE_ASSIGN
out_angle = in_angle
*/
void Dut_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->realVars[10]/* out_angle variable */)  = (data->localData[0]->realVars[6]/* in_angle variable */) ;
  TRACE_POP
}
/*
equation index: 14
type: SIMPLE_ASSIGN
out_speed = in_speed
*/
void Dut_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  (data->localData[0]->realVars[11]/* out_speed variable */)  = (data->localData[0]->realVars[8]/* in_speed variable */) ;
  TRACE_POP
}
/*
equation index: 15
type: SIMPLE_ASSIGN
out_acceleration = Dut.angleToTorqueAdaptor.move.position_der2({in_angle, in_speed, in_acceleration}, time, 1.0, 0.0)
*/
void Dut_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  real_array tmp0;
  array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)(data->localData[0]->realVars[6]/* in_angle variable */) , (modelica_real)(data->localData[0]->realVars[8]/* in_speed variable */) , (modelica_real)(data->localData[0]->realVars[5]/* in_acceleration variable */) );
  (data->localData[0]->realVars[9]/* out_acceleration variable */)  = omc_Dut_angleToTorqueAdaptor_move_position__der2(threadData, tmp0, data->localData[0]->timeValue, 1.0, 0.0);
  TRACE_POP
}
/*
equation index: 16
type: SIMPLE_ASSIGN
out_torque = in_set_torque + dut_turbine.J * out_acceleration
*/
void Dut_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->realVars[12]/* out_torque variable */)  = (data->localData[0]->realVars[7]/* in_set_torque variable */)  + ((data->simulationInfo->realParameter[0]/* dut_turbine.J PARAM */) ) * ((data->localData[0]->realVars[9]/* out_acceleration variable */) );
  TRACE_POP
}
/*
equation index: 17
type: SIMPLE_ASSIGN
$DER.dut_turbine.w = out_acceleration
*/
void Dut_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  (data->localData[0]->realVars[1]/* der(dut_turbine.w) DUMMY_DER */)  = (data->localData[0]->realVars[9]/* out_acceleration variable */) ;
  TRACE_POP
}

OMC_DISABLE_OPT
int Dut_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  Dut_functionLocalKnownVars(data, threadData);
  Dut_eqFunction_10(data, threadData);

  Dut_eqFunction_11(data, threadData);

  Dut_eqFunction_12(data, threadData);

  Dut_eqFunction_13(data, threadData);

  Dut_eqFunction_14(data, threadData);

  Dut_eqFunction_15(data, threadData);

  Dut_eqFunction_16(data, threadData);

  Dut_eqFunction_17(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int Dut_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int Dut_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  Dut_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "Dut_12jac.h"
#include "Dut_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks Dut_callback = {
   NULL,    /* performSimulation */
   NULL,    /* performQSSSimulation */
   NULL,    /* updateContinuousSystem */
   Dut_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   NULL,    /* initialNonLinearSystem */
   NULL,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   Dut_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   Dut_initializeDAEmodeData,
   Dut_functionODE,
   Dut_functionAlgebraics,
   Dut_functionDAE,
   Dut_functionLocalKnownVars,
   Dut_input_function,
   Dut_input_function_init,
   Dut_input_function_updateStartValues,
   Dut_data_function,
   Dut_output_function,
   Dut_setc_function,
   Dut_function_storeDelayed,
   Dut_function_storeSpatialDistribution,
   Dut_function_initSpatialDistribution,
   Dut_updateBoundVariableAttributes,
   Dut_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   NULL,
   Dut_functionRemovedInitialEquations,
   Dut_updateBoundParameters,
   Dut_checkForAsserts,
   Dut_function_ZeroCrossingsEquations,
   Dut_function_ZeroCrossings,
   Dut_function_updateRelations,
   Dut_zeroCrossingDescription,
   Dut_relationDescription,
   Dut_function_initSample,
   Dut_INDEX_JAC_A,
   Dut_INDEX_JAC_B,
   Dut_INDEX_JAC_C,
   Dut_INDEX_JAC_D,
   Dut_INDEX_JAC_F,
   Dut_initialAnalyticJacobianA,
   Dut_initialAnalyticJacobianB,
   Dut_initialAnalyticJacobianC,
   Dut_initialAnalyticJacobianD,
   Dut_initialAnalyticJacobianF,
   Dut_functionJacA_column,
   Dut_functionJacB_column,
   Dut_functionJacC_column,
   Dut_functionJacD_column,
   Dut_functionJacF_column,
   Dut_linear_model_frame,
   Dut_linear_model_datarecovery_frame,
   Dut_mayer,
   Dut_lagrange,
   Dut_pickUpBoundsForInputsInOptimization,
   Dut_setInputData,
   Dut_getTimeGrid,
   Dut_symbolicInlineSystem,
   Dut_function_initSynchronous,
   Dut_function_updateSynchronous,
   Dut_function_equationsSynchronous,
   Dut_inputNames,
   Dut_dataReconciliationInputNames,
   Dut_read_input_fmu,
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

#define _OMC_LIT_RESOURCE_4_name_data "TestBench"
#define _OMC_LIT_RESOURCE_4_dir_data "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,9,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,97,_OMC_LIT_RESOURCE_4_dir_data);

#define _OMC_LIT_RESOURCE_5_name_data "coupled_decoupled"
#define _OMC_LIT_RESOURCE_5_dir_data "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_name,17,_OMC_LIT_RESOURCE_5_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir,97,_OMC_LIT_RESOURCE_5_dir_data);

#define _OMC_LIT_RESOURCE_6_name_data "tortion"
#define _OMC_LIT_RESOURCE_6_dir_data "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_name,7,_OMC_LIT_RESOURCE_6_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir,97,_OMC_LIT_RESOURCE_6_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,14,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir)}};
void Dut_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &Dut_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "Dut";
  data->modelData->modelFilePrefix = "Dut";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model";
  data->modelData->modelGUID = "{fd45609a-441c-45bc-9ed5-668df36d7b01}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 13;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 1;
  data->modelData->nParametersInteger = 4;
  data->modelData->nParametersBoolean = 5;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 4;
  data->modelData->nOutputVars = 4;
  
  data->modelData->nAliasReal = 40;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/Dut_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 1;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 30;
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

