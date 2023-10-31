#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

ShapeTree::ShapeTree (
    ) : XmlElement("spTree", xmlns::presenta)
{
    this->nonVisualGroupShapeProperties = new NonVisualGroupShapeProperties();
    this->AddChildElement(this->nonVisualGroupShapeProperties);
    this->groupShapeProperties = new GroupShapeProperties();
    this->AddChildElement(this->groupShapeProperties);
}
