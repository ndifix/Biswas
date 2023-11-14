#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementPresentationLib/NonVisualShapeProperties.hpp>

namespace OpenXml::Presentation {

class Shape : public XmlElement {
private:
public:
    NonVisualShapeProperties *nonVisualShapeProperties;

    Shape();
};

}
