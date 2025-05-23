#!/bin/bash
# Author: Santiago Gil

echo "Executing Co-simulation experiment"
echo "-----------------------------"
echo "Specification"
echo "-----------------------------"
maestro_path=../ # Change path accordingly
output_path=results # Change accordingly
maestro_jar=maestro-3.0.2-jar-with-dependencies.jar

java -jar $maestro_path/$maestro_jar import sg1 distributed_cosimulation.json -output generate

echo "-----------------------------"
echo "Interpretation"
echo "-----------------------------"
java -jar $maestro_path/$maestro_jar interpret generate/spec.mabl -output $output_path

echo "Co-simulation experiment finished. See output results in folder '$output_path'"
