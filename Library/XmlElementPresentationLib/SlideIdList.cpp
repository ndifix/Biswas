#include <Library/XmlElementPresentationLib/SlideIdList.hpp>

using namespace OpenXml::Presentation;

void
SlideIdList::AddId (
    )
{
    this->ids.push_back(new SlideId());
    this->AddChildElement(this->ids.back());
}
