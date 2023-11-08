#ifndef XML_ELEMENT_LIB_GradientFill
#define XML_ELEMENT_LIB_GradientFill

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class GradientFill : public XmlElement {
private:
public:
    inline GradientFill() : XmlElement("gradFill", xmlns::drawingm) {};
};

}

#endif
