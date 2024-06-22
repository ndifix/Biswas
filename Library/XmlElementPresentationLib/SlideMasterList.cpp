#include <Library/XmlElementPresentationLib/SlideMasterList.hpp>

using namespace OpenXml::Presentation;

void
SlideMasterList::AddId (
    )
{
    this->ids.push_back(new SlideMasterId());
    this->AddChildElement(this->ids.back());
}
