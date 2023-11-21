#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class NonVisualDrawingProperties : public XmlElement {
private:
public:
    AttributeUint32 *Id;
    AttributeString *Name;
    NonVisualDrawingProperties();
};

}
