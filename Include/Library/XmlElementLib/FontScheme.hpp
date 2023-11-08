#ifndef XML_ELEMENT_LIB_FontScheme
#define XML_ELEMENT_LIB_FontScheme

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/MajorFont.hpp>

namespace OpenXml::Drawing {

class FontScheme : public XmlElement {
private:
    MajorFont *majorFont;
public:
    Attribute *Name;
    FontScheme();
};

}

#endif
