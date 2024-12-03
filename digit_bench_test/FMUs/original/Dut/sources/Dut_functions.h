#ifndef Dut__H
#define Dut__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif


DLLExport
modelica_real omc_Dut_angleToTorqueAdaptor_move_position__der2(threadData_t *threadData, real_array _q_qd_qdd, modelica_real _dummy, modelica_real _dummy_der, modelica_real _dummy_der2);
DLLExport
modelica_metatype boxptr_Dut_angleToTorqueAdaptor_move_position__der2(threadData_t *threadData, modelica_metatype _q_qd_qdd, modelica_metatype _dummy, modelica_metatype _dummy_der, modelica_metatype _dummy_der2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Dut_angleToTorqueAdaptor_move_position__der2,2,0) {(void*) boxptr_Dut_angleToTorqueAdaptor_move_position__der2,0}};
#define boxvar_Dut_angleToTorqueAdaptor_move_position__der2 MMC_REFSTRUCTLIT(boxvar_lit_Dut_angleToTorqueAdaptor_move_position__der2)
#include "Dut_model.h"


#ifdef __cplusplus
}
#endif
#endif

