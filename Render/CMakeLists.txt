cmake_minimum_required(VERSION 3.12)


set(RENDER_PROJECT_NAME Render)

project(${RENDER_PROJECT_NAME})

set(RENDER_SOURCES
        Render.cpp
        Render.hpp)

add_library(${RENDER_PROJECT_NAME} STATIC
        ${RENDER_SOURCES})

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES
        ${RENDER_SOURCES}
        )

add_subdirectory(../dependencies/glfw ${CMAKE_CURRENT_BINARY_DIR}/glfw)
target_link_libraries(${RENDER_PROJECT_NAME} glfw)

if (APPLE)
    target_link_libraries(${RENDER_PROJECT_NAME} "-framework OpenGL")
endif()



