#pragma once

#include <Library/XmlBaseLib.hpp>

namespace OpenXml::Presentation {

class SlideSize : public XmlElement {
private:
public:
    AttributeInt32 *Cx;
    AttributeInt32 *Cy;
    SlideSize();
};

}
