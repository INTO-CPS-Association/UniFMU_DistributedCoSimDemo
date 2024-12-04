/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "SetInput_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

OMC_DISABLE_OPT
int SetInput_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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

void SetInput_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 3
type: SIMPLE_ASSIGN
test_bench_set_speed.k = k
*/
OMC_DISABLE_OPT
static void SetInput_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  (data->simulationInfo->realParameter[2]/* test_bench_set_speed.k PARAM */)  = (data->simulationInfo->realParameter[1]/* k PARAM */) ;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
$outputAlias_y = test_bench_set_speed.k
*/
OMC_DISABLE_OPT
static void SetInput_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  (data->simulationInfo->realParameter[0]/* $outputAlias_y PARAM */)  = (data->simulationInfo->realParameter[2]/* test_bench_set_speed.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
test_bench_set_speed.y = test_bench_set_speed.k
*/
OMC_DISABLE_OPT
static void SetInput_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  (data->simulationInfo->realParameter[3]/* test_bench_set_speed.y PARAM */)  = (data->simulationInfo->realParameter[2]/* test_bench_set_speed.k PARAM */) ;
  TRACE_POP
}
OMC_DISABLE_OPT
void SetInput_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  SetInput_eqFunction_3(data, threadData);
  SetInput_eqFunction_4(data, threadData);
  SetInput_eqFunction_5(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int SetInput_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  SetInput_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

