#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/EffectStyle.hpp>

namespace OpenXml::Drawing {

class EffectList : public XmlElement {
private:
public:
    inline EffectList() : XmlElement("effectLst", xmlns::drawingm) {};
};

}