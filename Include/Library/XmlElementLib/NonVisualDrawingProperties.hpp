#ifndef XML_ELEMENT_LIB_NonVisualDrawingProperties
#define XML_ELEMENT_LIB_NonVisualDrawingProperties

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class NonVisualDrawingProperties : public XmlElement {
private:
public:
    Attribute *Id;
    Attribute *Name;
    NonVisualDrawingProperties();
};

}

#endif
