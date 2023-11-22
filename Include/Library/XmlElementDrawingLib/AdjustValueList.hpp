#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class AdjustValueList : public XmlElement {
private:
public:
    inline AdjustValueList() : XmlElement("avLst", xmlns::drawingm) {};
};

}
