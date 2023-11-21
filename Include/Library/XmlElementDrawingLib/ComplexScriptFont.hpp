#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class ComplexScriptFont : public XmlElement {
private:
public:
    AttributeString *Typeface;
    ComplexScriptFont();
};

}
