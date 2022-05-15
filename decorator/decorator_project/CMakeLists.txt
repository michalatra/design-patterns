cmake_minimum_required(VERSION 3.22)
project(decorator_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(decorator_project main.cpp Picture.cpp Picture.h ICamera.cpp ICamera.h Camera.cpp Camera.h CameraDecorator.cpp CameraDecorator.h ContrastDecorator.cpp ContrastDecorator.h SaturationDecorator.cpp SaturationDecorator.h BrightnessDecorator.cpp BrightnessDecorator.h)
