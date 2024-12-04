#include "omc_simulation_settings.h"
#include "Dut_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "Dut_includes.h"


DLLExport
modelica_real omc_Dut_angleToTorqueAdaptor_move_position__der2(threadData_t *threadData, real_array _q_qd_qdd, modelica_real _dummy, modelica_real _dummy_der, modelica_real _dummy_der2)
{
  modelica_real _qdd;
  _tailrecursive: OMC_LABEL_UNUSED
  // _qdd has no default value.
  _qdd = real_array_get(_q_qd_qdd, 1, ((modelica_integer) 3));
  _return: OMC_LABEL_UNUSED
  return _qdd;
}
modelica_metatype boxptr_Dut_angleToTorqueAdaptor_move_position__der2(threadData_t *threadData, modelica_metatype _q_qd_qdd, modelica_metatype _dummy, modelica_metatype _dummy_der, modelica_metatype _dummy_der2)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _qdd;
  modelica_metatype out_qdd;
  tmp1 = mmc_unbox_real(_dummy);
  tmp2 = mmc_unbox_real(_dummy_der);
  tmp3 = mmc_unbox_real(_dummy_der2);
  _qdd = omc_Dut_angleToTorqueAdaptor_move_position__der2(threadData, *((base_array_t*)_q_qd_qdd), tmp1, tmp2, tmp3);
  out_qdd = mmc_mk_rcon(_qdd);
  return out_qdd;
}

#ifdef __cplusplus
}
#endif
