set(BINARY ${CMAKE_PROJECT_NAME}_test)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

set(SOURCES ${TEST_SOURCES})

add_executable(${BINARY} ${TEST_SOURCES})

add_test(NAME ${BINARY} COMMAND ${BINARY})

target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest)


# cmake_minimum_required(VERSION 3.1)
# set(This SimpleNNTests)

# set( Sources
#    NeuronTest.cpp
# )

# add_executable(${This} ${Sources})

# target_link_libraries(${This} PUBLIC
#     gtest_main
#     SimpleNN
# )


# add_test(
#     NAME ${This}
#     COMMAND ${This}
# )


