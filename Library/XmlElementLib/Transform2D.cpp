#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

Transform2D::Transform2D (
    ) : XmlElement("xfrm", xmlns::drawingm)
{
    this->extents = new Extents();
    this->offset = new Offset();
    this->AddChildElement(this->offset);
    this->AddChildElement(this->extents);
}
