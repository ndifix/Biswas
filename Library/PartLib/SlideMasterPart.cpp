#include <Library/PartLib.hpp>
#include <Library/XmlFileLib.hpp>

namespace {
const char *relType = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/slideMaster";
const char *conType = "application/vnd.openxmlformats-officedocument.presentationml.slideMaster+xml";
}

SlideMasterPart::SlideMasterPart (
    const std::filesystem::path &presDir,
    const std::filesystem::path &filename
    ) : IPart(std::filesystem::path(presDir) /= "slideMasters", relType, conType)
{
    this->RootElement.reset(new OpenXml::Presentation::SlideMaster());
    this->xmlfile.reset(
        new xmlFile::SlideMaster(
            std::filesystem::path(this->partDir) /= filename,
            this->RootElement
        ));
}

Status
SlideMasterPart::Write (
    )
{
    auto slideLayoutId = this->RootElement->slideLayoutIdList->ids.begin();
    for (auto &slideLayout:this->slideLayoutParts) {
        auto relation = this->AddRelationship(slideLayout);
        if (slideLayoutId == this->RootElement->slideLayoutIdList->ids.end()) {
            throw std::runtime_error("number of slideLayoutId is invalid");
        }
        (*slideLayoutId)->RelationshipId->value = *relation->Id->value.get();
        ++slideLayoutId;
    }

    if (this->themePart) {
        this->AddRelationship(themePart);
    }

    return IPart::Write();
}
