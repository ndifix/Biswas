#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/BodyProperties.hpp>

namespace OpenXml::Presentation {

class TextBody : public XmlElement {
private:
public:
    Drawing::BodyProperties *bodyProperties;

    TextBody();
};

}
