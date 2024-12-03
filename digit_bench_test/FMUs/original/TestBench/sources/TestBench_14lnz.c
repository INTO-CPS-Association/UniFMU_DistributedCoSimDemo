/* Linearization */
#include "TestBench_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *TestBench_linear_model_frame()
{
  return "model linearized_model \"TestBench\" \n  parameter Integer n = 4 \"number of states\";\n  parameter Integer m = 2 \"number of inputs\";\n  parameter Integer p = 4 \"number of outputs\";\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[m] = %s;\n"
  "\n"
  "  parameter Real A[n, n] =\n\t[%s];\n\n"
  "  parameter Real B[n, m] =\n\t[%s];\n\n"
  "  parameter Real C[p, n] =\n\t[%s];\n\n"
  "  parameter Real D[p, m] =\n\t[%s];\n\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[m](start=u0);\n"
  "  output Real y[p];\n"
  "\n"
  "  Real 'x_coupling.phi' = x[1];\n""  Real 'x_test_bench_ctrl.x' = x[2];\n""  Real 'x_testbench_inertia.phi' = x[3];\n""  Real 'x_testbench_inertia.w' = x[4];\n"
  "  Real 'u_in_set_speed' = u[1];\n""  Real 'u_in_torque' = u[2];\n"
  "  Real 'y_out_acceleration' = y[1];\n""  Real 'y_out_angle' = y[2];\n""  Real 'y_out_angle_inertia' = y[3];\n""  Real 'y_out_speed' = y[4];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linearized_model;\n";
}
const char *TestBench_linear_model_datarecovery_frame()
{
  return "model linearized_model \"TestBench\" \n parameter Integer n = 4 \"number of states\";\n  parameter Integer m = 2 \"number of inputs\";\n  parameter Integer p = 4 \"number of outputs\";\n  parameter Integer nz = 24 \"data recovery variables\";\n"
  "  parameter Real x0[4] = %s;\n"
  "  parameter Real u0[2] = %s;\n"
  "  parameter Real z0[24] = %s;\n"
  "\n"
  "  parameter Real A[n, n] =\n\t[%s];\n\n"
  "  parameter Real B[n, m] =\n\t[%s];\n\n"
  "  parameter Real C[p, n] =\n\t[%s];\n\n"
  "  parameter Real D[p, m] =\n\t[%s];\n\n"
  "  parameter Real Cz[nz, n] =\n\t[%s];\n\n"
  "  parameter Real Dz[nz, m] =\n\t[%s];\n\n"
  "\n"
  "  Real x[n](start=x0);\n"
  "  input Real u[m](start=u0);\n"
  "  output Real y[p];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'x_coupling.phi' = x[1];\n""  Real 'x_test_bench_ctrl.x' = x[2];\n""  Real 'x_testbench_inertia.phi' = x[3];\n""  Real 'x_testbench_inertia.w' = x[4];\n"
  "  Real 'u_in_set_speed' = u[1];\n""  Real 'u_in_torque' = u[2];\n"
  "  Real 'y_out_acceleration' = y[1];\n""  Real 'y_out_angle' = y[2];\n""  Real 'y_out_angle_inertia' = y[3];\n""  Real 'y_out_speed' = y[4];\n"
  "  Real 'z_der(coupling.w_internal)' = z[1];\n""  Real 'z_der(testbench_coupling.phi_rel)' = z[2];\n""  Real 'z_der(testbench_coupling.tau_c)' = z[3];\n""  Real 'z_der(testbench_coupling.tau_d)' = z[4];\n""  Real 'z_der(testbench_coupling.w_rel)' = z[5];\n""  Real 'z_angle_sensor.flange.tau' = z[6];\n""  Real 'z_coupling.w_internal' = z[7];\n""  Real 'z_in_set_speed' = z[8];\n""  Real 'z_in_torque' = z[9];\n""  Real 'z_out_acceleration' = z[10];\n""  Real 'z_out_angle' = z[11];\n""  Real 'z_out_angle_inertia' = z[12];\n""  Real 'z_out_speed' = z[13];\n""  Real 'z_test_bench_feedback.y' = z[14];\n""  Real 'z_test_bench_speed_sensor.flange.tau' = z[15];\n""  Real 'z_test_bench_torque.phi_support' = z[16];\n""  Real 'z_test_bench_torque.tau' = z[17];\n""  Real 'z_testbench_coupling.a_rel' = z[18];\n""  Real 'z_testbench_coupling.lossPower' = z[19];\n""  Real 'z_testbench_coupling.phi_rel' = z[20];\n""  Real 'z_testbench_coupling.tau_c' = z[21];\n""  Real 'z_testbench_coupling.tau_d' = z[22];\n""  Real 'z_testbench_coupling.w_rel' = z[23];\n""  Real 'z_testbench_inertia.a' = z[24];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linearized_model;\n";
}
#if defined(__cplusplus)
}
#endif

