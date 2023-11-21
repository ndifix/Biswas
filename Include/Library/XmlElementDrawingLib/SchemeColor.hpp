#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class SchemeColor : public XmlElement {
private:
public:
    AttributeSchemeColor *Val;
    SchemeColor();
};

}
