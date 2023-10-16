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
    const std::filesystem::path &path
    )
{
    if (std::filesystem::exists(path)) {
        return Status::Success;
    }

    if (std::filesystem::create_directory(path)) {
        return Status::Success;
    } else {
        return Status::Error;
    }
}

Status
RemoveAll (
    const std::filesystem::path &path
    )
{
    if (!std::filesystem::exists(path)) {
        return Status::Success;
    }

    if (std::filesystem::remove_all(path) > 0) {
        return Status::Success;
    } else {
        return Status::Error;
    }
}

Status
BuildPptxFile (
    const std::string &dir,
    const std::filesystem::path &outPath
    )
{
    Status Status;

    const std::filesystem::path current = std::filesystem::current_path();
    const std::filesystem::path absOut = std::filesystem::absolute(outPath);
    const std::filesystem::path targetDir = std::filesystem::absolute(dir);
    std::filesystem::current_path(targetDir);

    std::string cmd;
    for (auto &iter:std::filesystem::directory_iterator(targetDir)) {
        cmd = "zip -r "
            + absOut.string()
            + " "
            + std::filesystem::relative(iter.path(), targetDir).string();
        Status = Execute(cmd);
        if (Status != Status::Success) {
            return Status;
        }
    }

    std::filesystem::current_path(current);
    return Status::Success;
}
