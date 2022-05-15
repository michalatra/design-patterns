//
// Created by XPS-15 on 10.05.2022.
//

#ifndef DECORATOR_PROJECT_PICTURE_H
#define DECORATOR_PROJECT_PICTURE_H

#include <string>

class Picture {
    int width;
    int height;
    std::string name;
    std::string pictureData;

public:
    Picture(int width, int height, const std::string &name, const std::string &pictureData);
    Picture();

    void setWidth(int width);

    void setHeight(int height);

    void setName(const std::string &name);

    void setPictureData(const std::string &pictureData);

    int getWidth() const;

    int getHeight() const;

    const std::string &getName() const;

    const std::string &getPictureData() const;
};


#endif //DECORATOR_PROJECT_PICTURE_H
