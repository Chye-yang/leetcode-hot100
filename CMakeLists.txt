cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_subdirectory(tests)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(sample_test tests/sample_test.cpp)
target_link_libraries(sample_test gtest gtest_main)

add_test(NAME SampleTest COMMAND sample_test)