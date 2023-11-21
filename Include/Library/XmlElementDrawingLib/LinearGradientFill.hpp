#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class LinearGradientFill : public XmlElement {
private:
public:
    AttributeInt32 *Angle;
    AttributeBool *Scaled;
    LinearGradientFill();
};

}
