#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class LatinFont : public XmlElement {
private:
public:
    Attribute *Typeface;
    LatinFont();
};

}
