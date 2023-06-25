cmake_minimum_required(VERSION 3.26)

set(APP_PROJECT_NAME App)


add_executable(App main.cpp)

add_subdirectory(${PROJECT_SOURCE_DIR}/../Render Render)

target_link_libraries(App Render)

