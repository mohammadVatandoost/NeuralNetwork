cmake_minimum_required(VERSION 3.1)
project (SimpleNN)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/googletest)

# enable_testing()


# set( Headers
#    Global.hpp
#    Neuron.hpp
#    CustomerData.hpp
# )

# set( Sources
#    main.cpp
# )

# add_library(${This} static ${Sources} ${Headers})


# add_executable("${PROJECT_NAME}" main.cpp)

# install(TARGETS "${PROJECT_NAME}" DESTINATION bin) # (CMAKE_INSTALL_PREFIX) /bin
# install(FILES main.cpp DESTINATION src) # (CMAKE_INSTALL_PREFIX) /src

