cmake_minimum_required(VERSION 3.26)

set(RENDER_PROJECT_NAME Render)

add_library(${RENDER_PROJECT_NAME} STATIC
            Render.cpp
            Render.h)
