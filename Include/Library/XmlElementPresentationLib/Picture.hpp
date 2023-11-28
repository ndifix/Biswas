#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementPresentationLib/ShapeProperties.hpp>

namespace OpenXml::Presentation {

class Picture : public XmlElement {
private:
public:
    ShapeProperties *shapeProperties;

    Picture();
};

}
