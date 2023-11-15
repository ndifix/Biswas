#include <Library/SlideObjectLib.hpp>
#include <Library/XmlElementDrawingLib.hpp>

using namespace biswas;

TextBox::TextBox (
    OpenXml::Presentation::Shape* textBox
    )
{
    this->shape = textBox;
    this->shape->textBody->bodyProperties->AddChildElement(new OpenXml::Drawing::NoAutoFit());
}
