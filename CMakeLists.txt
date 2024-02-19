cmake_minimum_required(VERSION 3.12)
project(Simple-Terminal-Calculator)

set(SOURCE_FILES
	src/Main.cpp
)

add_executable(calc ${SOURCE_FILES})

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/bin)
