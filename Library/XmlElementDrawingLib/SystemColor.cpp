#include <Library/XmlElementDrawingLib/SystemColor.hpp>

using namespace OpenXml::Drawing;

SystemColor::SystemColor (
    ) : XmlElement("sysClr", xmlns::drawingm)
{
    this->LastColor = new AttributeHexBinaryValue("lastClr");
    this->Val = new AttributeSystemColor("val");
    this->AddAttribute(this->Val);
    this->AddAttribute(this->LastColor);
}
