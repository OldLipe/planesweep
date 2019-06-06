cmake_minimum_required(VERSION 2.8)
project(plane_sweep)
add_executable(run ./src/main.cpp ./src/Ponto.cpp ./src/Intersects.cpp ./src/EventQueue.cpp ./src/PlaneSweep.cpp)
