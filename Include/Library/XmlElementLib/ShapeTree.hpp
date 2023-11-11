#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/NonVisualGroupShapeProperties.hpp>
#include <Library/XmlElementLib/GroupShapeProperties.hpp>

namespace OpenXml::Presentation {

class ShapeTree : public XmlElement {
private:
public:
    NonVisualGroupShapeProperties *nonVisualGroupShapeProperties;
    GroupShapeProperties *groupShapeProperties;
    ShapeTree();
};

}
