#ifndef COMMAND_REGISTRATION_H
#define COMMAND_REGISTRATION_H

#include <string>

class Registration {
    int id;
    std::string subjectName;
    std::string subjectGroup;
public:
    Registration(const std::string &subjectName, const std::string &subjectGroup);

    Registration();

    const std::string &getSubjectName() const;

    void setSubjectName(const std::string &subjectName);

    const std::string &getSubjectGroup() const;

    void setSubjectGroup(const std::string &subjectGroup);

    int getId() const;

    void setId(int id);
};


#endif //COMMAND_REGISTRATION_H
