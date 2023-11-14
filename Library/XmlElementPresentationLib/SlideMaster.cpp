#include <Library/XmlRootElementLib.hpp>

using namespace OpenXml::Presentation;

SlideMaster::SlideMaster (
    ) : XmlRootElement("sldMaster", xmlns::presenta)
{
    this->colorMap = new ColorMap();
    this->commonSlideData = new CommonSlideData();
    this->slideLayoutIdList = new SlideLayoutIdList();
    this->AddChildElement(this->commonSlideData);
    this->AddChildElement(this->colorMap);
    this->AddChildElement(this->slideLayoutIdList);
}
