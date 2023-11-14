#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/Transform2D.hpp>

namespace OpenXml::Presentation {

class GroupShapeProperties : public XmlElement {
private:
public:
    Drawing::Transform2D *transformGroup;
    GroupShapeProperties();
};

}
