# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/workspace/hsw/KETI-Query-Engine-Instance

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/workspace/hsw/KETI-Query-Engine-Instance/build/cmake/build

# Include any dependencies generated for this target.
include CMakeFiles/query_engine_instance.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/query_engine_instance.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/query_engine_instance.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/query_engine_instance.dir/flags.make

CMakeFiles/query_engine_instance.dir/main.cc.o: CMakeFiles/query_engine_instance.dir/flags.make
CMakeFiles/query_engine_instance.dir/main.cc.o: /root/workspace/hsw/KETI-Query-Engine-Instance/main.cc
CMakeFiles/query_engine_instance.dir/main.cc.o: CMakeFiles/query_engine_instance.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/workspace/hsw/KETI-Query-Engine-Instance/build/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/query_engine_instance.dir/main.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/query_engine_instance.dir/main.cc.o -MF CMakeFiles/query_engine_instance.dir/main.cc.o.d -o CMakeFiles/query_engine_instance.dir/main.cc.o -c /root/workspace/hsw/KETI-Query-Engine-Instance/main.cc

CMakeFiles/query_engine_instance.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/query_engine_instance.dir/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/workspace/hsw/KETI-Query-Engine-Instance/main.cc > CMakeFiles/query_engine_instance.dir/main.cc.i

CMakeFiles/query_engine_instance.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/query_engine_instance.dir/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/workspace/hsw/KETI-Query-Engine-Instance/main.cc -o CMakeFiles/query_engine_instance.dir/main.cc.s

CMakeFiles/query_engine_instance.dir/plan_executor.cc.o: CMakeFiles/query_engine_instance.dir/flags.make
CMakeFiles/query_engine_instance.dir/plan_executor.cc.o: /root/workspace/hsw/KETI-Query-Engine-Instance/plan_executor.cc
CMakeFiles/query_engine_instance.dir/plan_executor.cc.o: CMakeFiles/query_engine_instance.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/workspace/hsw/KETI-Query-Engine-Instance/build/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/query_engine_instance.dir/plan_executor.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/query_engine_instance.dir/plan_executor.cc.o -MF CMakeFiles/query_engine_instance.dir/plan_executor.cc.o.d -o CMakeFiles/query_engine_instance.dir/plan_executor.cc.o -c /root/workspace/hsw/KETI-Query-Engine-Instance/plan_executor.cc

CMakeFiles/query_engine_instance.dir/plan_executor.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/query_engine_instance.dir/plan_executor.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/workspace/hsw/KETI-Query-Engine-Instance/plan_executor.cc > CMakeFiles/query_engine_instance.dir/plan_executor.cc.i

CMakeFiles/query_engine_instance.dir/plan_executor.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/query_engine_instance.dir/plan_executor.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/workspace/hsw/KETI-Query-Engine-Instance/plan_executor.cc -o CMakeFiles/query_engine_instance.dir/plan_executor.cc.s

CMakeFiles/query_engine_instance.dir/db_connector_instance.cc.o: CMakeFiles/query_engine_instance.dir/flags.make
CMakeFiles/query_engine_instance.dir/db_connector_instance.cc.o: /root/workspace/hsw/KETI-Query-Engine-Instance/db_connector_instance.cc
CMakeFiles/query_engine_instance.dir/db_connector_instance.cc.o: CMakeFiles/query_engine_instance.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/workspace/hsw/KETI-Query-Engine-Instance/build/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/query_engine_instance.dir/db_connector_instance.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/query_engine_instance.dir/db_connector_instance.cc.o -MF CMakeFiles/query_engine_instance.dir/db_connector_instance.cc.o.d -o CMakeFiles/query_engine_instance.dir/db_connector_instance.cc.o -c /root/workspace/hsw/KETI-Query-Engine-Instance/db_connector_instance.cc

CMakeFiles/query_engine_instance.dir/db_connector_instance.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/query_engine_instance.dir/db_connector_instance.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/workspace/hsw/KETI-Query-Engine-Instance/db_connector_instance.cc > CMakeFiles/query_engine_instance.dir/db_connector_instance.cc.i

CMakeFiles/query_engine_instance.dir/db_connector_instance.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/query_engine_instance.dir/db_connector_instance.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/workspace/hsw/KETI-Query-Engine-Instance/db_connector_instance.cc -o CMakeFiles/query_engine_instance.dir/db_connector_instance.cc.s

# Object files for target query_engine_instance
query_engine_instance_OBJECTS = \
"CMakeFiles/query_engine_instance.dir/main.cc.o" \
"CMakeFiles/query_engine_instance.dir/plan_executor.cc.o" \
"CMakeFiles/query_engine_instance.dir/db_connector_instance.cc.o"

# External object files for target query_engine_instance
query_engine_instance_EXTERNAL_OBJECTS =

query_engine_instance: CMakeFiles/query_engine_instance.dir/main.cc.o
query_engine_instance: CMakeFiles/query_engine_instance.dir/plan_executor.cc.o
query_engine_instance: CMakeFiles/query_engine_instance.dir/db_connector_instance.cc.o
query_engine_instance: CMakeFiles/query_engine_instance.dir/build.make
query_engine_instance: libss_grpc_proto.a
query_engine_instance: /lib/libgrpc++_reflection.a
query_engine_instance: /lib/libgrpc++.a
query_engine_instance: /lib/libprotobuf.a
query_engine_instance: /lib/libgrpc.a
query_engine_instance: /lib/libz.a
query_engine_instance: /lib/libcares.a
query_engine_instance: /lib/libaddress_sorting.a
query_engine_instance: /lib/libre2.a
query_engine_instance: /lib/libabsl_raw_hash_set.a
query_engine_instance: /lib/libabsl_hashtablez_sampler.a
query_engine_instance: /lib/libabsl_hash.a
query_engine_instance: /lib/libabsl_city.a
query_engine_instance: /lib/libabsl_low_level_hash.a
query_engine_instance: /lib/libabsl_statusor.a
query_engine_instance: /lib/libabsl_bad_variant_access.a
query_engine_instance: /lib/libgpr.a
query_engine_instance: /lib/libupb.a
query_engine_instance: /lib/libabsl_status.a
query_engine_instance: /lib/libabsl_random_distributions.a
query_engine_instance: /lib/libabsl_random_seed_sequences.a
query_engine_instance: /lib/libabsl_random_internal_pool_urbg.a
query_engine_instance: /lib/libabsl_random_internal_randen.a
query_engine_instance: /lib/libabsl_random_internal_randen_hwaes.a
query_engine_instance: /lib/libabsl_random_internal_randen_hwaes_impl.a
query_engine_instance: /lib/libabsl_random_internal_randen_slow.a
query_engine_instance: /lib/libabsl_random_internal_platform.a
query_engine_instance: /lib/libabsl_random_internal_seed_material.a
query_engine_instance: /lib/libabsl_random_seed_gen_exception.a
query_engine_instance: /lib/libabsl_cord.a
query_engine_instance: /lib/libabsl_bad_optional_access.a
query_engine_instance: /lib/libabsl_cordz_info.a
query_engine_instance: /lib/libabsl_cord_internal.a
query_engine_instance: /lib/libabsl_cordz_functions.a
query_engine_instance: /lib/libabsl_exponential_biased.a
query_engine_instance: /lib/libabsl_cordz_handle.a
query_engine_instance: /lib/libabsl_str_format_internal.a
query_engine_instance: /lib/libabsl_synchronization.a
query_engine_instance: /lib/libabsl_stacktrace.a
query_engine_instance: /lib/libabsl_symbolize.a
query_engine_instance: /lib/libabsl_debugging_internal.a
query_engine_instance: /lib/libabsl_demangle_internal.a
query_engine_instance: /lib/libabsl_graphcycles_internal.a
query_engine_instance: /lib/libabsl_malloc_internal.a
query_engine_instance: /lib/libabsl_time.a
query_engine_instance: /lib/libabsl_strings.a
query_engine_instance: /lib/libabsl_throw_delegate.a
query_engine_instance: /lib/libabsl_int128.a
query_engine_instance: /lib/libabsl_strings_internal.a
query_engine_instance: /lib/libabsl_base.a
query_engine_instance: /lib/libabsl_spinlock_wait.a
query_engine_instance: /lib/libabsl_raw_logging_internal.a
query_engine_instance: /lib/libabsl_log_severity.a
query_engine_instance: /lib/libabsl_civil_time.a
query_engine_instance: /lib/libabsl_time_zone.a
query_engine_instance: /lib/libssl.a
query_engine_instance: /lib/libcrypto.a
query_engine_instance: CMakeFiles/query_engine_instance.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/workspace/hsw/KETI-Query-Engine-Instance/build/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable query_engine_instance"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/query_engine_instance.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/query_engine_instance.dir/build: query_engine_instance
.PHONY : CMakeFiles/query_engine_instance.dir/build

CMakeFiles/query_engine_instance.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/query_engine_instance.dir/cmake_clean.cmake
.PHONY : CMakeFiles/query_engine_instance.dir/clean

CMakeFiles/query_engine_instance.dir/depend:
	cd /root/workspace/hsw/KETI-Query-Engine-Instance/build/cmake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/workspace/hsw/KETI-Query-Engine-Instance /root/workspace/hsw/KETI-Query-Engine-Instance /root/workspace/hsw/KETI-Query-Engine-Instance/build/cmake/build /root/workspace/hsw/KETI-Query-Engine-Instance/build/cmake/build /root/workspace/hsw/KETI-Query-Engine-Instance/build/cmake/build/CMakeFiles/query_engine_instance.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/query_engine_instance.dir/depend

