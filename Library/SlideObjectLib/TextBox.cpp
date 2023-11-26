#include <Library/SlideObjectLib.hpp>
#include <Library/XmlElementDrawingLib.hpp>

using namespace biswas;

TextBox::TextBox (
    OpenXml::Presentation::Shape* textBox
    )
{
    this->shape = textBox;
    this->shape->textBody->bodyProperties->AddChildElement(new OpenXml::Drawing::NoAutoFit());
    this->shape->nonVisualShapeProperties->nonVisualShapeDrawingProperties->TextBox->value = true;

    auto presetGeometry = new OpenXml::Drawing::PresetGeometry();
    presetGeometry->Preset->value = ShapeTypeValues::Rectangle;
    this->shape->shapeProperties->AddChildElement(presetGeometry);

    auto paragraph = new OpenXml::Drawing::Paragraph();
    this->shape->textBody->AddChildElement(paragraph);
    this->paragraph.reset(new Paragraph(paragraph));
}

void
TextBox::SetSize (
    int64_t cx,
    int64_t cy
    )
{
    this->shape->shapeProperties->transform2D->extents->Cx->value = cx;
    this->shape->shapeProperties->transform2D->extents->Cy->value = cy;
}

void
TextBox::SetPosition (
    int64_t x,
    int64_t y
    )
{
    this->shape->shapeProperties->transform2D->offset->X->value = x;
    this->shape->shapeProperties->transform2D->offset->Y->value = y;
}
