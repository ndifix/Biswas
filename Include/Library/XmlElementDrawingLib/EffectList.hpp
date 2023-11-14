#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class EffectList : public XmlElement {
private:
public:
    inline EffectList() : XmlElement("effectLst", xmlns::drawingm) {};
};

}
