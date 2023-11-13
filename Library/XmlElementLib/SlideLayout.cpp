#include <Library/XmlRootElementLib.hpp>

using namespace OpenXml::Presentation;

SlideLayout::SlideLayout (
    ) : XmlRootElement("sldLayout", xmlns::presenta)
{
    this->colorMapOverride = new ColorMapOverride();
    this->commonSlideData = new CommonSlideData();
    this->AddChildElement(this->commonSlideData);
    this->AddChildElement(this->colorMapOverride);
}
