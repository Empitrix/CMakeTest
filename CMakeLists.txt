cmake_minimum_required(VERSION 3.0)
project(CMakeTest)

set(SOURCES main.c)
set(TARGET "Release")
set(BOARD_TARGET "default-board")


if(DEFINED EXE)
	set(TARGET ${EXE})
	message(STATUS "Specified Target: ${TARGET}")
endif()


if(DEFINED Board)
	string(TOLOWER ${Board} BOARD_TARGET)
endif()


add_executable(${TARGET} ${SOURCES})

target_compile_definitions(${TARGET} PRIVATE Board="${BOARD_TARGET}")

