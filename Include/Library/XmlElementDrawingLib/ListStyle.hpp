#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class ListStyle : public XmlElement {
private:
public:
    inline ListStyle() : XmlElement("lstStyle", xmlns::drawingm) {};
};

}
