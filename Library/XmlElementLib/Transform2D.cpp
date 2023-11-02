#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

Transform2D::Transform2D (
    ) : XmlElement("xfrm", xmlns::drawingm)
{
    this->childOffset = new ChildOffset();
    this->extents = new Extents();
    this->offset = new Offset();
    this->AddChildElement(this->offset);
    this->AddChildElement(this->extents);
    this->AddChildElement(this->childOffset);
}
