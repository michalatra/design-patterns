//
// Created by XPS-15 on 17.05.2022.
//

#ifndef COMPOSITE_PROJECT_DIV_H
#define COMPOSITE_PROJECT_DIV_H

#include <vector>
#include "Component.h"

class Div: public Component {
    std::vector<Component*> children;
public:
    void show() override;
    void addChild(Component* child);
};


#endif //COMPOSITE_PROJECT_DIV_H
