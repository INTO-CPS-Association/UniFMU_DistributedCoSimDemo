/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;
/* Jacobian Variables */
#if defined(__cplusplus)
extern "C" {
#endif
  #define SetInput_INDEX_JAC_F 0
  int SetInput_functionJacF_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int SetInput_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define SetInput_INDEX_JAC_D 1
  int SetInput_functionJacD_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int SetInput_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define SetInput_INDEX_JAC_C 2
  int SetInput_functionJacC_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int SetInput_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define SetInput_INDEX_JAC_B 3
  int SetInput_functionJacB_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int SetInput_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif
#if defined(__cplusplus)
extern "C" {
#endif
  #define SetInput_INDEX_JAC_A 4
  int SetInput_functionJacA_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
  int SetInput_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
#if defined(__cplusplus)
}
#endif


