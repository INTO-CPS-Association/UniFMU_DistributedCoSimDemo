/* Linearization */
#include "Dut_model.h"
#if defined(__cplusplus)
extern "C" {
#endif
const char *Dut_linear_model_frame()
{
  return "model linearized_model \"Dut\" \n  parameter Integer n = 0 \"number of states\";\n  parameter Integer m = 4 \"number of inputs\";\n  parameter Integer p = 4 \"number of outputs\";\n"
  "  parameter Real x0[n] = %s;\n"
  "  parameter Real u0[m] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = zeros(n, n);%s\n\n"
  "  parameter Real B[n, m] = zeros(n, m);%s\n\n"
  "  parameter Real C[p, n] = zeros(p, n);%s\n\n"
  "  parameter Real D[p, m] =\n\t[%s];\n\n"
  "\n"
  "  Real x[n];\n"
  "  input Real u[m](start=u0);\n"
  "  output Real y[p];\n"
  "\n"
  "  Real 'u_in_acceleration' = u[1];\n""  Real 'u_in_angle' = u[2];\n""  Real 'u_in_set_torque' = u[3];\n""  Real 'u_in_speed' = u[4];\n"
  "  Real 'y_out_acceleration' = y[1];\n""  Real 'y_out_angle' = y[2];\n""  Real 'y_out_speed' = y[3];\n""  Real 'y_out_torque' = y[4];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linearized_model;\n";
}
const char *Dut_linear_model_datarecovery_frame()
{
  return "model linearized_model \"Dut\" \n parameter Integer n = 0 \"number of states\";\n  parameter Integer m = 4 \"number of inputs\";\n  parameter Integer p = 4 \"number of outputs\";\n  parameter Integer nz = 13 \"data recovery variables\";\n"
  "  parameter Real x0[0] = %s;\n"
  "  parameter Real u0[4] = %s;\n"
  "  parameter Real z0[13] = %s;\n"
  "\n"
  "  parameter Real A[n, n] = zeros(n, n);%s\n\n"
  "  parameter Real B[n, m] = zeros(n, m);%s\n\n"
  "  parameter Real C[p, n] = zeros(p, n);%s\n\n"
  "  parameter Real D[p, m] =\n\t[%s];\n\n"
  "  parameter Real Cz[nz, n] = zeros(nz, n);%s\n\n"
  "  parameter Real Dz[nz, m] =\n\t[%s];\n\n"
  "\n"
  "  Real x[n];\n"
  "  input Real u[m](start=u0);\n"
  "  output Real y[p];\n"
  "  output Real z[nz];\n"
  "\n"
  "  Real 'u_in_acceleration' = u[1];\n""  Real 'u_in_angle' = u[2];\n""  Real 'u_in_set_torque' = u[3];\n""  Real 'u_in_speed' = u[4];\n"
  "  Real 'y_out_acceleration' = y[1];\n""  Real 'y_out_angle' = y[2];\n""  Real 'y_out_speed' = y[3];\n""  Real 'y_out_torque' = y[4];\n"
  "  Real 'z_der(dut_turbine.phi)' = z[1];\n""  Real 'z_der(dut_turbine.w)' = z[2];\n""  Real 'z_angleToTorqueAdaptor.move.phi_support' = z[3];\n""  Real 'z_dut_turbine.phi' = z[4];\n""  Real 'z_dut_turbine.w' = z[5];\n""  Real 'z_in_acceleration' = z[6];\n""  Real 'z_in_angle' = z[7];\n""  Real 'z_in_set_torque' = z[8];\n""  Real 'z_in_speed' = z[9];\n""  Real 'z_out_acceleration' = z[10];\n""  Real 'z_out_angle' = z[11];\n""  Real 'z_out_speed' = z[12];\n""  Real 'z_out_torque' = z[13];\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linearized_model;\n";
}
#if defined(__cplusplus)
}
#endif

