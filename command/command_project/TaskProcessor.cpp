//
// Created by michalatra on 10.06.22.
//

#include "TaskProcessor.h"

void TaskProcessor::runNextCommand() {
    if (!tasks->empty()) {
        Command* cmd = tasks->front();
        cmd->execute();
        tasks->pop();
    }
}

TaskProcessor::TaskProcessor() {
    tasks = new std::queue<Command*>();
}

void TaskProcessor::addCommand(Command *c) {
    tasks->push(c);
}
