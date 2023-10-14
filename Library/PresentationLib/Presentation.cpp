#include <cstdlib>
#include <string>
#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>

Status
Presentation::Write (
    std::string presDir
    ) const
{
    this->presentation.Write(presDir + "presentation.xml");
    return Status::Success;
}
