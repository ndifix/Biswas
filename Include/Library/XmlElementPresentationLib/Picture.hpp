#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementPresentationLib/BlipFill.hpp>
#include <Library/XmlElementPresentationLib/ShapeProperties.hpp>
#include <Library/XmlElementPresentationLib/NonVisualPictureProperties.hpp>

namespace OpenXml::Presentation {

class Picture : public XmlElement {
private:
public:
    BlipFill *blipFill;
    NonVisualPictureProperties *nonVisualPictureProperties;
    ShapeProperties *shapeProperties;

    Picture();
};

}
