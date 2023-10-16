#include <Library/PartLib.hpp>

IPart::IPart (
    const std::string &root,
    std::string dir,
    const char *relType,
    const char *conType
    ) : rootDir(root),
        partDir(dir),
        relationType(relType),
        contentType(conType)
{
}

IPart::~IPart (
    )
{
    if (this->xmlfile != nullptr) {
        delete this->xmlfile;
        this->xmlfile = nullptr;
    }

    while (!this->childParts.empty()) {
        if (this->childParts.back() != nullptr) {
            delete this->childParts.back();
        }
        this->childParts.pop_back();
    }
}

void
IPart::AddChildPart (
    IPart *newPart
    )
{
    this->childParts.push_back(newPart);
}

Status
IPart::Write (
    ) const
{
    Status Status;

    if (this->xmlfile == nullptr) {
        return Status::NotReady;
    }
    this->xmlfile->Write();

    for (auto part:this->childParts) {
        Status = part->Write();
        if (Status != Status::Success) {
            return Status;
        }
    }

    return Status::Success;
}
