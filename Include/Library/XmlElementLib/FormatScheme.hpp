#ifndef XML_ELEMENT_LIB_FormatScheme
#define XML_ELEMENT_LIB_FormatScheme

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/LineStyleList.hpp>

namespace OpenXml::Drawing {

class FormatScheme : public XmlElement {
private:
    FillStyleList *fillStyleList;
    LineStyleList *lineStyleList;
public:
    Attribute *Name;
    FormatScheme();
};

}

#endif
