#ifndef XML_ELEMENT_LIB_Outline
#define XML_ELEMENT_LIB_Outline

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class Outline : public XmlElement {
private:
public:
    inline Outline() : XmlElement("ln", xmlns::drawingm) {};
};

}

#endif
