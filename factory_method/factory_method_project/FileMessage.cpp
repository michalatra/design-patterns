//
// Created by micha on 09.05.2022.
//

#include <iostream>
#include "FileMessage.h"

void FileMessage::showContent() {
    std::cout<<fileContent<<"\n";
}

FileMessage::FileMessage() {
    fileContent = "This is file message content";
}
