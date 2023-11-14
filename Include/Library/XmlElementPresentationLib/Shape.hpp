#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementPresentationLib/NonVisualShapeProperties.hpp>
#include <Library/XmlElementPresentationLib/ShapeProperties.hpp>
#include <Library/XmlElementPresentationLib/TextBody.hpp>

namespace OpenXml::Presentation {

class Shape : public XmlElement {
private:
public:
    NonVisualShapeProperties *nonVisualShapeProperties;
    ShapeProperties *shapeProperties;
    TextBody *textBody;

    Shape();
};

}
