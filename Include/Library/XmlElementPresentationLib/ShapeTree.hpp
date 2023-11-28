#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementPresentationLib/NonVisualGroupShapeProperties.hpp>
#include <Library/XmlElementPresentationLib/GroupShapeProperties.hpp>
#include <Library/XmlElementPresentationLib/Picture.hpp>
#include <Library/XmlElementPresentationLib/Shape.hpp>

namespace OpenXml::Presentation {

class ShapeTree : public XmlElement {
private:
    std::list<NonVisualDrawingProperties*> cNvPrs;
public:
    NonVisualGroupShapeProperties *nonVisualGroupShapeProperties;
    GroupShapeProperties *groupShapeProperties;
    ShapeTree();

    Shape *
    AddShape (
        );

    Picture *
    AddPicture (
        );
};

}
