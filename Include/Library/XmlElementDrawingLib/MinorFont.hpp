#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/ComplexScriptFont.hpp>
#include <Library/XmlElementDrawingLib/EastAsianFont.hpp>
#include <Library/XmlElementDrawingLib/LatinFont.hpp>
#include <Library/XmlElementDrawingLib/MinorFont.hpp>

namespace OpenXml::Drawing {

class MinorFont : public XmlElement {
private:
    ComplexScriptFont *complexScriptFont;
    EastAsianFont *eastAsianFont;
    LatinFont *latinFont;
public:
    MinorFont();
};

}
