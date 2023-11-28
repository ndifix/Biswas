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

    shape->nonVisualShapeProperties->nonVisualDrawingProperties->Id->value = this->cNvPrs.size() + 2;
    this->cNvPrs.push_back(shape->nonVisualShapeProperties->nonVisualDrawingProperties);

    return shape;
}

Picture *
ShapeTree::AddPicture (
    )
{
    auto picture = new Picture();
    this->AddChildElement(picture);

    picture->nonVisualPictureProperties->nonVisualDrawingProperties->Id->value = this->cNvPrs.size() + 2;
    this->cNvPrs.push_back(picture->nonVisualPictureProperties->nonVisualDrawingProperties);

    return picture;
}
