#include <cstdlib>
#include <string>
#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>
#include <Library/UtilLib.hpp>

Presentation::Presentation (
    std::string dir
    ) : presDir(dir),
        presentation(dir + "presentation.xml"),
        theme(dir + "theme/")
{
}

Status
Presentation::Write (
    ) const
{
    Status Status;
    this->presentation.Write();

    Status = MakeDir(this->theme.themeDir);
    if (Status != Status::Success) {
        return Status;
    }
    this->theme.Write();
    return Status::Success;
}
