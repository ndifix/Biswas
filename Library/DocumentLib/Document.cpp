#include <cstdlib>
#include <string>
#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>
#include <Library/ZipLib.hpp>

Status
Document::Write (
    std::string path
    ) const
{
    Status Status;
    std::string SrcDir = "tmp";

    std::string cmd = "mkdir -p " + SrcDir;
    std::system(cmd.c_str());
    Status = Zip(SrcDir, path);

    return Status;
}
