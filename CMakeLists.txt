cmake_minimum_required(VERSION 3.28)
project(Beast)

set(CMAKE_CXX_STANDARD 17)

add_library(Beast SHARED
#        Beast/src/Beast.h
        Beast/src/Beast/Core.h
        Beast/src/Beast/Application.cpp
        Beast/src/Beast/Application.h
        Beast/src/Beast/EntryPoint.h
        Beast/src/Beast/Log.cpp
        Beast/src/Beast/Log.h
        Beast/src/Beast/Events/Event.h
        Beast/src/Beast/Events/ApplicationEvent.h
        Beast/src/Beast/Events/KeyEvent.h
        Beast/src/Beast/Events/MouseEvent.h
        Beast/src/bspch.cpp
        Beast/src/bspch.h
        Beast/src/Beast/Window.h
        Beast/src/Platform/Mac/MacWindow.cpp
        Beast/src/Platform/Mac/MacWindow.h)

target_precompile_headers(Beast PUBLIC "${PROJECT_SOURCE_DIR}/Beast/src/bspch.h")

target_include_directories(Beast PUBLIC "${PROJECT_SOURCE_DIR}/Beast/src")
# Include the spdlog library
add_subdirectory(Beast/vendor/spdlog)
add_subdirectory(Beast/vendor/glfw)
# Link the spdlog library to the executable
target_link_libraries(Beast PRIVATE spdlog)
target_link_libraries(Beast PRIVATE glfw)

add_executable(SandboxApp Sandbox/src/SandboxApp.cpp)

target_include_directories(SandboxApp PUBLIC "${PROJECT_SOURCE_DIR}/Beast/src")
target_include_directories(SandboxApp PUBLIC "${PROJECT_SOURCE_DIR}/Beast/vendor/spdlog/include")
target_include_directories(SandboxApp PUBLIC "${PROJECT_SOURCE_DIR}/Beast/vendor/glfw/include")

target_link_libraries(SandboxApp Beast)

