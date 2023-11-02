#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

Extents::Extents (
    ) : XmlElement("ext", xmlns::drawingm)
{
    this->Cx = new Attribute("cx");
    this->Cy = new Attribute("cy");
    this->Cx->val = "0";
    this->Cy->val = "0";
    this->AddAttribute(this->Cx);
    this->AddAttribute(this->Cy);
}
