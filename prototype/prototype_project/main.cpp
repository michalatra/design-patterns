#include <iostream>
#include "ChatBubble.h"
#include "Chat.h"

int main() {
    Chat* chat = new Chat();
    ChatBubble* chatBubble = new ChatBubble("#666", "#eee", "Content", 14);

    chat->addBubble(chatBubble);
    chat->addBubble(chatBubble->clone());
    chat->addBubble(chatBubble->clone());
    chat->addBubble(chatBubble->clone());

    chat->showBubbles();

    return 0;
}
