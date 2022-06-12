#include "Registration.h"

Registration::Registration() {}

const std::string &Registration::getSubjectName() const {
    return subjectName;
}

void Registration::setSubjectName(const std::string &subjectName) {
    Registration::subjectName = subjectName;
}

const std::string &Registration::getSubjectGroup() const {
    return subjectGroup;
}

void Registration::setSubjectGroup(const std::string &subjectGroup) {
    Registration::subjectGroup = subjectGroup;
}

Registration::Registration(const std::string &subjectName, const std::string &subjectGroup) :   subjectName(
                                                                                                          subjectName),
                                                                                              subjectGroup(
                                                                                                          subjectGroup) {}

int Registration::getId() const {
    return id;
}

void Registration::setId(int id) {
    Registration::id = id;
}

