#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class Shade  : public XmlElement {
private:
public:
    Attribute *Val;
    Shade ();
};

}
