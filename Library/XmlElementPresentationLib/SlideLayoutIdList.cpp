#include <Library/XmlElementPresentationLib/SlideLayoutIdList.hpp>

using namespace OpenXml::Presentation;

void
SlideLayoutIdList::AddId (
    )
{
    this->ids.push_back(new SlideLayoutId());
    this->AddChildElement(this->ids.back());
}
