
#ifndef COMMAND_TASKPROCESSOR_H
#define COMMAND_TASKPROCESSOR_H

#include <queue>
#include "Command.h"

class TaskProcessor {
    std::queue<Command*>* tasks;
public:
    TaskProcessor();

    void runNextCommand();
    void addCommand(Command* c);
};


#endif //COMMAND_TASKPROCESSOR_H
