#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class Tint : public XmlElement {
private:
public:
    Attribute *Val;
    Tint();
};

}
