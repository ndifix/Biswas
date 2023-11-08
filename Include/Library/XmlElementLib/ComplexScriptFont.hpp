#ifndef XML_ELEMENT_LIB_ComplexScriptFont
#define XML_ELEMENT_LIB_ComplexScriptFont

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class ComplexScriptFont : public XmlElement {
private:
public:
    Attribute *Typeface;
    ComplexScriptFont();
};

}

#endif
