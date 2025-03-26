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

# Co-simulation
#./execute_cosimulation.sh
