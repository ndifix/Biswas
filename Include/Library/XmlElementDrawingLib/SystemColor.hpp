#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class SystemColor  : public XmlElement {
private:
public:
    Attribute *LastColor;
    Attribute *Val;
    SystemColor ();
};

}
