# Project configuration
cmake_minimum_required(VERSION 3.15)
project(dtcc_template)

# Note: To building in Debug mode, use cmake .. -DCMAKE_BUILD_TYPE=Debug

# Set default build type to Release
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release")
    message(STATUS "Build type not specified, using Release by default")
endif()

message(STATUS "Build type: " ${CMAKE_BUILD_TYPE})

# Set compiler flags
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W3")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /O2")
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-reorder")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -DLLVM_ENABLE_ASSERTIONS=ON")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")
endif()

# Add path to local CMake scripts
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

# Add clang tools
include(cmake/clang-cxx-dev-tools.cmake)

# find_package(foo CONFIG REQUIRED)
# find_package(bar CONFIG REQUIRED)

# Add Python bindings
# # Find pybind11
execute_process(COMMAND python -c "import site; print([s for s in site.getsitepackages() if 'site-packages' in s][0])" OUTPUT_VARIABLE PYTHON_SITE_PACKAGES OUTPUT_STRIP_TRAILING_WHITESPACE)
set(pybind11_DIR ${PYTHON_SITE_PACKAGES}/pybind11/share/cmake/pybind11)
set(PYBIND11_FINDPYTHON ON)

message("Pybind11 DIR " ${pybind11_DIR})
find_package(pybind11 REQUIRED)

# Set include directories
include_directories(${CMAKE_SOURCE_DIR}/src/cpp/include)

# Set installation directory
set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/src)
set(CMAKE_SKIP_INSTALL_ALL_DEPENDENCY true)

add_subdirectory(src)

# Add tests
# ADD_SUBDIRECTORY(tests/cpp)
