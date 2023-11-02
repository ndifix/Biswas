#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

Transform2D::Transform2D (
    ) : XmlElement("xfrm", xmlns::drawingm)
{
    this->extents = new Extents();
    this->AddChildElement(this->extents);
}
