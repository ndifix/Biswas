#include <Library/XmlElementDrawingLib/ChildOffset.hpp>

using namespace OpenXml::Drawing;

ChildOffset::ChildOffset (
    ) : XmlElement("chOff", xmlns::drawingm)
{
    this->X = new AttributeInt64("x", 0);
    this->Y = new AttributeInt64("y", 0);
    this->AddAttribute(this->X);
    this->AddAttribute(this->Y);
}
