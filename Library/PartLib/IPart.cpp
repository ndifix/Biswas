#include <Library/PartLib.hpp>

IPart::IPart(
    const std::string &root,
    std::string dir
    ) : rootDir(root),
        partDir(dir)
{
}
