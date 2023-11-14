#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class LinearGradientFill : public XmlElement {
private:
public:
    Attribute *Angle;
    Attribute *Scaled;
    LinearGradientFill();
};

}
