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
}
