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
    std::string cmd = "mkdir -p " + this->tmp;
    std::system(cmd.c_str());
    cmd = "rm -rf " + tmp + "*";
    std::system(cmd.c_str());
}

Status
Document::Write (
    std::string path
    ) const
{
    Status Status;
    std::string cmd;

    cmd = "mkdir " + this->relsDir;
    std::system(cmd.c_str());
    this->rels.Write();

    cmd = "mkdir " + this->presentation.presDir;
    std::system(cmd.c_str());
    this->presentation.Write();

    Status = Zip(this->tmp, path);
    if (Status != Status::Success) {
        return Status;
    }

    cmd = "mv " + path + ".zip " + path;
    std::system(cmd.c_str());

    return Status::Success;
}
