#include <cstdlib>
#include <string>
#include <Biswas.hpp>

Status
Zip (
    std::string srcDir,
    std::string outFile
    )
{
    std::string cmd = "python3 Library/ZipLib/Zip.py ";
    cmd += srcDir + " ";
    cmd += outFile;
    int ret = std::system(cmd.c_str());

    return ret == 0 ?
        Status::Success:
        Status::Error;
}
