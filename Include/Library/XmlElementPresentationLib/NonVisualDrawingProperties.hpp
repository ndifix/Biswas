#pragma once

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
