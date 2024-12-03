from fmpy import read_model_description, extract
from fmpy.fmi2 import FMU2Slave
import shutil
import sys
import logging
import time

logging.basicConfig(level=logging.DEBUG)
logger = logging.getLogger(__file__)


if __name__ == "__main__":
    input_ok = False
    if sys.argv is not None:
        fmu_filename = str(sys.argv[1])

    end_simulation_time = 5.0
    start_simulation_time = 0.0
    threshold = 2.0
    step_size = 0.01
    # read the model description
    model_description = read_model_description(fmu_filename)

    # collect the value references
    vrs = {}
    for variable in model_description.modelVariables:
        vrs[variable.name] = variable.valueReference

    # extract the FMU
    unzipdir = extract(fmu_filename)

    fmu = FMU2Slave(guid=model_description.guid,
                    unzipDirectory=unzipdir,
                    modelIdentifier=model_description.coSimulation.modelIdentifier,
                    instanceName='instance1')

    # initialize
    fmu.instantiate()
    fmu.setupExperiment(startTime=start_simulation_time)
    fmu.enterInitializationMode()
    fmu.exitInitializationMode()

    simulation_time = start_simulation_time
    #assert False
    # while (simulation_time <= end_simulation_time):
    #     fmu.doStep(currentCommunicationPoint=simulation_time, communicationStepSize=step_size)
    #     time.wait(step_size)
    #     simulation_time += step_size


    fmu.doStep(currentCommunicationPoint=simulation_time, communicationStepSize=step_size)


    fmu.doStep(currentCommunicationPoint=simulation_time, communicationStepSize=step_size)


    # terminate
    fmu.terminate()
    fmu.freeInstance()
    # clean up
    shutil.rmtree(unzipdir, ignore_errors=True)
