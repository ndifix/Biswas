#include <Library/XmlElementDrawingLib/Shade.hpp>

using namespace OpenXml::Drawing;

Shade::Shade (
    ) : XmlElement("shade", xmlns::drawingm)
{
    this->Val = new AttributeInt32("val");
    this->AddAttribute(this->Val);
}
