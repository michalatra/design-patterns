//
// Created by XPS-15 on 17.05.2022.
//

#ifndef ABSTRACT_FACTORY_PROJECT_SEARCHBOX_H
#define ABSTRACT_FACTORY_PROJECT_SEARCHBOX_H


#include <string>

class SearchBox {
public:
    virtual void renderSearchBox() = 0;
    virtual void handleSearch(std::string input) = 0;
};


#endif //ABSTRACT_FACTORY_PROJECT_SEARCHBOX_H
