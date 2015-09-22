cmake_minimum_required(VERSION 3.2)
project(intel_test)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror -mmic")


set(MPI_INCLUDE_DIRS /opt/intel/ipmi/5.0.3.048/include64/)
include_directories( ${MPI_INCLUDE_DIRS} )
set(SOURCE_FILES main.c)
add_executable(intel_test ${SOURCE_FILES})