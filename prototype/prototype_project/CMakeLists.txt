cmake_minimum_required(VERSION 3.22)
project(prototype_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(prototype_project main.cpp Prototype.cpp Prototype.h Chat.cpp Chat.h ChatBubble.cpp ChatBubble.h)
