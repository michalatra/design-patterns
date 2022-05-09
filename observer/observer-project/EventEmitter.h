//
// Created by XPS-15 on 09.05.2022.
//

#ifndef OBSERVER_PROJECT_EVENTEMITTER_H
#define OBSERVER_PROJECT_EVENTEMITTER_H
#include <vector>
#include "Observer.h"

class EventEmitter {
public:
    virtual void subscribe(Observer* observer) = 0;
    virtual void unsubscribe(Observer* observer) = 0;
    virtual void notify() = 0;
};


#endif //OBSERVER_PROJECT_EVENTEMITTER_H
