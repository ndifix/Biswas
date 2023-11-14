#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementPresentationLib/NonVisualShapeProperties.hpp>
#include <Library/XmlElementPresentationLib/ShapeProperties.hpp>

namespace OpenXml::Presentation {

class Shape : public XmlElement {
private:
public:
    NonVisualShapeProperties *nonVisualShapeProperties;
    ShapeProperties *shapeProperties;

    Shape();
};

}
