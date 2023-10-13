#include <cstdlib>
#include <string>
#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>
#include <Library/ZipLib.hpp>

Document::Document (
    )
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

    std::string relsDir = this->tmp + "_rels/";
    cmd = "mkdir " + relsDir;
    std::system(cmd.c_str());
    this->rels.Write(relsDir + ".rels");

    std::string presDir = this->tmp + "ppt/";
    cmd = "mkdir " + presDir;
    std::system(cmd.c_str());
    this->presentation.Write(presDir);

    Status = Zip(this->tmp, path);
    if (Status != Status::Success) {
        return Status;
    }

    cmd = "mv " + path + ".zip " + path;
    std::system(cmd.c_str());

    return Status::Success;
}
