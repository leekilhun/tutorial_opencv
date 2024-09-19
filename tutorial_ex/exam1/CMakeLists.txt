cmake_minimum_required(VERSION 3.10)

project(exam1)

#set(OpenCV_DIR C:/DevSoft/opencv/opencv/build)
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})