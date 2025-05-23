#include "simulation_data.h"

OMC_DISABLE_OPT
void Dut_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationInfo)
{
  simulationInfo->startTime = 0.0;
  simulationInfo->stopTime = 1.0;
  simulationInfo->stepSize = 0.002;
  simulationInfo->tolerance = 1e-06;
  simulationInfo->solverMethod = "dassl";
  simulationInfo->outputFormat = "mat";
  simulationInfo->variableFilter = ".*";
  simulationInfo->OPENMODELICAHOME = "C:/Program Files/OpenModelica1.20.0-64bit";
  modelData->realVarsData[0].info.id = 1000;
  modelData->realVarsData[0].info.name = "der(dut_turbine.phi)";
  modelData->realVarsData[0].info.comment = "Absolute rotation angle of component";
  modelData->realVarsData[0].info.info.filename = "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo";
  modelData->realVarsData[0].info.info.lineStart = 8;
  modelData->realVarsData[0].info.info.colStart = 3;
  modelData->realVarsData[0].info.info.lineEnd = 10;
  modelData->realVarsData[0].info.info.colEnd = 73;
  modelData->realVarsData[0].info.info.readonly = 0;
  modelData->realVarsData[0].attribute.unit = "";
  modelData->realVarsData[0].attribute.displayUnit = "";
  modelData->realVarsData[0].attribute.min = -DBL_MAX;
  modelData->realVarsData[0].attribute.max = DBL_MAX;
  modelData->realVarsData[0].attribute.fixed = 0;
  modelData->realVarsData[0].attribute.useNominal = 0;
  modelData->realVarsData[0].attribute.nominal = 1.0;
  modelData->realVarsData[0].attribute.start = 0.0;
  modelData->realVarsData[1].info.id = 1001;
  modelData->realVarsData[1].info.name = "der(dut_turbine.w)";
  modelData->realVarsData[1].info.comment = "Absolute angular velocity of component (= der(phi))";
  modelData->realVarsData[1].info.info.filename = "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo";
  modelData->realVarsData[1].info.info.lineStart = 11;
  modelData->realVarsData[1].info.info.colStart = 3;
  modelData->realVarsData[1].info.info.lineEnd = 13;
  modelData->realVarsData[1].info.info.colEnd = 73;
  modelData->realVarsData[1].info.info.readonly = 0;
  modelData->realVarsData[1].attribute.unit = "";
  modelData->realVarsData[1].attribute.displayUnit = "";
  modelData->realVarsData[1].attribute.min = -DBL_MAX;
  modelData->realVarsData[1].attribute.max = DBL_MAX;
  modelData->realVarsData[1].attribute.fixed = 0;
  modelData->realVarsData[1].attribute.useNominal = 0;
  modelData->realVarsData[1].attribute.nominal = 1.0;
  modelData->realVarsData[1].attribute.start = 0.0;
  modelData->realVarsData[2].info.id = 1002;
  modelData->realVarsData[2].info.name = "angleToTorqueAdaptor.move.phi_support";
  modelData->realVarsData[2].info.comment = "Absolute angle of support flange";
  modelData->realVarsData[2].info.info.filename = "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Interfaces/PartialElementaryOneFlangeAndSupport2.mo";
  modelData->realVarsData[2].info.info.lineStart = 16;
  modelData->realVarsData[2].info.info.colStart = 3;
  modelData->realVarsData[2].info.info.lineEnd = 16;
  modelData->realVarsData[2].info.info.colEnd = 58;
  modelData->realVarsData[2].info.info.readonly = 0;
  modelData->realVarsData[2].attribute.unit = "rad";
  modelData->realVarsData[2].attribute.displayUnit = "deg";
  modelData->realVarsData[2].attribute.min = -DBL_MAX;
  modelData->realVarsData[2].attribute.max = DBL_MAX;
  modelData->realVarsData[2].attribute.fixed = 1;
  modelData->realVarsData[2].attribute.useNominal = 0;
  modelData->realVarsData[2].attribute.nominal = 1.0;
  modelData->realVarsData[2].attribute.start = 0.0;
  modelData->realVarsData[3].info.id = 1003;
  modelData->realVarsData[3].info.name = "dut_turbine.phi";
  modelData->realVarsData[3].info.comment = "Absolute rotation angle of component";
  modelData->realVarsData[3].info.info.filename = "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo";
  modelData->realVarsData[3].info.info.lineStart = 8;
  modelData->realVarsData[3].info.info.colStart = 3;
  modelData->realVarsData[3].info.info.lineEnd = 10;
  modelData->realVarsData[3].info.info.colEnd = 73;
  modelData->realVarsData[3].info.info.readonly = 0;
  modelData->realVarsData[3].attribute.unit = "rad";
  modelData->realVarsData[3].attribute.displayUnit = "rad";
  modelData->realVarsData[3].attribute.min = -DBL_MAX;
  modelData->realVarsData[3].attribute.max = DBL_MAX;
  modelData->realVarsData[3].attribute.fixed = 0;
  modelData->realVarsData[3].attribute.useNominal = 0;
  modelData->realVarsData[3].attribute.nominal = 1.0;
  modelData->realVarsData[3].attribute.start = 0.0;
  modelData->realVarsData[4].info.id = 1004;
  modelData->realVarsData[4].info.name = "dut_turbine.w";
  modelData->realVarsData[4].info.comment = "Absolute angular velocity of component (= der(phi))";
  modelData->realVarsData[4].info.info.filename = "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo";
  modelData->realVarsData[4].info.info.lineStart = 11;
  modelData->realVarsData[4].info.info.colStart = 3;
  modelData->realVarsData[4].info.info.lineEnd = 13;
  modelData->realVarsData[4].info.info.colEnd = 73;
  modelData->realVarsData[4].info.info.readonly = 0;
  modelData->realVarsData[4].attribute.unit = "rad/s";
  modelData->realVarsData[4].attribute.displayUnit = "";
  modelData->realVarsData[4].attribute.min = -DBL_MAX;
  modelData->realVarsData[4].attribute.max = DBL_MAX;
  modelData->realVarsData[4].attribute.fixed = 0;
  modelData->realVarsData[4].attribute.useNominal = 0;
  modelData->realVarsData[4].attribute.nominal = 1.0;
  modelData->realVarsData[4].attribute.start = 0.0;
  modelData->realVarsData[5].info.id = 1005;
  modelData->realVarsData[5].info.name = "in_acceleration";
  modelData->realVarsData[5].info.comment = "";
  modelData->realVarsData[5].info.info.filename = "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model/dut.mo";
  modelData->realVarsData[5].info.info.lineStart = 12;
  modelData->realVarsData[5].info.info.colStart = 3;
  modelData->realVarsData[5].info.info.lineEnd = 13;
  modelData->realVarsData[5].info.info.colEnd = 205;
  modelData->realVarsData[5].info.info.readonly = 0;
  modelData->realVarsData[5].attribute.unit = "";
  modelData->realVarsData[5].attribute.displayUnit = "";
  modelData->realVarsData[5].attribute.min = -DBL_MAX;
  modelData->realVarsData[5].attribute.max = DBL_MAX;
  modelData->realVarsData[5].attribute.fixed = 1;
  modelData->realVarsData[5].attribute.useNominal = 0;
  modelData->realVarsData[5].attribute.nominal = 1.0;
  modelData->realVarsData[5].attribute.start = 0.0;
  modelData->realVarsData[6].info.id = 1006;
  modelData->realVarsData[6].info.name = "in_angle";
  modelData->realVarsData[6].info.comment = "";
  modelData->realVarsData[6].info.info.filename = "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model/dut.mo";
  modelData->realVarsData[6].info.info.lineStart = 8;
  modelData->realVarsData[6].info.info.colStart = 3;
  modelData->realVarsData[6].info.info.lineEnd = 9;
  modelData->realVarsData[6].info.info.colEnd = 203;
  modelData->realVarsData[6].info.info.readonly = 0;
  modelData->realVarsData[6].attribute.unit = "";
  modelData->realVarsData[6].attribute.displayUnit = "";
  modelData->realVarsData[6].attribute.min = -DBL_MAX;
  modelData->realVarsData[6].attribute.max = DBL_MAX;
  modelData->realVarsData[6].attribute.fixed = 1;
  modelData->realVarsData[6].attribute.useNominal = 0;
  modelData->realVarsData[6].attribute.nominal = 1.0;
  modelData->realVarsData[6].attribute.start = 0.0;
  modelData->realVarsData[7].info.id = 1007;
  modelData->realVarsData[7].info.name = "in_set_torque";
  modelData->realVarsData[7].info.comment = "";
  modelData->realVarsData[7].info.info.filename = "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model/dut.mo";
  modelData->realVarsData[7].info.info.lineStart = 4;
  modelData->realVarsData[7].info.info.colStart = 3;
  modelData->realVarsData[7].info.info.lineEnd = 5;
  modelData->realVarsData[7].info.info.colEnd = 203;
  modelData->realVarsData[7].info.info.readonly = 0;
  modelData->realVarsData[7].attribute.unit = "";
  modelData->realVarsData[7].attribute.displayUnit = "";
  modelData->realVarsData[7].attribute.min = -DBL_MAX;
  modelData->realVarsData[7].attribute.max = DBL_MAX;
  modelData->realVarsData[7].attribute.fixed = 1;
  modelData->realVarsData[7].attribute.useNominal = 0;
  modelData->realVarsData[7].attribute.nominal = 1.0;
  modelData->realVarsData[7].attribute.start = 0.0;
  modelData->realVarsData[8].info.id = 1008;
  modelData->realVarsData[8].info.name = "in_speed";
  modelData->realVarsData[8].info.comment = "";
  modelData->realVarsData[8].info.info.filename = "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model/dut.mo";
  modelData->realVarsData[8].info.info.lineStart = 10;
  modelData->realVarsData[8].info.info.colStart = 3;
  modelData->realVarsData[8].info.info.lineEnd = 11;
  modelData->realVarsData[8].info.info.colEnd = 204;
  modelData->realVarsData[8].info.info.readonly = 0;
  modelData->realVarsData[8].attribute.unit = "";
  modelData->realVarsData[8].attribute.displayUnit = "";
  modelData->realVarsData[8].attribute.min = -DBL_MAX;
  modelData->realVarsData[8].attribute.max = DBL_MAX;
  modelData->realVarsData[8].attribute.fixed = 1;
  modelData->realVarsData[8].attribute.useNominal = 0;
  modelData->realVarsData[8].attribute.nominal = 1.0;
  modelData->realVarsData[8].attribute.start = 0.0;
  modelData->realVarsData[9].info.id = 1009;
  modelData->realVarsData[9].info.name = "out_acceleration";
  modelData->realVarsData[9].info.comment = "";
  modelData->realVarsData[9].info.info.filename = "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model/dut.mo";
  modelData->realVarsData[9].info.info.lineStart = 22;
  modelData->realVarsData[9].info.info.colStart = 3;
  modelData->realVarsData[9].info.info.lineEnd = 23;
  modelData->realVarsData[9].info.info.colEnd = 203;
  modelData->realVarsData[9].info.info.readonly = 0;
  modelData->realVarsData[9].attribute.unit = "";
  modelData->realVarsData[9].attribute.displayUnit = "";
  modelData->realVarsData[9].attribute.min = -DBL_MAX;
  modelData->realVarsData[9].attribute.max = DBL_MAX;
  modelData->realVarsData[9].attribute.fixed = 0;
  modelData->realVarsData[9].attribute.useNominal = 0;
  modelData->realVarsData[9].attribute.nominal = 1.0;
  modelData->realVarsData[9].attribute.start = 0.0;
  modelData->realVarsData[10].info.id = 1010;
  modelData->realVarsData[10].info.name = "out_angle";
  modelData->realVarsData[10].info.comment = "";
  modelData->realVarsData[10].info.info.filename = "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model/dut.mo";
  modelData->realVarsData[10].info.info.lineStart = 18;
  modelData->realVarsData[10].info.info.colStart = 3;
  modelData->realVarsData[10].info.info.lineEnd = 19;
  modelData->realVarsData[10].info.info.colEnd = 201;
  modelData->realVarsData[10].info.info.readonly = 0;
  modelData->realVarsData[10].attribute.unit = "";
  modelData->realVarsData[10].attribute.displayUnit = "";
  modelData->realVarsData[10].attribute.min = -DBL_MAX;
  modelData->realVarsData[10].attribute.max = DBL_MAX;
  modelData->realVarsData[10].attribute.fixed = 0;
  modelData->realVarsData[10].attribute.useNominal = 0;
  modelData->realVarsData[10].attribute.nominal = 1.0;
  modelData->realVarsData[10].attribute.start = 0.0;
  modelData->realVarsData[11].info.id = 1011;
  modelData->realVarsData[11].info.name = "out_speed";
  modelData->realVarsData[11].info.comment = "";
  modelData->realVarsData[11].info.info.filename = "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model/dut.mo";
  modelData->realVarsData[11].info.info.lineStart = 16;
  modelData->realVarsData[11].info.info.colStart = 3;
  modelData->realVarsData[11].info.info.lineEnd = 17;
  modelData->realVarsData[11].info.info.colEnd = 201;
  modelData->realVarsData[11].info.info.readonly = 0;
  modelData->realVarsData[11].attribute.unit = "";
  modelData->realVarsData[11].attribute.displayUnit = "";
  modelData->realVarsData[11].attribute.min = -DBL_MAX;
  modelData->realVarsData[11].attribute.max = DBL_MAX;
  modelData->realVarsData[11].attribute.fixed = 0;
  modelData->realVarsData[11].attribute.useNominal = 0;
  modelData->realVarsData[11].attribute.nominal = 1.0;
  modelData->realVarsData[11].attribute.start = 0.0;
  modelData->realVarsData[12].info.id = 1012;
  modelData->realVarsData[12].info.name = "out_torque";
  modelData->realVarsData[12].info.comment = "";
  modelData->realVarsData[12].info.info.filename = "C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model/dut.mo";
  modelData->realVarsData[12].info.info.lineStart = 14;
  modelData->realVarsData[12].info.info.colStart = 3;
  modelData->realVarsData[12].info.info.lineEnd = 15;
  modelData->realVarsData[12].info.info.colEnd = 203;
  modelData->realVarsData[12].info.info.readonly = 0;
  modelData->realVarsData[12].attribute.unit = "";
  modelData->realVarsData[12].attribute.displayUnit = "";
  modelData->realVarsData[12].attribute.min = -DBL_MAX;
  modelData->realVarsData[12].attribute.max = DBL_MAX;
  modelData->realVarsData[12].attribute.fixed = 0;
  modelData->realVarsData[12].attribute.useNominal = 0;
  modelData->realVarsData[12].attribute.nominal = 1.0;
  modelData->realVarsData[12].attribute.start = 0.0;
  modelData->realParameterData[0].info.id = 1013;
  modelData->realParameterData[0].info.name = "dut_turbine.J";
  modelData->realParameterData[0].info.comment = "Moment of inertia";
  modelData->realParameterData[0].info.info.filename = "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo";
  modelData->realParameterData[0].info.info.lineStart = 4;
  modelData->realParameterData[0].info.info.colStart = 3;
  modelData->realParameterData[0].info.info.lineEnd = 4;
  modelData->realParameterData[0].info.info.colEnd = 61;
  modelData->realParameterData[0].info.info.readonly = 0;
  modelData->realParameterData[0].attribute.unit = "kg.m2";
  modelData->realParameterData[0].attribute.displayUnit = "";
  modelData->realParameterData[0].attribute.min = 0.0;
  modelData->realParameterData[0].attribute.max = DBL_MAX;
  modelData->realParameterData[0].attribute.fixed = 1;
  modelData->realParameterData[0].attribute.useNominal = 0;
  modelData->realParameterData[0].attribute.nominal = 1.0;
  modelData->realParameterData[0].attribute.start = 1.0;
  modelData->integerParameterData[0].info.id = 1014;
  modelData->integerParameterData[0].info.name = "angleToTorqueAdaptor.multiplex3.n1";
  modelData->integerParameterData[0].info.comment = "Dimension of input signal connector 1";
  modelData->integerParameterData[0].info.info.filename = "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Routing.mo";
  modelData->integerParameterData[0].info.info.lineStart = 397;
  modelData->integerParameterData[0].info.info.colStart = 5;
  modelData->integerParameterData[0].info.info.lineEnd = 397;
  modelData->integerParameterData[0].info.info.colEnd = 67;
  modelData->integerParameterData[0].info.info.readonly = 0;
  modelData->integerParameterData[0].attribute.min = -LONG_MAX;
  modelData->integerParameterData[0].attribute.max = LONG_MAX;
  modelData->integerParameterData[0].attribute.fixed = 1;
  modelData->integerParameterData[0].attribute.start = 0;
  modelData->integerParameterData[1].info.id = 1015;
  modelData->integerParameterData[1].info.name = "angleToTorqueAdaptor.multiplex3.n2";
  modelData->integerParameterData[1].info.comment = "Dimension of input signal connector 2";
  modelData->integerParameterData[1].info.info.filename = "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Routing.mo";
  modelData->integerParameterData[1].info.info.lineStart = 398;
  modelData->integerParameterData[1].info.info.colStart = 5;
  modelData->integerParameterData[1].info.info.lineEnd = 398;
  modelData->integerParameterData[1].info.info.colEnd = 67;
  modelData->integerParameterData[1].info.info.readonly = 0;
  modelData->integerParameterData[1].attribute.min = -LONG_MAX;
  modelData->integerParameterData[1].attribute.max = LONG_MAX;
  modelData->integerParameterData[1].attribute.fixed = 1;
  modelData->integerParameterData[1].attribute.start = 0;
  modelData->integerParameterData[2].info.id = 1016;
  modelData->integerParameterData[2].info.name = "angleToTorqueAdaptor.multiplex3.n3";
  modelData->integerParameterData[2].info.comment = "Dimension of input signal connector 3";
  modelData->integerParameterData[2].info.info.filename = "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Routing.mo";
  modelData->integerParameterData[2].info.info.lineStart = 399;
  modelData->integerParameterData[2].info.info.colStart = 5;
  modelData->integerParameterData[2].info.info.lineEnd = 399;
  modelData->integerParameterData[2].info.info.colEnd = 67;
  modelData->integerParameterData[2].info.info.readonly = 0;
  modelData->integerParameterData[2].attribute.min = -LONG_MAX;
  modelData->integerParameterData[2].attribute.max = LONG_MAX;
  modelData->integerParameterData[2].attribute.fixed = 1;
  modelData->integerParameterData[2].attribute.start = 0;
  modelData->integerParameterData[3].info.id = 1017;
  modelData->integerParameterData[3].info.name = "dut_turbine.stateSelect";
  modelData->integerParameterData[3].info.comment = "Priority to use phi and w as states";
  modelData->integerParameterData[3].info.info.filename = "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo";
  modelData->integerParameterData[3].info.info.lineStart = 5;
  modelData->integerParameterData[3].info.info.colStart = 3;
  modelData->integerParameterData[3].info.info.lineEnd = 7;
  modelData->integerParameterData[3].info.info.colEnd = 57;
  modelData->integerParameterData[3].info.info.readonly = 0;
  modelData->integerParameterData[3].attribute.min = 1;
  modelData->integerParameterData[3].attribute.max = 5;
  modelData->integerParameterData[3].attribute.fixed = 1;
  modelData->integerParameterData[3].attribute.start = 0;
  modelData->booleanParameterData[0].info.id = 1018;
  modelData->booleanParameterData[0].info.name = "angleToTorqueAdaptor.move.useSupport";
  modelData->booleanParameterData[0].info.comment = "= true, if support flange enabled, otherwise implicitly grounded";
  modelData->booleanParameterData[0].info.info.filename = "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Interfaces/PartialElementaryOneFlangeAndSupport2.mo";
  modelData->booleanParameterData[0].info.info.lineStart = 4;
  modelData->booleanParameterData[0].info.info.colStart = 3;
  modelData->booleanParameterData[0].info.info.lineEnd = 9;
  modelData->booleanParameterData[0].info.info.colEnd = 28;
  modelData->booleanParameterData[0].info.info.readonly = 0;
  modelData->booleanParameterData[0].attribute.fixed = 1;
  modelData->booleanParameterData[0].attribute.start = 0;
  modelData->booleanParameterData[1].info.id = 1019;
  modelData->booleanParameterData[1].info.name = "angleToTorqueAdaptor.use_a";
  modelData->booleanParameterData[1].info.comment = "= true, enable the input connector a (angular acceleration)";
  modelData->booleanParameterData[1].info.info.filename = "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/AngleToTorqueAdaptor.mo";
  modelData->booleanParameterData[1].info.info.lineStart = 9;
  modelData->booleanParameterData[1].info.info.colStart = 3;
  modelData->booleanParameterData[1].info.info.lineEnd = 14;
  modelData->booleanParameterData[1].info.info.colEnd = 28;
  modelData->booleanParameterData[1].info.info.readonly = 0;
  modelData->booleanParameterData[1].attribute.fixed = 1;
  modelData->booleanParameterData[1].attribute.start = 0;
  modelData->booleanParameterData[2].info.id = 1020;
  modelData->booleanParameterData[2].info.name = "angleToTorqueAdaptor.use_w";
  modelData->booleanParameterData[2].info.comment = "= true, enable the input connector w (angular velocity)";
  modelData->booleanParameterData[2].info.info.filename = "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/AngleToTorqueAdaptor.mo";
  modelData->booleanParameterData[2].info.info.lineStart = 4;
  modelData->booleanParameterData[2].info.info.colStart = 3;
  modelData->booleanParameterData[2].info.info.lineEnd = 8;
  modelData->booleanParameterData[2].info.info.colEnd = 28;
  modelData->booleanParameterData[2].info.info.readonly = 0;
  modelData->booleanParameterData[2].attribute.fixed = 1;
  modelData->booleanParameterData[2].attribute.start = 0;
  modelData->booleanParameterData[3].info.id = 1021;
  modelData->booleanParameterData[3].info.name = "coupling.use_a";
  modelData->booleanParameterData[3].info.comment = "= true, enable the output connector a (angular acceleration)";
  modelData->booleanParameterData[3].info.info.filename = "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/TorqueToAngleAdaptor.mo";
  modelData->booleanParameterData[3].info.info.lineStart = 9;
  modelData->booleanParameterData[3].info.info.colStart = 3;
  modelData->booleanParameterData[3].info.info.lineEnd = 14;
  modelData->booleanParameterData[3].info.info.colEnd = 28;
  modelData->booleanParameterData[3].info.info.readonly = 0;
  modelData->booleanParameterData[3].attribute.fixed = 1;
  modelData->booleanParameterData[3].attribute.start = 0;
  modelData->booleanParameterData[4].info.id = 1022;
  modelData->booleanParameterData[4].info.name = "coupling.use_w";
  modelData->booleanParameterData[4].info.comment = "= true, enable the output connector w (angular velocity)";
  modelData->booleanParameterData[4].info.info.filename = "C:/Users/D48113/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/TorqueToAngleAdaptor.mo";
  modelData->booleanParameterData[4].info.info.lineStart = 4;
  modelData->booleanParameterData[4].info.info.colStart = 3;
  modelData->booleanParameterData[4].info.info.lineEnd = 8;
  modelData->booleanParameterData[4].info.info.colEnd = 28;
  modelData->booleanParameterData[4].info.info.readonly = 0;
  modelData->booleanParameterData[4].attribute.fixed = 1;
  modelData->booleanParameterData[4].attribute.start = 0;
}