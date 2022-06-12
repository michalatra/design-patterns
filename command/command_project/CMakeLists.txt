cmake_minimum_required(VERSION 3.22)
project(command)

set(CMAKE_CXX_STANDARD 14)

add_executable(command main.cpp Command.cpp Command.h RegisterCommand.cpp RegisterCommand.h UnregisterCommand.cpp UnregisterCommand.h Registration.cpp Registration.h TaskProcessor.cpp TaskProcessor.h DbConnector.cpp DbConnector.h SystemRejestracji.cpp SystemRejestracji.h)
