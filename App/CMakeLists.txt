cmake_minimum_required(VERSION 3.12)

set(APP_PROJECT_NAME App)

project(${APP_PROJECT_NAME})

add_executable(${APP_PROJECT_NAME}
        main.cpp)


include_directories(SYSTEM ../Render)

target_link_libraries(${APP_PROJECT_NAME} Render)
