#ifndef XML_ELEMENT_LIB_ApplicationNonVisualDrawingProperties
#define XML_ELEMENT_LIB_ApplicationNonVisualDrawingProperties

#include <Library/XmlBaseLib.hpp>

namespace xmlElm {

class ApplicationNonVisualDrawingProperties : public XmlElement {
private:
public:
    inline ApplicationNonVisualDrawingProperties() : XmlElement("nvPr", xmlns::presenta) {};
};

}

#endif
