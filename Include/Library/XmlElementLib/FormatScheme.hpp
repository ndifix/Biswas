#ifndef XML_ELEMENT_LIB_FormatScheme
#define XML_ELEMENT_LIB_FormatScheme

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class FormatScheme : public XmlElement {
private:
    FillStyleList *fillStyleList;
public:
    Attribute *Name;
    FormatScheme();
};

}

#endif
