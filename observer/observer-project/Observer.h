//
// Created by XPS-15 on 09.05.2022.
//

#ifndef OBSERVER_PROJECT_OBSERVER_H
#define OBSERVER_PROJECT_OBSERVER_H

class EventEmitter;

class Observer {
public:
    virtual void update(EventEmitter* eventEmitter) = 0;
};

#endif //OBSERVER_PROJECT_OBSERVER_H
