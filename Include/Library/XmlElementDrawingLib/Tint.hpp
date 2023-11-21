#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class Tint : public XmlElement {
private:
public:
    AttributeInt32 *Val;
    Tint();
};

}
