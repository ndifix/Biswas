#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>
#include <Library/UtilLib.hpp>
#include <Library/XmlRootElementLib.hpp>

Document::Document (
    ) : relsDir(std::filesystem::path(this->tmp) /= "_rels"),
        rels(std::filesystem::path(this->relsDir) /= ".rels"),
        contentType(std::filesystem::path(this->tmp) /= "[Content_Types].xml"),
        presentation(this->tmp)
{
    // tmp ディレクトリがなければ作成し、あれば中を空にする。
    MakeDir(this->tmp);
    RemoveAll(this->tmp);
}

Status
Document::SetRelation (
    )
{
    Status Status;
    xmlElm::Relationship *relation;

    try {
        relation = new xmlElm::Relationship();
    } catch (...){
        return Status::Error;
    }
    relation->Id = "rId1";
    relation->Type = this->presentation.part->relationType;
    relation->Target = std::filesystem::relative(this->presentation.part->GetXmlFilePath(), this->tmp);

    xmlElm::Relationships *rels = static_cast<xmlElm::Relationships*>(this->rels.RootElement);
    Status = rels->AddRelation(relation);
    if (Status != Status::Success) {
        return Status;
    }

    return Status::Success;
}

Status
Document::SetContentTypes (
    )
{
    Status Status;
    xmlElm::Default *defRels, *defExt;

    try {
        defRels = new xmlElm::Default();
        defExt = new xmlElm::Default();
    } catch (...) {
        return Status::Error;
    }
    defRels->Extension = "rels";
    defRels->ContentType = "application/vnd.openxmlformats-package.relationships+xml";
    defExt->Extension = "xml";
    defExt->ContentType = "application/xml";

    xmlElm::Types *types = static_cast<xmlElm::Types*>(this->contentType.RootElement);
    Status = types->AddContentType(defRels);
    if (Status != Status::Success) {
        return Status;
    }
    Status = types->AddContentType(defExt);
    if (Status != Status::Success) {
        return Status;
    }

    xmlElm::Override *presPart;
    try {
        presPart = new xmlElm::Override();
    } catch (...) {
        return Status::Error;
    }
    presPart->PartName = "/" + std::filesystem::relative(this->presentation.part->GetXmlFilePath(), this->tmp).string();
    presPart->ContentType = this->presentation.part->contentType;
    Status = types->AddContentType(presPart);
    if (Status != Status::Success) {
        return Status;
    }

    return Status::Success;
}

Status
Document::Write (
    const std::filesystem::path path
    )
{
    Status Status;

    Status = MakeDir(this->tmp);
    if (Status != Status::Success) {
        return Status;
    }

    this->SetContentTypes();
    this->contentType.Write();

    Status = MakeDir(this->relsDir);
    if (Status != Status::Success) {
        return Status;
    }
    this->SetRelation();
    this->rels.Write();

    this->presentation.Write();

    Status = BuildPptxFile(this->tmp, path);
        if (Status != Status::Success) {
        return Status;
    }

    return Status::Success;
}
