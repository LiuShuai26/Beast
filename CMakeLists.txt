cmake_minimum_required(VERSION 3.28)
project(Beast)

set(CMAKE_CXX_STANDARD 17)

# Include the spdlog library
add_subdirectory(Beast/vendor/spdlog)

add_executable(SandboxApp Sandbox/src/SandboxApp.cpp)

add_library(Test_lib SHARED
#        Beast/src/Beast.h
        Beast/src/Beast/Core.h
        Beast/src/Beast/Application.cpp
        Beast/src/Beast/Application.h
        Beast/src/Beast/EntryPoint.h
        Beast/src/Beast/Log.cpp
        Beast/src/Beast/Log.h)

# Link the spdlog library to the executable
target_link_libraries(Test_lib PRIVATE spdlog)

target_include_directories(SandboxApp PUBLIC "${PROJECT_SOURCE_DIR}/Beast/src")
target_include_directories(SandboxApp PUBLIC "${PROJECT_SOURCE_DIR}/Beast/vendor/spdlog/include")

#target_include_directories(SandboxApp PUBLIC "${PROJECT_SOURCE_DIR}/Beast/src" "${PROJECT_SOURCE_DIR}/Beast/vendor/spdlog/include")
target_link_libraries(SandboxApp Test_lib)

