#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class ApplicationNonVisualDrawingProperties : public XmlElement {
private:
public:
    inline ApplicationNonVisualDrawingProperties() : XmlElement("nvPr", xmlns::presenta) {};
};

}
