#include <Library/XmlElementDrawingLib/SchemeColor.hpp>

using namespace OpenXml::Drawing;

SchemeColor::SchemeColor (
    ) : XmlElement("schemeClr", xmlns::drawingm)
{
    this->Val = new AttributeSchemeColor("val");
    this->AddAttribute(this->Val);
}
