#include <iostream>
#include "Chat.h"
#include "TextMessageFactory.h"
#include "FileMessageFactory.h"
#include "PictureMessageFactory.h"

int main() {
    Chat chat = Chat();

    TextMessageFactory* tms = new TextMessageFactory();
    FileMessageFactory* fmp = new FileMessageFactory();
    PictureMessageFactory* pms = new PictureMessageFactory();

    Message* message1 = chat.createMessage(tms);
    Message* message2 = chat.createMessage(fmp);
    Message* message3 = chat.createMessage(pms);

    message1->showContent();
    message2->showContent();
    message3->showContent();

    return 0;
}
