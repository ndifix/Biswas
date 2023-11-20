#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

ChildExtents::ChildExtents (
    ) : XmlElement("chExt", xmlns::drawingm)
{
    this->Cx = new AttributeInt64("cx", 0);
    this->Cy = new AttributeInt64("cy", 0);
    this->AddAttribute(this->Cx);
    this->AddAttribute(this->Cy);
}
