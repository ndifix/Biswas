#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

Offset::Offset (
    ) : XmlElement("off", xmlns::drawingm)
{
    this->X = new Attribute("x", "0");
    this->Y = new Attribute("y", "0");
    this->AddAttribute(this->X);
    this->AddAttribute(this->Y);
}
