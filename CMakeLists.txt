cmake_minimum_required(VERSION 3.10)

# Project name
project(qCalc C)

# C standard
set(CMAKE_C_STANDARD 11)

# Source files
set(SOURCES
    src/main.c
    src/utils.c
    src/fc.c
    src/prime.c
    src/division.c
    src/reciprocal.c
)

# Header include path
include_directories(include)

# ---- GMP Support ----

# Optionally allow user to pass GMP paths manually
set(GMP_HINTS "" CACHE PATH "Optional path to GMP install root")

if (WIN32)
    message(STATUS "Configuring for Windows")

    # Try to find GMP manually if user supplied a hint
    find_path(GMP_INCLUDE_DIR gmp.h
        PATHS ${GMP_HINTS}
        PATH_SUFFIXES include
        REQUIRED
    )

    find_library(GMP_LIB
        NAMES gmp libgmp
        PATHS ${GMP_HINTS}
        PATH_SUFFIXES lib
        REQUIRED
    )
else()
    # Linux/macOS - try normal system locations
    find_path(GMP_INCLUDE_DIR gmp.h REQUIRED)
    find_library(GMP_LIB gmp REQUIRED)
endif()

include_directories(${GMP_INCLUDE_DIR})

# Executable
add_executable(qcalc ${SOURCES})

# Link with GMP
target_link_libraries(qcalc ${GMP_LIB})
