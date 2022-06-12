//
// Created by XPS-15 on 17.05.2022.
//

#ifndef COMPOSITE_PROJECT_WEBSITECREATOR_H
#define COMPOSITE_PROJECT_WEBSITECREATOR_H

#include <vector>
#include "Component.h"

class WebsiteCreator {
    std::vector<Component*> components;

public:
    void render();
    void addComponent(Component* c);
};


#endif //COMPOSITE_PROJECT_WEBSITECREATOR_H
