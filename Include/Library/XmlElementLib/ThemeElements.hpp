#ifndef XML_ELEMENT_LIB_ThemeElements
#define XML_ELEMENT_LIB_ThemeElements

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

#endif
