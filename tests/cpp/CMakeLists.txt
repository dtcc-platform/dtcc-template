set(PROGRAM run-tests)
add_executable(${PROGRAM} ${PROGRAM}.cpp)
include_directories(${CMAKE_SOURCE_DIR}/src/cpp/include)
install(TARGETS ${PROGRAM} DESTINATION ${CMAKE_SOURCE_DIR}/tests/cpp/bin)
