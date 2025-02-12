find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(UnitTests test_Fibonacci.cpp)
target_link_libraries(UnitTests ${GTEST_LIBRARIES} pthread)

add_test(NAME UnitTests COMMAND UnitTests)