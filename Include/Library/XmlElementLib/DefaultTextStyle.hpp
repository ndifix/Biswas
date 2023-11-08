#ifndef XML_ELEMENT_LIB_DEFAULTTEXTSTYLE
#define XML_ELEMENT_LIB_DEFAULTTEXTSTYLE

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class DefaultTextStyle : public XmlElement {
private:
public:
    inline DefaultTextStyle() : XmlElement("defaultTextStyle", xmlns::presenta) {};
};

}

#endif
