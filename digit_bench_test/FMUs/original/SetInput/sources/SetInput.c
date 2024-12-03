/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "SetInput_model.h"
#include "simulation/solver/events.h"



/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int SetInput_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int SetInput_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int SetInput_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int SetInput_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int SetInput_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int SetInput_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int SetInput_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = (data->localData[0]->realVars[0]/* y variable */) ;
  
  TRACE_POP
  return 0;
}

int SetInput_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 2
type: SIMPLE_ASSIGN
y = test_bench_set_speed.k
*/
void SetInput_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[0]/* y variable */)  = (data->simulationInfo->realParameter[2]/* test_bench_set_speed.k PARAM */) ;
  TRACE_POP
}

OMC_DISABLE_OPT
int SetInput_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  SetInput_functionLocalKnownVars(data, threadData);
  SetInput_eqFunction_2(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int SetInput_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


int SetInput_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  SetInput_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "SetInput_12jac.h"
#include "SetInput_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks SetInput_callback = {
   NULL,    /* performSimulation */
   NULL,    /* performQSSSimulation */
   NULL,    /* updateContinuousSystem */
   SetInput_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   NULL,    /* initialNonLinearSystem */
   NULL,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   SetInput_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   SetInput_initializeDAEmodeData,
   SetInput_functionODE,
   SetInput_functionAlgebraics,
   SetInput_functionDAE,
   SetInput_functionLocalKnownVars,
   SetInput_input_function,
   SetInput_input_function_init,
   SetInput_input_function_updateStartValues,
   SetInput_data_function,
   SetInput_output_function,
   SetInput_setc_function,
   SetInput_function_storeDelayed,
   SetInput_function_storeSpatialDistribution,
   SetInput_function_initSpatialDistribution,
   SetInput_updateBoundVariableAttributes,
   SetInput_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   NULL,
   SetInput_functionRemovedInitialEquations,
   SetInput_updateBoundParameters,
   SetInput_checkForAsserts,
   SetInput_function_ZeroCrossingsEquations,
   SetInput_function_ZeroCrossings,
   SetInput_function_updateRelations,
   SetInput_zeroCrossingDescription,
   SetInput_relationDescription,
   SetInput_function_initSample,
   SetInput_INDEX_JAC_A,
   SetInput_INDEX_JAC_B,
   SetInput_INDEX_JAC_C,
   SetInput_INDEX_JAC_D,
   SetInput_INDEX_JAC_F,
   SetInput_initialAnalyticJacobianA,
   SetInput_initialAnalyticJacobianB,
   SetInput_initialAnalyticJacobianC,
   SetInput_initialAnalyticJacobianD,
   SetInput_initialAnalyticJacobianF,
   SetInput_functionJacA_column,
   SetInput_functionJacB_column,
   SetInput_functionJacC_column,
   SetInput_functionJacD_column,
   SetInput_functionJacF_column,
   SetInput_linear_model_frame,
   SetInput_linear_model_datarecovery_frame,
   SetInput_mayer,
   SetInput_lagrange,
   SetInput_pickUpBoundsForInputsInOptimization,
   SetInput_setInputData,
   SetInput_getTimeGrid,
   SetInput_symbolicInlineSystem,
   SetInput_function_initSynchronous,
   SetInput_function_updateSynchronous,
   SetInput_function_equationsSynchronous,
   SetInput_inputNames,
   SetInput_dataReconciliationInputNames,
   SetInput_read_input_fmu,
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

#define _OMC_LIT_RESOURCE_7_name_data "coupled_model_adaptors_full"
#define _OMC_LIT_RESOURCE_7_dir_data "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_name,27,_OMC_LIT_RESOURCE_7_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir,81,_OMC_LIT_RESOURCE_7_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,16,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_5_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_6_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_7_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_7_dir)}};
void SetInput_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &SetInput_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "SetInput";
  data->modelData->modelFilePrefix = "SetInput";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model";
  data->modelData->modelGUID = "{7d3873d3-7c72-4cf0-b68d-38740ff00f9f}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 1;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 4;
  data->modelData->nParametersInteger = 0;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 1;
  
  data->modelData->nAliasReal = 0;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/SetInput_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 0;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 6;
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

