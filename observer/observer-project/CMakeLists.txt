cmake_minimum_required(VERSION 3.22)
project(observer_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(observer_project main.cpp EventEmitter.cpp EventEmitter.h TrafficLights.cpp TrafficLights.h Observer.cpp Observer.h SelfDrivingCar.cpp SelfDrivingCar.h)
