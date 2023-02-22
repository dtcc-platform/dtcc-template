cmake_minimum_required(VERSION 3.15)
project(${SKBUILD_PROJECT_NAME} VERSION ${SKBUILD_PROJECT_VERSION})

find_package(pybind11 CONFIG REQUIRED)

pybind11_add_module(_bindings MODULE src/bindings.cpp)
target_compile_definitions(_bindings PRIVATE VERSION_INFO=${PROJECT_VERSION})

install(TARGETS _bindings DESTINATION dtcc_package_template)
