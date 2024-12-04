// define class name and unique id
#define MODEL_IDENTIFIER Dut
#define MODEL_GUID "{fd45609a-441c-45bc-9ed5-668df36d7b01}"

// include fmu header files, typedefs and macros
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "util/omc_error.h"
#include "Dut_functions.h"
#include "simulation/solver/initialization/initialization.h"
#include "simulation/solver/events.h"
#include "fmi-export/fmu2_model_interface.h"
#include "fmi-export/fmu_read_flags.h"

#ifdef __cplusplus
extern "C" {
#endif

void setStartValues(ModelInstance *comp);
void setDefaultStartValues(ModelInstance *comp);
void eventUpdate(ModelInstance* comp, fmi2EventInfo* eventInfo);
fmi2Real getReal(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setReal(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Real value);
fmi2Integer getInteger(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setInteger(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Integer value);
fmi2Boolean getBoolean(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setBoolean(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Boolean value);
fmi2String getString(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setString(ModelInstance* comp, const fmi2ValueReference vr, fmi2String value);
fmi2Status setExternalFunction(ModelInstance* c, const fmi2ValueReference vr, const void* value);
fmi2ValueReference mapInputReference2InputNumber(const fmi2ValueReference vr);
fmi2ValueReference mapOutputReference2OutputNumber(const fmi2ValueReference vr);
fmi2ValueReference mapOutputReference2RealOutputDerivatives(const fmi2ValueReference vr);
fmi2ValueReference mapInitialUnknownsdependentIndex(const fmi2ValueReference vr);
fmi2ValueReference mapInitialUnknownsIndependentIndex(const fmi2ValueReference vr);

// define model size
#define NUMBER_OF_STATES 0
#define NUMBER_OF_EVENT_INDICATORS 0
#define NUMBER_OF_REALS 54
#define NUMBER_OF_REAL_INPUTS 4
#define NUMBER_OF_INTEGERS 4
#define NUMBER_OF_STRINGS 0
#define NUMBER_OF_BOOLEANS 5
#define NUMBER_OF_EXTERNALFUNCTIONS 0

// define initial state vector as vector of value references
#define STATES {  }
#define STATESDERIVATIVES {  }


// implementation of the Model Exchange functions
extern void Dut_setupDataStruc(DATA *data, threadData_t *threadData);
#define fmu2_model_interface_setupDataStruc Dut_setupDataStruc
#include "fmi-export/fmu2_model_interface.c.inc"
#include "fmi-export/fmu_read_flags.c.inc"

// Set values for all variables that define a start value
OMC_DISABLE_OPT
void setDefaultStartValues(ModelInstance *comp) {
  comp->fmuData->modelData->realVarsData[0].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[1].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[2].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[3].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[4].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[5].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[6].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[7].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[8].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[9].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[10].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[11].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[12].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[0].attribute.start = 1.0;
  comp->fmuData->modelData->integerParameterData[0].attribute.start = 0;
  comp->fmuData->modelData->integerParameterData[1].attribute.start = 0;
  comp->fmuData->modelData->integerParameterData[2].attribute.start = 0;
  comp->fmuData->modelData->integerParameterData[3].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[0].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[1].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[2].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[3].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[4].attribute.start = 0;
}
// Set values for all variables that define a start value
OMC_DISABLE_OPT
void setStartValues(ModelInstance *comp) {
  comp->fmuData->modelData->realVarsData[0].attribute.start =  comp->fmuData->localData[0]->realVars[0];
  comp->fmuData->modelData->realVarsData[1].attribute.start =  comp->fmuData->localData[0]->realVars[1];
  comp->fmuData->modelData->realVarsData[2].attribute.start =  comp->fmuData->localData[0]->realVars[2];
  comp->fmuData->modelData->realVarsData[3].attribute.start =  comp->fmuData->localData[0]->realVars[3];
  comp->fmuData->modelData->realVarsData[4].attribute.start =  comp->fmuData->localData[0]->realVars[4];
  comp->fmuData->modelData->realVarsData[5].attribute.start =  comp->fmuData->localData[0]->realVars[5];
  comp->fmuData->modelData->realVarsData[6].attribute.start =  comp->fmuData->localData[0]->realVars[6];
  comp->fmuData->modelData->realVarsData[7].attribute.start =  comp->fmuData->localData[0]->realVars[7];
  comp->fmuData->modelData->realVarsData[8].attribute.start =  comp->fmuData->localData[0]->realVars[8];
  comp->fmuData->modelData->realVarsData[9].attribute.start =  comp->fmuData->localData[0]->realVars[9];
  comp->fmuData->modelData->realVarsData[10].attribute.start =  comp->fmuData->localData[0]->realVars[10];
  comp->fmuData->modelData->realVarsData[11].attribute.start =  comp->fmuData->localData[0]->realVars[11];
  comp->fmuData->modelData->realVarsData[12].attribute.start =  comp->fmuData->localData[0]->realVars[12];
  comp->fmuData->modelData->realParameterData[0].attribute.start = comp->fmuData->simulationInfo->realParameter[0];
  comp->fmuData->modelData->integerParameterData[0].attribute.start = comp->fmuData->simulationInfo->integerParameter[0];
  comp->fmuData->modelData->integerParameterData[1].attribute.start = comp->fmuData->simulationInfo->integerParameter[1];
  comp->fmuData->modelData->integerParameterData[2].attribute.start = comp->fmuData->simulationInfo->integerParameter[2];
  comp->fmuData->modelData->integerParameterData[3].attribute.start = comp->fmuData->simulationInfo->integerParameter[3];
  comp->fmuData->modelData->booleanParameterData[0].attribute.start = comp->fmuData->simulationInfo->booleanParameter[0];
  comp->fmuData->modelData->booleanParameterData[1].attribute.start = comp->fmuData->simulationInfo->booleanParameter[1];
  comp->fmuData->modelData->booleanParameterData[2].attribute.start = comp->fmuData->simulationInfo->booleanParameter[2];
  comp->fmuData->modelData->booleanParameterData[3].attribute.start = comp->fmuData->simulationInfo->booleanParameter[3];
  comp->fmuData->modelData->booleanParameterData[4].attribute.start = comp->fmuData->simulationInfo->booleanParameter[4];
}

// Used to set the next time event, if any.
void eventUpdate(ModelInstance* comp, fmi2EventInfo* eventInfo) {
}

static const int realAliasIndexes[40] = {
  9, 6, 8, 12, 5, 6, -13, 6, -13, 6, 6, 8, 5, 6, 8, 5, 6, 8, 5, 6,
  12, 6, 12, 6, -13, 12, 8, 9, 9, 6, 7, 6, 7, 8, 8, 9, 6, 12, 6, -8
};

fmi2Real getReal(ModelInstance* comp, const fmi2ValueReference vr) {
  if (vr < 13) {
    return comp->fmuData->localData[0]->realVars[vr];
  }
  if (vr < 14) {
    return comp->fmuData->simulationInfo->realParameter[vr-13];
  }
  if (vr < 54) {
    int ix = realAliasIndexes[vr-14];
    return ix>=0 ? getReal(comp, ix) : -getReal(comp, -(ix+1));
  }
  return NAN;
}

fmi2Status setReal(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Real value) {
  // set start value attribute for all variable that has start value, till initialization mode
  if (vr < 13 && (comp->state == model_state_instantiated || comp->state == model_state_initialization_mode)) {
    comp->fmuData->modelData->realVarsData[vr].attribute.start = value;
  }
  if (vr < 13) {
    comp->fmuData->localData[0]->realVars[vr] = value;
    return fmi2OK;
  }
  if (vr < 14) {
    comp->fmuData->simulationInfo->realParameter[vr-13] = value;
    return fmi2OK;
  }
  if (vr < 54) {
    int ix = realAliasIndexes[vr-14];
    return ix >= 0 ? setReal(comp, ix, value) : setReal(comp, -(ix+1), -value);
  }
  return fmi2Error;
}

fmi2Integer getInteger(ModelInstance* comp, const fmi2ValueReference vr) {
  if (vr < 0) {
    return comp->fmuData->localData[0]->integerVars[vr];
  }
  if (vr < 4) {
    return comp->fmuData->simulationInfo->integerParameter[vr-0];
  }
  return 0;
}

fmi2Status setInteger(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Integer value) {
  // set start value attribute for all variable that has start value, till initialization mode
  if (vr < 0 && (comp->state == model_state_instantiated || comp->state == model_state_initialization_mode)) {
    comp->fmuData->modelData->integerVarsData[vr].attribute.start = value;
  }
  if (vr < 0) {
    comp->fmuData->localData[0]->integerVars[vr] = value;
    return fmi2OK;
  }
  if (vr < 4) {
    comp->fmuData->simulationInfo->integerParameter[vr-0] = value;
    return fmi2OK;
  }
  return fmi2Error;
}
fmi2Boolean getBoolean(ModelInstance* comp, const fmi2ValueReference vr) {
  switch (vr) {
    case 0 : return comp->fmuData->simulationInfo->booleanParameter[0]; break;
    case 1 : return comp->fmuData->simulationInfo->booleanParameter[1]; break;
    case 2 : return comp->fmuData->simulationInfo->booleanParameter[2]; break;
    case 3 : return comp->fmuData->simulationInfo->booleanParameter[3]; break;
    case 4 : return comp->fmuData->simulationInfo->booleanParameter[4]; break;
    default:
      return fmi2False;
  }
}

fmi2Status setBoolean(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Boolean value) {
  switch (vr) {
    case 0 : comp->fmuData->simulationInfo->booleanParameter[0] = value; break;
    case 1 : comp->fmuData->simulationInfo->booleanParameter[1] = value; break;
    case 2 : comp->fmuData->simulationInfo->booleanParameter[2] = value; break;
    case 3 : comp->fmuData->simulationInfo->booleanParameter[3] = value; break;
    case 4 : comp->fmuData->simulationInfo->booleanParameter[4] = value; break;
    default:
      return fmi2Error;
  }
  return fmi2OK;
}

fmi2String getString(ModelInstance* comp, const fmi2ValueReference vr) {
  switch (vr) {
    default:
      return "";
  }
}

fmi2Status setString(ModelInstance* comp, const fmi2ValueReference vr, fmi2String value) {
  switch (vr) {
    default:
      return fmi2Error;
  }
  return fmi2OK;
}

fmi2Status setExternalFunction(ModelInstance* c, const fmi2ValueReference vr, const void* value){
  switch (vr) {
    default:
      return fmi2Error;
  }
  return fmi2OK;
}

/* function maps input references to a input index used in partialDerivatives */
fmi2ValueReference mapInputReference2InputNumber(const fmi2ValueReference vr) {
    switch (vr) {
      case 5: return 0; break;
      case 6: return 1; break;
      case 7: return 2; break;
      case 8: return 3; break;
      default:
        return -1;
    }
}
/* function maps output references to a input index used in partialDerivatives */
fmi2ValueReference mapOutputReference2OutputNumber(const fmi2ValueReference vr) {
    switch (vr) {
      case 9: return 0; break;
      case 10: return 1; break;
      case 11: return 2; break;
      case 12: return 3; break;
      default:
        return -1;
    }
}
/* function maps output references to an internal output Real derivatives */
fmi2ValueReference mapOutputReference2RealOutputDerivatives(const fmi2ValueReference vr) {
    switch (vr) {
      case 9: return -1; break;
      case 10: return -1; break;
      case 11: return -1; break;
      case 12: return -1; break;
      default:
        return -1;
    }
}
/* function maps initialUnknowns UnknownVars ValueReferences to an internal partial derivatives index */
fmi2ValueReference mapInitialUnknownsdependentIndex(const fmi2ValueReference vr) {
    switch (vr) {
      case 9: return 0; break;
      case 10: return 1; break;
      case 11: return 2; break;
      case 12: return 3; break;
      default:
        return -1;
    }
}
/* function maps initialUnknowns knownVars ValueReferences to an internal partial derivatives index */
fmi2ValueReference mapInitialUnknownsIndependentIndex(const fmi2ValueReference vr) {
    switch (vr) {
      case 5: return 0; break;
      case 6: return 1; break;
      case 7: return 2; break;
      case 8: return 3; break;
      case 13: return 4; break;
      default:
        return -1;
    }
}

#ifdef __cplusplus
}
#endif

