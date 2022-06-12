//
// Created by XPS-15 on 17.05.2022.
//

#include "Div.h"

void Div::show() {
    for (auto c: children)
        c->show();
}

void Div::addChild(Component *child) {
    children.push_back(child);
}
