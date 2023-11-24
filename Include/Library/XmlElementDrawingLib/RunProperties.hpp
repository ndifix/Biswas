#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Drawing {

class RunProperties : public XmlElement {
private:
public:
    AttributeInt32 *Baseline;
    AttributeBool *Bold;
    AttributeInt32 *FontSize;
    AttributeBool *Italic;

    RunProperties();
};

}
