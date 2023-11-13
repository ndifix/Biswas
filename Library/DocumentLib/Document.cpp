#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>
#include <Library/UtilLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace biswas;

Document::Document (
    ) : presentation(this->tmp)
{
    // tmp ディレクトリがなければ作成し、あれば中を空にする。
    MakeDir(this->tmp);
    RemoveAll(this->tmp);
}

Status
Document::WriteRelation (
    ) const
{
    Status Status;

    if (!this->presentation.part) {
        return Status::Success;
    }

    std::filesystem::path relsDir = std::filesystem::path(this->tmp) /= "_rels";
    Status = MakeDir(relsDir);
    if (Status != Status::Success) {
        return Status;
    }
    xmlFile::Relationships relsFile(relsDir /= ".rels");

    std::unique_ptr<OpenXml::Relationship> relation(new OpenXml::Relationship());
    relation->Id->val = "rId1";
    relation->Type->val = this->presentation.part->relationType;
    relation->Target->val = std::filesystem::relative(this->presentation.part->GetXmlFilePath(), this->tmp);

    OpenXml::Relationships *rels = static_cast<OpenXml::Relationships*>(relsFile.RootElement.get());
    Status = rels->AddRelation(std::move(relation));
    if (Status != Status::Success) {
        return Status;
    }

    relsFile.Write();

    return Status::Success;
}

Status
AddOverride (
    OpenXml::Types *types,
    std::unique_ptr<OpenXml::Override> over,
    std::shared_ptr<IPart> part,
    const std::filesystem::path root
    )
{
    Status Status;

    over.reset(new OpenXml::Override());
    over->PartName->val = "/" + std::filesystem::relative(part->GetXmlFilePath(), root).string();
    over->ContentType->val = part->contentType;
    Status = types->AddContentType(std::move(over));
    if (Status != Status::Success) {
        return Status;
    }

    return Status::Success;
}

Status
Document::WriteContentTypes (
    ) const
{
    Status Status;

    xmlFile::ContentTypes contentType(std::filesystem::path(this->tmp) /= "[Content_Types].xml");

    std::unique_ptr<OpenXml::Default> defRels(new OpenXml::Default()), defExt(new OpenXml::Default());
    defRels->Extension->val = "rels";
    defRels->ContentType->val = "application/vnd.openxmlformats-package.relationships+xml";
    defExt->Extension->val = "xml";
    defExt->ContentType->val = "application/xml";

    OpenXml::Types *types = static_cast<OpenXml::Types*>(contentType.RootElement.get());
    Status = types->AddContentType(std::move(defRels));
    if (Status != Status::Success) {
        return Status;
    }
    Status = types->AddContentType(std::move(defExt));
    if (Status != Status::Success) {
        return Status;
    }

    std::unique_ptr<OpenXml::Override> over(new OpenXml::Override());
    over->PartName->val = "/" + std::filesystem::relative(this->presentation.part->GetXmlFilePath(), this->tmp).string();
    over->ContentType->val = this->presentation.part->contentType;
    Status = types->AddContentType(std::move(over));
    if (Status != Status::Success) {
        return Status;
    }

    for (auto &sldMasterPart:this->presentation.part->slideMasterParts) {
        Status = AddOverride(types, std::move(over), sldMasterPart, this->tmp);
        if (Status != Status::Success) {
            return Status;
        }
    }

    Status = AddOverride(types, std::move(over), this->presentation.part->presPropPart, this->tmp);
    if (Status != Status::Success) {
        return Status;
    }

    for (auto &themePart:this->presentation.part->themeParts) {
        Status = AddOverride(types, std::move(over), themePart, this->tmp);
        if (Status != Status::Success) {
            return Status;
        }
    }

    contentType.Write();

    return Status::Success;
}

Status
Document::Write (
    const std::filesystem::path path
    ) const
{
    Status Status;

    Status = MakeDir(this->tmp);
    if (Status != Status::Success) {
        return Status;
    }

    Status = this->WriteContentTypes();
    if (Status != Status::Success) {
        return Status;
    }

    Status = this->WriteRelation();
    if (Status != Status::Success) {
        return Status;
    }

    this->presentation.Write();

    Status = BuildPptxFile(this->tmp, path);
        if (Status != Status::Success) {
        return Status;
    }

    return Status::Success;
}
