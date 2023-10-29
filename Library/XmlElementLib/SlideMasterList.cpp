#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

void
SlideMasterList::AddId (
    uint32_t id,
    std::string rid
    )
{
    this->ids.push_back(
        std::shared_ptr<SlideMasterId>(
        new SlideMasterId(id, rid)
        ));
    this->AddChildElement(this->ids.back());
    this->NotifyAddChildElement(this->ids.back()->RelationshipId->xmlns);
}
