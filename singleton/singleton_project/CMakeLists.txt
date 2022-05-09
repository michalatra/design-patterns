cmake_minimum_required(VERSION 3.22)
project(singleton_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(singleton_project main.cpp User.cpp User.h DBConnector.cpp DBConnector.h RegisterHandler.cpp RegisterHandler.h LoginHandler.cpp LoginHandler.h SomeFancyApp.cpp SomeFancyApp.h)
