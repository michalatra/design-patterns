cmake_minimum_required(VERSION 3.22)
project(composite_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(composite_project main.cpp Component.cpp Component.h TextBox.cpp TextBox.h Button.cpp Button.h Paragraph.cpp Paragraph.h Div.cpp Div.h WebsiteCreator.cpp WebsiteCreator.h)
