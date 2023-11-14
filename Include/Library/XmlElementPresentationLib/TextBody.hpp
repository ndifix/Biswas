#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/BodyProperties.hpp>
#include <Library/XmlElementDrawingLib/ListStyle.hpp>

namespace OpenXml::Presentation {

class TextBody : public XmlElement {
private:
public:
    Drawing::BodyProperties *bodyProperties;
    Drawing::ListStyle *listStyle;

    TextBody();
};

}
