# Makefile generated by OpenModelica
CC=clang
AR=@AR@
CFLAGS=-Os -Wno-parentheses-equality -falign-functions -mstackrealign -msse2 -mfpmath=sse 
LD=$(CC) -shared
# define OMC_LDFLAGS_LINK_TYPE env variable to override this
OMC_LDFLAGS_LINK_TYPE=static
LDFLAGS=-L"C:/Program Files/OpenModelica1.20.0-64bit/lib//omc" -Wl,-rpath,"C:/Program Files/OpenModelica1.20.0-64bit/lib//omc" -fopenmp -Wl,-Bstatic -lregex -ltre -lintl -liconv -lexpat -lpthread -loleaut32 -limagehlp -lhdf5 -lz -lszip -Wl,-Bdynamic  -lSimulationRuntimeFMI  -Wl,-B$(OMC_LDFLAGS_LINK_TYPE) -lregex -ltre -lintl -liconv -static-libgcc -lpthread -lm  -lgfortran -lquadmath -lmingw32 -lgcc_eh -lmoldname -lmingwex  -luser32 -lkernel32 -ladvapi32 -lshell32 -limagehlp -lopenblas -lhdf5 -lz -lszip -Wl,-Bdynamic 
DLLEXT=.dll
NEED_RUNTIME=
NEED_DGESV=
NEED_CMINPACK=
NEED_SUNDIALS=
FMIPLATFORM=win64
# Note: Simulation of the fmu with dymola does not work with -finline-small-functions (enabled by most optimization levels)
CPPFLAGS=-I. -I"C:/Program Files/OpenModelica1.20.0-64bit/include/omc/c/fmi" -DOMC_FMI_RUNTIME=1 -DCMINPACK_NO_DLL=1

override CPPFLAGS += 

CFILES = TestBench.c \
         TestBench_functions.c \
         TestBench_records.c \
         TestBench_01exo.c \
         TestBench_02nls.c \
         TestBench_03lsy.c \
         TestBench_04set.c \
         TestBench_05evt.c \
         TestBench_06inz.c \
         TestBench_07dly.c \
         TestBench_08bnd.c \
         TestBench_09alg.c \
         TestBench_10asr.c \
         TestBench_11mix.c \
         TestBench_12jac.c \
         TestBench_13opt.c \
         TestBench_14lnz.c \
         TestBench_15syn.c \
         TestBench_16dae.c \
         TestBench_17inl.c \
         TestBench_18spd.c \
         TestBench_init_fmu.c \
         TestBench_FMU.c
OFILES=$(CFILES:.c=.o)

RUNTIMEDIR=.
ifneq ($(NEED_DGESV),)
DGESV_OBJS = 
endif
ifneq ($(NEED_CMINPACK),)
CMINPACK_OBJS=
endif
ifneq ($(NEED_RUNTIME),)
RUNTIMEFILES=./gc/memory_pool.o ./gc/omc_gc.o ./util/base_array.o ./util/boolean_array.o ./util/context.o ./util/division.o ./util/doubleEndedList.o ./util/generic_array.o ./util/index_spec.o ./util/integer_array.o ./util/jacobian_util.o ./util/list.o ./util/modelica_string_lit.o ./util/modelica_string.o ./util/ModelicaUtilities.o ./util/omc_error.o ./util/omc_file.o ./util/omc_init.o ./util/omc_mmap.o ./util/omc_msvc.o ./util/omc_numbers.o ./util/parallel_helper.o ./util/rational.o ./util/real_array.o ./util/ringbuffer.o ./util/simulation_options.o ./util/string_array.o ./util/utility.o ./util/varinfo.o ./math-support/pivot.o ./simulation/omc_simulation_util.o ./simulation/options.o ./simulation/simulation_info_json.o ./simulation/simulation_omc_assert.o ./simulation/solver/delay.o ./simulation/solver/fmi_events.o ./simulation/solver/model_help.o ./simulation/solver/omc_math.o ./simulation/solver/spatialDistribution.o ./simulation/solver/stateset.o ./simulation/solver/synchronous.o ./simulation/solver/initialization/initialization.o ./meta/meta_modelica_catch.o $(DGESV_OBJS) $(CMINPACK_OBJS)
endif
ifneq ($(NEED_SUNDIALS),)
FMISUNDIALSFILES=
LDFLAGS+=-Wl,-Bstatic -lsundials_cvode -lsundials_nvecserial -Wl,-Bdynamic
endif

PHONY: TestBench_FMU
TestBench_FMU: nozip
	cd .. && rm -f ../TestBench.fmu && zip -r ../TestBench.fmu *
nozip: TestBench_functions.h TestBench_literals.h $(OFILES) $(RUNTIMEFILES) $(FMISUNDIALSFILES)
	$(CXX) -shared -I. -o TestBench$(DLLEXT) $(RUNTIMEFILES) $(FMISUNDIALSFILES) $(OFILES) $(CPPFLAGS) -L"C:/work/gitlab/project_digit-bench-dlte/claudio/distributed_model_tunning_example/decoupled_model"   $(CFLAGS) $(LDFLAGS) -llis -Wl,--kill-at
	mkdir.exe -p ../binaries/win64
	dlltool -d TestBench.def --dllname TestBench$(DLLEXT) --output-lib TestBench.lib --kill-at
	cp TestBench$(DLLEXT) TestBench.lib TestBench_FMU.libs ../binaries/win64/
	rm -f *.o TestBench$(DLLEXT) $(OFILES) $(RUNTIMEFILES) $(FMISUNDIALSFILES)
	cd .. && rm -f ../TestBench.fmu && zip -r ../TestBench.fmu *

