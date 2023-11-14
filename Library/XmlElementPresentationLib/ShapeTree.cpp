#include <Library/XmlElementPresentationLib.hpp>

using namespace OpenXml::Presentation;

ShapeTree::ShapeTree (
    ) : XmlElement("spTree", xmlns::presenta)
{
    this->nonVisualGroupShapeProperties = new NonVisualGroupShapeProperties();
    this->AddChildElement(this->nonVisualGroupShapeProperties);
    this->groupShapeProperties = new GroupShapeProperties();
    this->AddChildElement(this->groupShapeProperties);
}

Shape *
ShapeTree::AddShape (
    )
{
    auto shape = new Shape();
    this->AddChildElement(shape);
    return shape;
}
