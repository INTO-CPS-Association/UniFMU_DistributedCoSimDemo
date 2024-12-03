#if defined(__cplusplus)
  extern "C" {
#endif
  int Dut_mayer(DATA* data, modelica_real** res, short*);
  int Dut_lagrange(DATA* data, modelica_real** res, short *, short *);
  int Dut_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int Dut_setInputData(DATA *data, const modelica_boolean file);
  int Dut_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif