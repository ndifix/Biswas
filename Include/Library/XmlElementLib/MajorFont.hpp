#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/EastAsianFont.hpp>
#include <Library/XmlElementLib/LatinFont.hpp>

namespace OpenXml::Drawing {

class MajorFont : public XmlElement {
private:
    ComplexScriptFont *complexScriptFont;
    EastAsianFont *eastAsianFont;
    LatinFont *latinFont;
public:
    MajorFont();
};

}
