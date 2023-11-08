#ifndef XML_ELEMENT_LIB_SystemColor
#define XML_ELEMENT_LIB_SystemColor

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class SystemColor  : public XmlElement {
private:
public:
    Attribute *LastColor;
    Attribute *Val;
    SystemColor ();
};

}

#endif
