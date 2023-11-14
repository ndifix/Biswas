#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementPresentationLib/NonVisualGroupShapeProperties.hpp>
#include <Library/XmlElementPresentationLib/GroupShapeProperties.hpp>

namespace OpenXml::Presentation {

class ShapeTree : public XmlElement {
private:
public:
    NonVisualGroupShapeProperties *nonVisualGroupShapeProperties;
    GroupShapeProperties *groupShapeProperties;
    ShapeTree();
};

}
