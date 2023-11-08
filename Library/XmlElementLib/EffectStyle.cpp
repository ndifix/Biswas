#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

EffectStyle::EffectStyle (
    ) : XmlElement("effectStyle", xmlns::drawingm)
{
    this->AddChildElement(new EffectList());
}
