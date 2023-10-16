#include <cstdlib>
#include <Biswas.hpp>
#include <Library/UtilLib.hpp>

Status
Execute (
    std::string cmd
    )
{
    int ret = std::system(cmd.c_str());

    return ret == 0 ?
        Status::Success:
        Status::Error;
}

Status
MakeDir (
    std::string path
    )
{
    std::string cmd = "mkdir -p " + path;

    return Execute(cmd);
}

Status
RemoveAll (
    std::string path
    )
{
    std::string cmd = "rm -rf " + path + "*";

    return Execute(cmd);
}

Status
BuildPptxFile (
    const std::string &dir,
    const std::filesystem::path &outPath
    )
{
    Status Status;

    std::filesystem::path outStem = outPath.stem();
    std::string cmd = "python3 Library/UtilLib/Zip.py ";
    cmd += dir + " ";
    cmd += outStem;
    std::filesystem::path tmpZip = outStem += ".zip";

    Status = Execute(cmd);
    if (Status != Status::Success) {
        return Status;
    }

    if (!std::filesystem::exists(tmpZip)) {
        return Status::NotFound;
    }

    std::filesystem::rename (tmpZip, outPath);

    return Status::Success;
}
