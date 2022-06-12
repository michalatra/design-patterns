#include "DbConnector.h"

DbConnector* DbConnector::instance = nullptr;

DbConnector::DbConnector() {
    registrations = new std::vector<Registration*>();
    topIdx = 0;
}

DbConnector *DbConnector::getInstance() {
    if (instance == nullptr)
        instance = new DbConnector();
    return instance;
}

Registration *DbConnector::addRegistration(Registration *r) {
    r->setId(topIdx++);
    registrations->push_back(r);
    return r;
}

Registration *DbConnector::deleteRegistration(int regId) {
    for (auto r = registrations->begin(); r != registrations->end(); r++) {
        if ((*r)->getId() == regId) {
            registrations->erase(r);
            return *r;
        }
    }

    return nullptr;
}

Registration *DbConnector::getRegistrationById(int regId) {
    for (auto r: *registrations) {
        if (r->getId() == regId)
            return r;
    }
    return nullptr;
}
