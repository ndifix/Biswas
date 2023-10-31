#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

ShapeTree::ShapeTree (
    ) : XmlElement("spTree", xmlns::presenta)
{
    this->nonVisualGroupShapeProperties.reset(new NonVisualGroupShapeProperties());
    this->AddChildElement(this->nonVisualGroupShapeProperties);
}
