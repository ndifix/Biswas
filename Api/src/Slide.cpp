#include <Api/Presentation.hpp>

using namespace biswas;

TextBox
Slide::AddTextBox (
    ) const
{
    auto shape =  this->part->RootElement->commonSlideData->shapeTree->AddShape();
    return TextBox(shape);
}

Picture
Slide::AddPicture (
    ) const
{
    auto picture = this->part->RootElement->commonSlideData->shapeTree->AddPicture();
    return Picture(picture);
}
