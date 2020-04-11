cmake_minimum_required(VERSION 3.15)
project(EventTriggerStateMachine C)

set(CMAKE_C_STANDARD 99)

add_executable(EventTriggerStateMachine main.c h_state.c h_state.h queue.c queue.h work.c work.h)