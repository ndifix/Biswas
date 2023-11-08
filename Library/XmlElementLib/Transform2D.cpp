#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

Transform2D::Transform2D (
    ) : XmlElement("xfrm", xmlns::drawingm)
{
    this->childExtents = new ChildExtents();
    this->childOffset = new ChildOffset();
    this->extents = new Extents();
    this->offset = new Offset();
    this->AddChildElement(this->offset);
    this->AddChildElement(this->extents);
    this->AddChildElement(this->childOffset);
    this->AddChildElement(this->childExtents);
}
