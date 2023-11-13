#include <sstream>
#include <Library/PartLib.hpp>
#include <Library/UtilLib.hpp>
#include <Library/XmlFileLib.hpp>

namespace {

std::string
NextRelationId (
    std::list<OpenXml::Relationship*> relations
    )
{
    std::stringstream newId;
    newId << "rId" << relations.size() + 1;
    return newId.str();
}

}

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

OpenXml::Relationship *
IPart::AddRelationship (
    std::shared_ptr<IPart> newPart
    )
{
    OpenXml::Relationship *relation = new OpenXml::Relationship();
    relation->Id->val = NextRelationId(this->relations);
    relation->Type->val = newPart->relationType;
    relation->Target->val = std::filesystem::relative(newPart->xmlfile->filePath, this->partDir);

    this->relations.push_back(relation);
    return relation;
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
    )
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
