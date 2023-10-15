#include <cstdlib>
#include <string>
#include <Biswas.hpp>
#include <Library/DocumentLib.hpp>
#include <Library/PartLib.hpp>
#include <Library/PresentationLib.hpp>
#include <Library/UtilLib.hpp>

Presentation::Presentation (
    const std::string &root
    )
{
    this->part = new PresentationPart(root, "ppt/");
}

Presentation::~Presentation (
    )
{
    if (this->part != nullptr) {
        delete this->part;
        this->part = nullptr;
    }
}

Status
Presentation::Write (
    )
{
    Status Status;

    if (this->part != nullptr) {
        Status = MakeDir(this->part->rootDir + this->part->partDir);
        if (Status != Status::Success) {
            return Status;
        }

        Status = this->part->Write();
        if (Status != Status::Success) {
            return Status;
        }
    }
    return Status::Success;
}
