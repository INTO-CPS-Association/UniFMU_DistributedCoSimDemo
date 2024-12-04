#if defined(__cplusplus)
  extern "C" {
#endif
  int SetInput_mayer(DATA* data, modelica_real** res, short*);
  int SetInput_lagrange(DATA* data, modelica_real** res, short *, short *);
  int SetInput_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int SetInput_setInputData(DATA *data, const modelica_boolean file);
  int SetInput_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif