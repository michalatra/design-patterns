cmake_minimum_required(VERSION 3.21)
project(fasade_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(fasade_project main.cpp Engine.cpp Engine.h Gearbox.cpp Gearbox.h Cooler.cpp Cooler.h FuelInjector.cpp FuelInjector.h EngineThermometer.cpp EngineThermometer.h Speedometer.cpp Speedometer.h CoolerFan.cpp CoolerFan.h CoolerPump.cpp CoolerPump.h VCU.cpp VCU.h)
