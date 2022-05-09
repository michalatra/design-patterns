cmake_minimum_required(VERSION 3.21)
project(factory_method_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(factory_method_project main.cpp Chat.cpp Chat.h MessageFactory.cpp MessageFactory.h Message.cpp Message.h TextMessageFactory.cpp TextMessageFactory.h FileMessageFactory.cpp FileMessageFactory.h PictureMessageFactory.cpp PictureMessageFactory.h TextMessage.cpp TextMessage.h FileMessage.cpp FileMessage.h PictureMessage.cpp PictureMessage.h)
