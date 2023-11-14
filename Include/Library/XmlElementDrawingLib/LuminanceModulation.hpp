#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class LuminanceModulation : public XmlElement {
private:
public:
    Attribute *Val;
    LuminanceModulation();
};

}
