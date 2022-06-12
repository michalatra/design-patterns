//
// Created by XPS-15 on 17.05.2022.
//

#ifndef ABSTRACT_FACTORY_PROJECT_CLIENTSEARCHBOX_H
#define ABSTRACT_FACTORY_PROJECT_CLIENTSEARCHBOX_H


#include "SearchBox.h"

class ClientSearchBox: public SearchBox {
public:
    void renderSearchBox() override;

    void handleSearch(std::string input) override;
};


#endif //ABSTRACT_FACTORY_PROJECT_CLIENTSEARCHBOX_H
