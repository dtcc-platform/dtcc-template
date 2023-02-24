cmake_minimum_required(VERSION 3.15)
project(${SKBUILD_PROJECT_NAME} VERSION ${SKBUILD_PROJECT_VERSION})

# Find packages
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")
find_package(pybind11 CONFIG REQUIRED)
#find_package(foo CONFIG REQUIRED)
#find_package(bar CONFIG REQUIRED)

# Add Python bindings
pybind11_add_module(_bindings MODULE src/bindings.cpp)
target_compile_definitions(_bindings PRIVATE VERSION_INFO=${PROJECT_VERSION})

# Set install target
install(TARGETS _bindings DESTINATION dtcc_package_template)
