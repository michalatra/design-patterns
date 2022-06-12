//
// Created by XPS-15 on 17.05.2022.
//

#include "WebsiteCreator.h"

void WebsiteCreator::render() {
    for (auto c: components)
        c->show();
}

void WebsiteCreator::addComponent(Component *c) {
    components.push_back(c);
}
