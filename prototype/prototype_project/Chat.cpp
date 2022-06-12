//
// Created by XPS-15 on 17.05.2022.
//

#include "Chat.h"
#include "ChatBubble.h"

Chat::Chat() {
    bubbles = std::vector<ChatBubble*>();
}

void Chat::addBubble(ChatBubble *bubble) {
    bubbles.push_back(bubble);
}

int Chat::getSize() {
    return bubbles.size();
}

void Chat::showBubbles() {
    for (auto b: bubbles)
        b->render();
}


