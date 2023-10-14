#include <string>
#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>
#include <Library/UtilLib.hpp>

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
Document::Write (
    std::string path
    ) const
{
    Status Status;

    Status = MakeDir(this->relsDir);
    if (Status != Status::Success) {
        return Status;
    }
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
