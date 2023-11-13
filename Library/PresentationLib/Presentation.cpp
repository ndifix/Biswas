#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>
#include <Library/PartLib.hpp>
#include <Library/PresentationLib.hpp>

using namespace biswas;

Presentation::Presentation (
    const std::filesystem::path &tmp
    )
{
    this->part.reset(new PresentationPart(std::filesystem::path(tmp) /= "ppt/"));
}

Status
Presentation::Write (
    ) const
{
    Status Status;

    if (this->part != nullptr) {
        Status = this->part->Write();
        if (Status != Status::Success) {
            return Status;
        }
    }
    return Status::Success;
}
