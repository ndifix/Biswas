#include <string>
#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>
#include <Library/UtilLib.hpp>
#include <Library/XmlElementLib.hpp>

Document::Document (
    ) : relsDir(this->tmp + "_rels/"),
        rels(this->relsDir + ".rels"),
        presentation(this->tmp + "ppt/")
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
Document::Write (
    std::string path
    )
{
    Status Status;

    Status = MakeDir(this->relsDir);
    if (Status != Status::Success) {
        return Status;
    }
    this->SetRelation();
    this->rels.Write();

    Status = MakeDir(this->presentation.presDir);
    if (Status != Status::Success) {
        return Status;
    }
    this->presentation.Write();

    Status = Zip(this->tmp, path);
    if (Status != Status::Success) {
        return Status;
    }

    Status = RenameZipToPptx(path);
    if (Status != Status::Success) {
        return Status;
    }

    return Status::Success;
}
