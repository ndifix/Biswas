#include <Library/XmlElementDrawingLib/Transform2D.hpp>

using namespace OpenXml::Drawing;

Transform2D::Transform2D (
    ) : XmlElement("xfrm", xmlns::drawingm)
{
    this->extents = new Extents();
    this->offset = new Offset();
    this->AddChildElement(this->offset);
    this->AddChildElement(this->extents);
}
