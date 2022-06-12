#include <iostream>
#include "WebsiteCreator.h"
#include "TextBox.h"
#include "Button.h"
#include "Paragraph.h"
#include "Div.h"

int main() {
    WebsiteCreator creator = WebsiteCreator();

    Component* textBox = new TextBox("Text box content inside div");
    Component* button = new Button("Text box content inside div");
    Component* paragraph = new Paragraph("Text box content inside div");

    Div* div = new Div();
    div->addChild(textBox);
    div->addChild(button);
    div->addChild(paragraph);

    Component* paragraphOutside = new Paragraph("Text box content outside div");

    creator.addComponent(div);
    creator.addComponent(paragraphOutside);

    creator.render();

    return 0;
}
