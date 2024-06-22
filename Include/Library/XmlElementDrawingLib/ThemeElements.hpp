#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/ColorScheme.hpp>
#include <Library/XmlElementDrawingLib/FontScheme.hpp>
#include <Library/XmlElementDrawingLib/FormatScheme.hpp>

namespace OpenXml::Drawing {

class ThemeElements : public XmlElement {
private:
public:
    ColorScheme *colorScheme;
    FontScheme *fontScheme;
    FormatScheme *formatScheme;
    ThemeElements();
};

}
