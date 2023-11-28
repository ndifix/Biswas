#include <Api/SlideObject.hpp>

using namespace biswas;

Picture::Picture (
    OpenXml::Presentation::Picture* picture
    )
{
    this->picture = picture;
}
