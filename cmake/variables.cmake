# cmake script to define variables

## General variables
set(AUTHOR "T. Schmoderer")
set(AUTHOR_MAIL "iathena@mailo.com")
string(TIMESTAMP TODAY "%Y-%m-%d")
string(TIMESTAMP YEAR "%Y")
set(DOCUMENTATION_ADDR "https://tschmoderer.github.io/control-toolbox/html/index.html")
set(LICENSE "GNU GENERAL PUBLIC LICENSE")
set(CMAKE_PROJECT_DESCRIPTION "A C++ toolbox for control systems")
set(CODE_ADDR "https://github.com/tschmoderer/control-toolbox")

## Compilation variables
set(CMAKE_BUILD_TYPE Debug)

## Directories
set(DOCS ${PROJECT_SOURCE_DIR}/docs)
set(EXS ${PROJECT_SOURCE_DIR}/examples)
set(SRC ${PROJECT_SOURCE_DIR}/src)
set(TST ${PROJECT_SOURCE_DIR}/tests)