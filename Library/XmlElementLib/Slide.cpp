#include <Library/XmlRootElementLib.hpp>

using namespace OpenXml::Presentation;

Slide::Slide (
    ) : XmlRootElement("sld", xmlns::presenta)
{
    this->colorMapOverride = new ColorMapOverride();
    this->commonSlideData = new CommonSlideData();
    this->AddChildElement(this->commonSlideData);
    this->AddChildElement(this->colorMapOverride);
}
