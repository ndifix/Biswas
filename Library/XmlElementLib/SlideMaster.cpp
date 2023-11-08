#include <Library/XmlRootElementLib.hpp>

using namespace OpenXml::Presentation;

SlideMaster::SlideMaster (
    ) : XmlRootElement("sldMaster", xmlns::presenta)
{
    this->colorMap = new ColorMap();
    this->commonSlideData = new CommonSlideData();
    this->AddChildElement(this->commonSlideData);
    this->AddChildElement(this->colorMap);
}
