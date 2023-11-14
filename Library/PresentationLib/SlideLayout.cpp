#include <Library/PresentationLib.hpp>

using namespace biswas;

TextBox
SlideLayout::AddTextBox (
    ) const
{
    auto shape =  this->part->RootElement->commonSlideData->shapeTree->AddShape();
    return TextBox(shape);
}
