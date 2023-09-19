cmake_minimum_required(VERSION 3.26)
project(test_project C)

set(CMAKE_C_STANDARD 11)

add_executable(test_project main.c
        cinq_deux.c
        decla_exos.h
        six_trois.c
        six_quatre.c
        six_cinq.c
        six_six.c
        six_sept.c
        six_huit.c
)
