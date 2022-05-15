//
// Created by XPS-15 on 10.05.2022.
//

#include "Picture.h"

Picture::Picture(int width, int height, const std::string &name, const std::string &pictureData) : width(width),
                                                                                                   height(height),
                                                                                                   name(name),
                                                                                                   pictureData(
                                                                                                           pictureData) {}

Picture::Picture() {}

int Picture::getWidth() const {
    return width;
}

int Picture::getHeight() const {
    return height;
}

const std::string &Picture::getName() const {
    return name;
}

const std::string &Picture::getPictureData() const {
    return pictureData;
}

void Picture::setWidth(int width) {
    Picture::width = width;
}

void Picture::setHeight(int height) {
    Picture::height = height;
}

void Picture::setName(const std::string &name) {
    Picture::name = name;
}

void Picture::setPictureData(const std::string &pictureData) {
    Picture::pictureData = pictureData;
}
