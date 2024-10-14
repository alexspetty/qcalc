cmake_minimum_required(VERSION 3.10)

# Project name
project(qCalc C)

# Set the C standard
set(CMAKE_C_STANDARD 11)

# Add source files
set(SOURCES
    src/main.c
    src/utils.c
    src/fc.c
    src/prime.c
    src/division.c
    src/reciprocal.c
)

# Include header files
include_directories(include)

# Find GMP library
find_library(GMP_LIB gmp REQUIRED)

# Add executable
add_executable(qcalc ${SOURCES})

# Link GMP library
target_link_libraries(qcalc ${GMP_LIB})