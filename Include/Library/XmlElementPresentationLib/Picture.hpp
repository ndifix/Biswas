#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementPresentationLib/ShapeProperties.hpp>
#include <Library/XmlElementPresentationLib/NonVisualPictureProperties.hpp>

namespace OpenXml::Presentation {

class Picture : public XmlElement {
private:
public:
    NonVisualPictureProperties *nonVisualPictureProperties;
    ShapeProperties *shapeProperties;

    Picture();
};

}
