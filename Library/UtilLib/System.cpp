#include <cstdlib>
#include <Biswas.hpp>
#include <Library/UtilLib.hpp>

biswas::Status
Execute (
    std::string cmd
    )
{
    int ret = std::system(cmd.c_str());

    return ret == 0 ?
        biswas::Status::Success:
        biswas::Status::Error;
}

biswas::Status
MakeDir (
    const std::filesystem::path &path
    )
{
    if (std::filesystem::exists(path)) {
        return biswas::Status::Success;
    }

    if (std::filesystem::create_directory(path)) {
        return biswas::Status::Success;
    } else {
        return biswas::Status::Error;
    }
}

biswas::Status
RemoveAll (
    const std::filesystem::path &path
    )
{
    if (!std::filesystem::exists(path)) {
        return biswas::Status::Success;
    }

    if (std::filesystem::remove_all(path) > 0) {
        return biswas::Status::Success;
    } else {
        return biswas::Status::Error;
    }
}

biswas::Status
BuildPptxFile (
    const std::string &dir,
    const std::filesystem::path &outPath
    )
{
    biswas::Status Status;

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
        if (Status != biswas::Status::Success) {
            return Status;
        }
    }

    std::filesystem::current_path(current);
    return biswas::Status::Success;
}
