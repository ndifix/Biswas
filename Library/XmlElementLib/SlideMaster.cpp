#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

SlideMaster::SlideMaster (
    ) : XmlRootElement("sldMaster", xmlns::presenta)
{
    this->commonSlideData.reset(new CommonSlideData());
    this->AddChildElement(this->commonSlideData);
}
