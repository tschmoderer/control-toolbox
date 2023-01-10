cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project("Control ToolBox" LANGUAGES CXX)

set(IMG ${PROJECT_SOURCE_DIR}/.github/img)
set(DOCS ${PROJECT_SOURCE_DIR}/docs)

add_subdirectory(${DOCS})