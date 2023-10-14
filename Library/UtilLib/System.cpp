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
Zip (
    std::string srcDir,
    std::string outFile
    )
{
    std::string cmd = "python3 Library/UtilLib/Zip.py ";
    cmd += srcDir + " ";
    cmd += outFile;

    return Execute(cmd);
}

Status
MakeDir (
    std::string path
    )
{
    std::string cmd = "mkdir -p " + path;

    return Execute(cmd);
}
