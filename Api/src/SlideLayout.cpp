#include <Api/Presentation.hpp>

using namespace biswas;

TextBox
SlideLayout::AddTextBox (
    ) const
{
    auto shape =  this->part->RootElement->commonSlideData->shapeTree->AddShape();
    return TextBox(shape);
}

Picture
SlideLayout::AddPicture (
    ) const
{
    auto picture = this->part->RootElement->commonSlideData->shapeTree->AddPicture();
    return Picture(picture);
}
