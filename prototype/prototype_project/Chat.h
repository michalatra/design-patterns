//
// Created by XPS-15 on 17.05.2022.
//

#ifndef PROTOTYPE_PROJECT_CHAT_H
#define PROTOTYPE_PROJECT_CHAT_H


#include "Prototype.h"
#include "ChatBubble.h"
#include <vector>

class Chat {
    std::vector<ChatBubble*> bubbles;

public:
    Chat();
    void addBubble(ChatBubble* bubble);
    void showBubbles();
    int getSize();
};


#endif //PROTOTYPE_PROJECT_CHAT_H
