#include <cstdlib>
#include <string>
#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>

Presentation::Presentation (
    std::string dir
    ) : presDir(dir),
        presentation(dir + "presentation.xml")
{
}

Status
Presentation::Write (
    ) const
{
    this->presentation.Write();
    return Status::Success;
}
