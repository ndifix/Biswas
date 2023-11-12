#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Presentation;

void
SlideMasterList::AddId (
    uint32_t id
    )
{
    this->ids.push_back(new SlideMasterId(id));
    this->AddChildElement(this->ids.back());
}
