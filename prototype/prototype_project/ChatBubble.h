//
// Created by XPS-15 on 17.05.2022.
//

#ifndef PROTOTYPE_PROJECT_CHATBUBBLE_H
#define PROTOTYPE_PROJECT_CHATBUBBLE_H

#include <string>
#include "Prototype.h"

class ChatBubble: public Prototype {
    std::string backgroundColor;
    std::string textColor;
    std::string content;
    int textSize;
public:
    ChatBubble(const std::string &backgroundColor, const std::string &textColor, const std::string &content,
               int textSize);

    ChatBubble(const std::string &backgroundColor, const std::string &textColor, int textSize);

    void render();
    ChatBubble *clone() override;
    void setText(std::string text);

};


#endif //PROTOTYPE_PROJECT_CHATBUBBLE_H
