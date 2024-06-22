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
    relation->Id->value = NextRelationId(this->relations);
    relation->Type->value = newPart->relationType;
    relation->Target->value = std::filesystem::relative(newPart->xmlfile->filePath, this->partDir);

    this->relations.push_back(relation);
    return relation;
}

biswas::Status
IPart::WriteRelationship (
    ) const
{
    biswas::Status Status;

    if (this->relations.empty()) {
        return biswas::Status::Success;
    }
    if (this->relations.empty()) {
        return biswas::Status::Success;
    }

    const std::filesystem::path relDir = this->partDir / "_rels/";
    Status = ::MakeDir(relDir);
    if (Status != biswas::Status::Success) {
        return Status;
    }

    std::filesystem::path filename = this->xmlfile->filePath.filename() += ".rels";
    xmlFile::Relationships relationXml(relDir / filename);
    for (auto rels:this->relations) {
        relationXml.RootElement->AddChildElement(rels);
    }
    relationXml.Write();

    return biswas::Status::Success;
}

biswas::Status
IPart::Write (
    )
{
    biswas::Status Status;

    if (this->xmlfile == nullptr) {
        return biswas::Status::NotReady;
    }
    this->xmlfile->Write();

    for (auto part:this->childParts) {
        Status = part->Write();
        if (Status != biswas::Status::Success) {
            return Status;
        }
    }

    Status = this->WriteRelationship();
    if (Status != biswas::Status::Success) {
        return Status;
    }

    return biswas::Status::Success;
}
