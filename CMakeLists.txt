# Project configuration
cmake_minimum_required(VERSION 3.15)
project(${SKBUILD_PROJECT_NAME} VERSION ${SKBUILD_PROJECT_VERSION})

# Set compiler flags
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find packages
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")
find_package(pybind11 CONFIG REQUIRED)
#find_package(foo CONFIG REQUIRED)
#find_package(bar CONFIG REQUIRED)

# Add Python bindings
pybind11_add_module(_bindings MODULE ${CMAKE_SOURCE_DIR}/src/cpp/bindings.cpp)
target_compile_definitions(_bindings PRIVATE VERSION_INFO=${PROJECT_VERSION})
install(TARGETS _bindings DESTINATION dtcc_template)

# Add tests
ADD_SUBDIRECTORY(tests/cpp)
