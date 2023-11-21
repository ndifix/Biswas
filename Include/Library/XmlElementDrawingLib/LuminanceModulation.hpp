#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class LuminanceModulation : public XmlElement {
private:
public:
    AttributeInt32 *Val;
    LuminanceModulation();
};

}
