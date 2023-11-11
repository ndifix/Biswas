#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class DefaultTextStyle : public XmlElement {
private:
public:
    inline DefaultTextStyle() : XmlElement("defaultTextStyle", xmlns::presenta) {};
};

}
