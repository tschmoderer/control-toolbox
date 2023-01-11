cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project("Control ToolBox" LANGUAGES CXX)

# Define the path to custom cmake modules
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

# Define variables
include(variables)

# Execute subdirectories
add_subdirectory(${DOCS})

