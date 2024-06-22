#include <Library/XmlElementPresentationLib/ShapeTree.hpp>

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

    shape->nonVisualShapeProperties->nonVisualDrawingProperties->Id->value = this->shapes.size() + 2;
    this->shapes.push_back(shape);

    return shape;
}
