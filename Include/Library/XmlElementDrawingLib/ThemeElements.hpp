#pragma once

#include <Library/XmlBaseLib.hpp>

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
