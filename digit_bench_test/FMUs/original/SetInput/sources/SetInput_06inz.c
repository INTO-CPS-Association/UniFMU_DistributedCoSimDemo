/* Initialization */
#include "SetInput_model.h"
#include "SetInput_11mix.h"
#include "SetInput_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void SetInput_functionInitialEquations_0(DATA *data, threadData_t *threadData);
extern void SetInput_eqFunction_2(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void SetInput_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  SetInput_eqFunction_2(data, threadData);
  TRACE_POP
}

int SetInput_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  SetInput_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/* No SetInput_functionInitialEquations_lambda0 function */

int SetInput_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

