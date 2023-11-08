#ifndef XML_ELEMENT_LIB_SolidFill
#define XML_ELEMENT_LIB_SolidFill

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class SolidFill : public XmlElement {
private:
public:
    inline SolidFill() : XmlElement("solidFill", xmlns::drawingm) {};
};

}

#endif
