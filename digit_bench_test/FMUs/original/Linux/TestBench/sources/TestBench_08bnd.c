/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "TestBench_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 54
type: SIMPLE_ASSIGN
testbench_coupling.phi_rel = if testbench_coupling.phi_nominal >= 1e-15 then testbench_coupling.phi_nominal else 1.0
*/
OMC_DISABLE_OPT
static void TestBench_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  (data->localData[0]->realVars[27]/* testbench_coupling.phi_rel DUMMY_STATE */)  = (((data->simulationInfo->realParameter[6]/* testbench_coupling.phi_nominal PARAM */)  >= 1e-15)?(data->simulationInfo->realParameter[6]/* testbench_coupling.phi_nominal PARAM */) :1.0);
  TRACE_POP
}
OMC_DISABLE_OPT
int TestBench_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  TestBench_eqFunction_54(data, threadData);
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  data->modelData->realVarsData[27].attribute /* testbench_coupling.phi_rel */.nominal = (data->localData[0]->realVars[27]/* testbench_coupling.phi_rel DUMMY_STATE */) ;
    infoStreamPrint(LOG_INIT_V, 0, "%s(nominal=%g)", data->modelData->realVarsData[27].info /* testbench_coupling.phi_rel */.name, (modelica_real) data->modelData->realVarsData[27].attribute /* testbench_coupling.phi_rel */.nominal);
  (data->localData[0]->realVars[27]/* testbench_coupling.phi_rel DUMMY_STATE */)  = data->modelData->realVarsData[27].attribute /* testbench_coupling.phi_rel */.start;
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void TestBench_updateBoundParameters_0(DATA *data, threadData_t *threadData);
extern void TestBench_eqFunction_3(DATA *data, threadData_t *threadData);

extern void TestBench_eqFunction_2(DATA *data, threadData_t *threadData);

extern void TestBench_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 65
type: ALGORITHM

  assert(test_bench_ctrl.initType >= Modelica.Blocks.Types.Init.NoInit and test_bench_ctrl.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= test_bench_ctrl.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(test_bench_ctrl.initType, "d"));
*/
OMC_DISABLE_OPT
static void TestBench_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,157,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= test_bench_ctrl.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  static int tmp5 = 0;
  if(!tmp5)
  {
    tmp0 = GreaterEq((data->simulationInfo->integerParameter[0]/* test_bench_ctrl.initType PARAM */) ,1);
    tmp1 = LessEq((data->simulationInfo->integerParameter[0]/* test_bench_ctrl.initType PARAM */) ,4);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[0]/* test_bench_ctrl.initType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta4 = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ntest_bench_ctrl.initType >= Modelica.Blocks.Types.Init.NoInit and test_bench_ctrl.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta4));
        } else {
          FILE_INFO info = {"C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Continuous.mo",513,5,516,40,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntest_bench_ctrl.initType >= Modelica.Blocks.Types.Init.NoInit and test_bench_ctrl.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta4));
        }
      }
      tmp5 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 66
type: ALGORITHM

  assert(test_bench_ctrl.T >= 1e-60, "Variable violating min constraint: 1e-60 <= test_bench_ctrl.T, has value: " + String(test_bench_ctrl.T, "g"));
*/
OMC_DISABLE_OPT
static void TestBench_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,74,"Variable violating min constraint: 1e-60 <= test_bench_ctrl.T, has value: ");
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  static int tmp10 = 0;
  if(!tmp10)
  {
    tmp6 = GreaterEq((data->simulationInfo->realParameter[0]/* test_bench_ctrl.T PARAM */) ,1e-60);
    if(!tmp6)
    {
      tmp8 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[0]/* test_bench_ctrl.T PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta9 = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ntest_bench_ctrl.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta9));
        } else {
          FILE_INFO info = {"C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Continuous.mo",511,5,512,37,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntest_bench_ctrl.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta9));
        }
      }
      tmp10 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 67
type: ALGORITHM

  assert(testbench_coupling.stateSelect >= StateSelect.never and testbench_coupling.stateSelect <= StateSelect.always, "Variable violating min/max constraint: StateSelect.never <= testbench_coupling.stateSelect <= StateSelect.always, has value: " + String(testbench_coupling.stateSelect, "d"));
*/
OMC_DISABLE_OPT
static void TestBench_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,125,"Variable violating min/max constraint: StateSelect.never <= testbench_coupling.stateSelect <= StateSelect.always, has value: ");
  modelica_string tmp14;
  modelica_metatype tmpMeta15;
  static int tmp16 = 0;
  if(!tmp16)
  {
    tmp11 = GreaterEq((data->simulationInfo->integerParameter[1]/* testbench_coupling.stateSelect PARAM */) ,1);
    tmp12 = LessEq((data->simulationInfo->integerParameter[1]/* testbench_coupling.stateSelect PARAM */) ,5);
    if(!(tmp11 && tmp12))
    {
      tmp14 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[1]/* testbench_coupling.stateSelect PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta15 = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ntestbench_coupling.stateSelect >= StateSelect.never and testbench_coupling.stateSelect <= StateSelect.always", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta15));
        } else {
          FILE_INFO info = {"C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Interfaces/PartialCompliantWithRelativeStates.mo",24,3,26,57,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntestbench_coupling.stateSelect >= StateSelect.never and testbench_coupling.stateSelect <= StateSelect.always", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta15));
        }
      }
      tmp16 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 68
type: ALGORITHM

  assert(testbench_coupling.phi_nominal >= 0.0, "Variable violating min constraint: 0.0 <= testbench_coupling.phi_nominal, has value: " + String(testbench_coupling.phi_nominal, "g"));
*/
OMC_DISABLE_OPT
static void TestBench_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  modelica_boolean tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,85,"Variable violating min constraint: 0.0 <= testbench_coupling.phi_nominal, has value: ");
  modelica_string tmp19;
  modelica_metatype tmpMeta20;
  static int tmp21 = 0;
  if(!tmp21)
  {
    tmp17 = GreaterEq((data->simulationInfo->realParameter[6]/* testbench_coupling.phi_nominal PARAM */) ,0.0);
    if(!tmp17)
    {
      tmp19 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[6]/* testbench_coupling.phi_nominal PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta20 = stringAppend(MMC_REFSTRINGLIT(tmp18),tmp19);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ntestbench_coupling.phi_nominal >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta20));
        } else {
          FILE_INFO info = {"C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Interfaces/PartialCompliantWithRelativeStates.mo",20,3,23,40,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntestbench_coupling.phi_nominal >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta20));
        }
      }
      tmp21 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 69
type: ALGORITHM

  assert(testbench_coupling.d >= 0.0, "Variable violating min constraint: 0.0 <= testbench_coupling.d, has value: " + String(testbench_coupling.d, "g"));
*/
OMC_DISABLE_OPT
static void TestBench_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  modelica_boolean tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,75,"Variable violating min constraint: 0.0 <= testbench_coupling.d, has value: ");
  modelica_string tmp24;
  modelica_metatype tmpMeta25;
  static int tmp26 = 0;
  if(!tmp26)
  {
    tmp22 = GreaterEq((data->simulationInfo->realParameter[5]/* testbench_coupling.d PARAM */) ,0.0);
    if(!tmp22)
    {
      tmp24 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[5]/* testbench_coupling.d PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta25 = stringAppend(MMC_REFSTRINGLIT(tmp23),tmp24);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ntestbench_coupling.d >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta25));
        } else {
          FILE_INFO info = {"C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/SpringDamper.mo",5,3,6,23,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntestbench_coupling.d >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta25));
        }
      }
      tmp26 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 70
type: ALGORITHM

  assert(testbench_coupling.c >= 0.0, "Variable violating min constraint: 0.0 <= testbench_coupling.c, has value: " + String(testbench_coupling.c, "g"));
*/
OMC_DISABLE_OPT
static void TestBench_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  modelica_boolean tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,75,"Variable violating min constraint: 0.0 <= testbench_coupling.c, has value: ");
  modelica_string tmp29;
  modelica_metatype tmpMeta30;
  static int tmp31 = 0;
  if(!tmp31)
  {
    tmp27 = GreaterEq((data->simulationInfo->realParameter[4]/* testbench_coupling.c PARAM */) ,0.0);
    if(!tmp27)
    {
      tmp29 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[4]/* testbench_coupling.c PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta30 = stringAppend(MMC_REFSTRINGLIT(tmp28),tmp29);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ntestbench_coupling.c >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta30));
        } else {
          FILE_INFO info = {"C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/SpringDamper.mo",3,3,4,22,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntestbench_coupling.c >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta30));
        }
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 71
type: ALGORITHM

  assert(testbench_inertia.stateSelect >= StateSelect.never and testbench_inertia.stateSelect <= StateSelect.always, "Variable violating min/max constraint: StateSelect.never <= testbench_inertia.stateSelect <= StateSelect.always, has value: " + String(testbench_inertia.stateSelect, "d"));
*/
OMC_DISABLE_OPT
static void TestBench_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,124,"Variable violating min/max constraint: StateSelect.never <= testbench_inertia.stateSelect <= StateSelect.always, has value: ");
  modelica_string tmp35;
  modelica_metatype tmpMeta36;
  static int tmp37 = 0;
  if(!tmp37)
  {
    tmp32 = GreaterEq((data->simulationInfo->integerParameter[2]/* testbench_inertia.stateSelect PARAM */) ,1);
    tmp33 = LessEq((data->simulationInfo->integerParameter[2]/* testbench_inertia.stateSelect PARAM */) ,5);
    if(!(tmp32 && tmp33))
    {
      tmp35 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[2]/* testbench_inertia.stateSelect PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta36 = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ntestbench_inertia.stateSelect >= StateSelect.never and testbench_inertia.stateSelect <= StateSelect.always", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta36));
        } else {
          FILE_INFO info = {"C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",5,3,7,57,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntestbench_inertia.stateSelect >= StateSelect.never and testbench_inertia.stateSelect <= StateSelect.always", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta36));
        }
      }
      tmp37 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 72
type: ALGORITHM

  assert(testbench_inertia.J >= 0.0, "Variable violating min constraint: 0.0 <= testbench_inertia.J, has value: " + String(testbench_inertia.J, "g"));
*/
OMC_DISABLE_OPT
static void TestBench_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  modelica_boolean tmp38;
  static const MMC_DEFSTRINGLIT(tmp39,74,"Variable violating min constraint: 0.0 <= testbench_inertia.J, has value: ");
  modelica_string tmp40;
  modelica_metatype tmpMeta41;
  static int tmp42 = 0;
  if(!tmp42)
  {
    tmp38 = GreaterEq((data->simulationInfo->realParameter[8]/* testbench_inertia.J PARAM */) ,0.0);
    if(!tmp38)
    {
      tmp40 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[8]/* testbench_inertia.J PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta41 = stringAppend(MMC_REFSTRINGLIT(tmp39),tmp40);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ntestbench_inertia.J >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta41));
        } else {
          FILE_INFO info = {"C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",4,3,4,61,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntestbench_inertia.J >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta41));
        }
      }
      tmp42 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void TestBench_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  TestBench_eqFunction_3(data, threadData);
  TestBench_eqFunction_2(data, threadData);
  TestBench_eqFunction_1(data, threadData);
  TestBench_eqFunction_65(data, threadData);
  TestBench_eqFunction_66(data, threadData);
  TestBench_eqFunction_67(data, threadData);
  TestBench_eqFunction_68(data, threadData);
  TestBench_eqFunction_69(data, threadData);
  TestBench_eqFunction_70(data, threadData);
  TestBench_eqFunction_71(data, threadData);
  TestBench_eqFunction_72(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int TestBench_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  (data->simulationInfo->booleanParameter[0]/* coupling.use_a PARAM */)  = 1;
  data->modelData->booleanParameterData[0].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[1]/* coupling.use_w PARAM */)  = 1;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[2]/* test_bench_torque.useSupport PARAM */)  = 0;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[3]/* testbench_coupling.useHeatPort PARAM */)  = 0;
  data->modelData->booleanParameterData[3].time_unvarying = 1;
  (data->simulationInfo->integerParameter[0]/* test_bench_ctrl.initType PARAM */)  = 1;
  data->modelData->integerParameterData[0].time_unvarying = 1;
  (data->simulationInfo->integerParameter[1]/* testbench_coupling.stateSelect PARAM */)  = 2;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  (data->simulationInfo->integerParameter[2]/* testbench_inertia.stateSelect PARAM */)  = 5;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  TestBench_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

