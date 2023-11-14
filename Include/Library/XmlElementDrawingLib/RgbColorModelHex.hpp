#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class RgbColorModelHex  : public XmlElement {
private:
public:
    Attribute *Val;
    RgbColorModelHex ();
};

}
