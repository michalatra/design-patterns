//
// Created by XPS-15 on 17.05.2022.
//

#include <iostream>
#include "ChatBubble.h"

ChatBubble::ChatBubble(const std::string &backgroundColor, const std::string &textColor, const std::string &content,
                       int textSize) : backgroundColor(backgroundColor), textColor(textColor), content(content),
                                       textSize(textSize) {}

ChatBubble *ChatBubble::clone() {
    return new ChatBubble(backgroundColor, textColor, textSize);
}

ChatBubble::ChatBubble(const std::string &backgroundColor, const std::string &textColor, int textSize)
        : backgroundColor(backgroundColor), textColor(textColor), textSize(textSize) {}

void ChatBubble::render() {
    std::cout<<"---------------------------------\n";
    std::cout<<"Background: "<<backgroundColor<<"\n";
    std::cout<<"Color: "<<textColor<<"\n";
    std::cout<<"Size: "<<textSize<<"\n";
    std::cout<<"Content: "<<content<<"\n";
    std::cout<<"---------------------------------\n";
}

void ChatBubble::setText(std::string text) {
    content = text;
}
