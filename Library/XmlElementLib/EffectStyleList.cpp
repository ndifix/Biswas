#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

EffectStyleList::EffectStyleList (
    ) : XmlElement("effectStyleLst", xmlns::drawingm)
{
    this->effectStyle1 = new EffectStyle();
    this->effectStyle2 = new EffectStyle();
    this->effectStyle3 = new EffectStyle();
    this->AddChildElement(this->effectStyle1);
    this->AddChildElement(this->effectStyle2);
    this->AddChildElement(this->effectStyle3);
}
