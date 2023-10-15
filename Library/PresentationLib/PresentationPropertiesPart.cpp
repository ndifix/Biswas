#include <Library/PresentationLib.hpp>

PresentationPropertiesPart::PresentationPropertiesPart (
    const std::string &root,
    std::string dir
    ) : IPart(root, dir),
        presentationProperties(root + dir + "presProps.xml")
{
}

Status
PresentationPropertiesPart::Write(
    )
{
    this->presentationProperties.Write();
    return Status::Success;
}
