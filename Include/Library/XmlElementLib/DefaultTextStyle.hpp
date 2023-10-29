#ifndef XML_ELEMENT_LIB_DEFAULTTEXTSTYLE
#define XML_ELEMENT_LIB_DEFAULTTEXTSTYLE

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class DefaultTextStyle : public XmlElement {
private:
public:
    inline DefaultTextStyle() : XmlElement("defaultTextStyle", xmlns::presenta) {};
};

}

#endif
