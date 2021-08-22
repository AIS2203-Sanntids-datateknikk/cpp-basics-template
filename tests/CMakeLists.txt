
include_directories("${CMAKE_SOURCE_DIR}/include")

add_executable(test_exercise1 test_exercise1.cpp)

add_executable(test_exercise2 test_exercise2.cpp)

add_executable(test_exercise3 test_exercise3.cpp)
target_link_libraries(test_exercise3 PUBLIC exercise3)
