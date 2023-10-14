#include <cstdlib>
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
    std::string cmd = "rm -rf " + tmp + "*";
    std::system(cmd.c_str());
}

Status
Document::Write (
    std::string path
    ) const
{
    Status Status;
    std::string cmd;

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

    cmd = "mv " + path + ".zip " + path;
    std::system(cmd.c_str());

    return Status::Success;
}
