/* Algebraic */
#include "TestBench_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void TestBench_eqFunction_37(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_38(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_45(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_46(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_47(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_48(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_49(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_50(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_51(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_52(DATA* data, threadData_t *threadData);
extern void TestBench_eqFunction_53(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
  {
    TestBench_eqFunction_37(data, threadData);
    threadData->lastEquationSolved = 37;
  }
  {
    TestBench_eqFunction_38(data, threadData);
    threadData->lastEquationSolved = 38;
  }
  {
    TestBench_eqFunction_45(data, threadData);
    threadData->lastEquationSolved = 45;
  }
  {
    TestBench_eqFunction_46(data, threadData);
    threadData->lastEquationSolved = 46;
  }
  {
    TestBench_eqFunction_47(data, threadData);
    threadData->lastEquationSolved = 47;
  }
  {
    TestBench_eqFunction_48(data, threadData);
    threadData->lastEquationSolved = 48;
  }
  {
    TestBench_eqFunction_49(data, threadData);
    threadData->lastEquationSolved = 49;
  }
  {
    TestBench_eqFunction_50(data, threadData);
    threadData->lastEquationSolved = 50;
  }
  {
    TestBench_eqFunction_51(data, threadData);
    threadData->lastEquationSolved = 51;
  }
  {
    TestBench_eqFunction_52(data, threadData);
    threadData->lastEquationSolved = 52;
  }
  {
    TestBench_eqFunction_53(data, threadData);
    threadData->lastEquationSolved = 53;
  }
}
/* for continuous time variables */
int TestBench_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  TestBench_function_savePreSynchronous(data, threadData);
  
  functionAlg_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
