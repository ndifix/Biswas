#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Presentation;

void
SlideMasterList::AddId (
    uint32_t id,
    std::string rid
    )
{
    this->ids.push_back(new SlideMasterId(id, rid));
    this->AddChildElement(this->ids.back());
}
