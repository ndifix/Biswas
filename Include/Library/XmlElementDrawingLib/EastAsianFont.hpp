#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class EastAsianFont : public XmlElement {
private:
public:
    AttributeString *Typeface;
    EastAsianFont();
};

}
