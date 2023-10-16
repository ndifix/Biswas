#include <string>
#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>
#include <Library/UtilLib.hpp>
#include <Library/XmlRootElementLib.hpp>

Document::Document (
    ) : relsDir(this->tmp + "_rels/"),
        rels(this->relsDir + ".rels"),
        contentType(this->tmp + "[Content_Types].xml"),
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
    relation->Type = "http://schemas.openxmlformats.org/officeDocument/2006/relationships/officeDocument";
    relation->Target = "ppt/presentation.xml";

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
    presPart->PartName = "/ppt/presentation.xml";
    presPart->ContentType = this->presentation.part->contentType;
    Status = types->AddContentType(presPart);
    if (Status != Status::Success) {
        return Status;
    }

    return Status::Success;
}

Status
Document::Write (
    std::string path
    )
{
    Status Status;

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
