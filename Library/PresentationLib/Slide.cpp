#include <Library/PresentationLib.hpp>

using namespace biswas;

TextBox
Slide::AddTextBox (
    ) const
{
    auto shape =  this->part->RootElement->commonSlideData->shapeTree->AddShape();
    return TextBox(shape);
}
