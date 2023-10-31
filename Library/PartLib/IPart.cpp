#include <sstream>
#include <Library/PartLib.hpp>
#include <Library/UtilLib.hpp>
#include <Library/XmlFileLib.hpp>

IPart::IPart (
    const std::filesystem::path &dir,
    const char *relType,
    const char *conType
    ) : partDir(dir),
        relationType(relType),
        contentType(conType)
{
}

std::string
IPart::GetXmlFilePath (
    ) const
{
    if (this->xmlfile == nullptr) {
        return "";
    }

    return this->xmlfile->filePath;
}

void
IPart::AddChildPart (
    std::shared_ptr<IPart> newPart
    )
{
    this->childParts.push_back(newPart);
}

std::string
IPart::NextPartId (
    ) const
{
    std::stringstream newId;
    newId << "rId" << this->relations.size() + 1;
    return newId.str();
}

void
IPart::AddRelationship (
    std::shared_ptr<IPart> newPart
    )
{
    xmlElm::Relationship *relation = new xmlElm::Relationship();
    relation->Id->val = this->NextPartId();
    relation->Type->val = newPart->relationType;
    relation->Target->val = std::filesystem::relative(newPart->xmlfile->filePath, this->partDir);

    this->relations.push_back(std::move(relation));
}

Status
IPart::WriteRelationship (
    ) const
{
    Status Status;

    if (this->relations.empty()) {
        return Status::Success;
    }
    if (this->relations.empty()) {
        return Status::Success;
    }

    std::filesystem::path relDir = std::filesystem::path(this->partDir) /= "_rels/";
    Status = ::MakeDir(relDir);
    if (Status != Status::Success) {
        return Status;
    }

    std::filesystem::path filename = this->xmlfile->filePath.filename() += ".rels";
    xmlFile::Relationships relationXml(relDir /= filename);
    for (auto rels:this->relations) {
        relationXml.RootElement->AddChildElement(rels);
    }
    relationXml.Write();

    return Status::Success;
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

    Status = this->WriteRelationship();
    if (Status != Status::Success) {
        return Status;
    }

    return Status::Success;
}
