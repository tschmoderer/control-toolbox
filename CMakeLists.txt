cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project("Control ToolBox" LANGUAGES CXX)

# Define the path to custom cmake modules
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

# Define variables
include(variables)

# Retrieve project version
include(version)

# Use CTest for unitary testing
include(CTest)

# Execute subdirectories
add_subdirectory(${DOCS})
add_subdirectory(${SRC})
add_subdirectory(${TST})