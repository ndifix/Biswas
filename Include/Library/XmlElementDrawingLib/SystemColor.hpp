#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class SystemColor  : public XmlElement {
private:
public:
    AttributeHexBinaryValue *LastColor;
    AttributeSystemColor *Val;
    SystemColor ();
};

}
