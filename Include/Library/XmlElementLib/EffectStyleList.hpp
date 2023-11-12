#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/EffectStyle.hpp>

namespace OpenXml::Drawing {

class EffectStyleList : public XmlElement {
private:
    EffectStyle *effectStyle1;
    EffectStyle *effectStyle2;
    EffectStyle *effectStyle3;
public:
    EffectStyleList();
};

}