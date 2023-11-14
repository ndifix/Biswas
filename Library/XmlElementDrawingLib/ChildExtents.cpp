#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

ChildExtents::ChildExtents (
    ) : XmlElement("chExt", xmlns::drawingm)
{
    this->Cx = new Attribute("cx", "0");
    this->Cy = new Attribute("cy", "0");
    this->AddAttribute(this->Cx);
    this->AddAttribute(this->Cy);
}
