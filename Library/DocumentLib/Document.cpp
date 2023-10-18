#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>
#include <Library/UtilLib.hpp>
#include <Library/XmlRootElementLib.hpp>

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

    std::unique_ptr<xmlElm::Relationship> relation(new xmlElm::Relationship());
    relation->Id = "rId1";
    relation->Type = this->presentation.part->relationType;
    relation->Target = std::filesystem::relative(this->presentation.part->GetXmlFilePath(), this->tmp);

    xmlElm::Relationships *rels = static_cast<xmlElm::Relationships*>(relsFile.RootElement.get());
    Status = rels->AddRelation(std::move(relation));
    if (Status != Status::Success) {
        return Status;
    }

    relsFile.Write();

    return Status::Success;
}

Status
Document::WriteContentTypes (
    ) const
{
    Status Status;

    xmlFile::ContentTypes contentType(std::filesystem::path(this->tmp) /= "[Content_Types].xml");

    std::unique_ptr<xmlElm::Default> defRels(new xmlElm::Default()), defExt(new xmlElm::Default());
    defRels->Extension = "rels";
    defRels->ContentType = "application/vnd.openxmlformats-package.relationships+xml";
    defExt->Extension = "xml";
    defExt->ContentType = "application/xml";

    xmlElm::Types *types = static_cast<xmlElm::Types*>(contentType.RootElement.get());
    Status = types->AddContentType(std::move(defRels));
    if (Status != Status::Success) {
        return Status;
    }
    Status = types->AddContentType(std::move(defExt));
    if (Status != Status::Success) {
        return Status;
    }
    std::unique_ptr<xmlElm::Override> presPart(new xmlElm::Override());

    presPart->PartName = "/" + std::filesystem::relative(this->presentation.part->GetXmlFilePath(), this->tmp).string();
    presPart->ContentType = this->presentation.part->contentType;
    Status = types->AddContentType(std::move(presPart));
    if (Status != Status::Success) {
        return Status;
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
