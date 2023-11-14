#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class SaturationModulation : public XmlElement {
private:
public:
    Attribute *Val;
    SaturationModulation();
};

}
