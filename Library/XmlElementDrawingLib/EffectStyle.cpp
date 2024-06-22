#include <Library/XmlElementDrawingLib/EffectList.hpp>
#include <Library/XmlElementDrawingLib/EffectStyle.hpp>

using namespace OpenXml::Drawing;

EffectStyle::EffectStyle (
    ) : XmlElement("effectStyle", xmlns::drawingm)
{
    this->AddChildElement(new EffectList());
}
