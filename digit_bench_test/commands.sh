#!/bin/bash
# Author: Santiago Gil
#./unifmu generate-distributed python DUT --black-box-fmu
#./unifmu generate-distributed python TestBench --black-box-fmu
#./unifmu generate-distributed python SetInput --black-box-fmu

# Wrap proxy FMUs as zip
(cd FMUs/SetInput_proxy && zip -r SetInput_proxy.fmu .)
cp FMUs/SetInput_proxy/SetInput_proxy.fmu FMUs
rm FMUs/SetInput_proxy/SetInput_proxy.fmu

(cd FMUs/TestBench_proxy && zip -r TestBench_proxy.fmu .)
cp FMUs/TestBench_proxy/TestBench_proxy.fmu FMUs
rm FMUs/TestBench_proxy/TestBench_proxy.fmu

(cd FMUs/Dut_proxy && zip -r Dut_proxy.fmu .)
cp FMUs/Dut_proxy/Dut_proxy.fmu FMUs
rm FMUs/Dut_proxy/Dut_proxy.fmu


# Wrap original FMUs as zip
(cd FMUs/Dut && zip -r Dut.fmu .)
cp FMUs/Dut/Dut.fmu FMUs
rm FMUs/Dut/Dut.fmu

(cd FMUs/TestBench && zip -r TestBench.fmu .)
cp FMUs/TestBench/TestBench.fmu FMUs
rm FMUs/TestBench/TestBench.fmu

(cd FMUs/SetInput && zip -r SetInput.fmu .)
cp FMUs/SetInput/SetInput.fmu FMUs
rm FMUs/SetInput/SetInput.fmu

# Co-simulation
#./execute_cosimulation.sh
