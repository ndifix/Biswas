#include <Library/XmlElementDrawingLib/Blip.hpp>

using namespace OpenXml::Drawing;

Blip::Blip (
    ) : XmlElement("blip", xmlns::drawingm)
{
    this->embed = new AttributeString("embed", xmlns::relation);
    this->AddAttribute(this->embed);
}
