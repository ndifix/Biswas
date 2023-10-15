#include <Library/PresentationLib.hpp>

PresentationPropertiesPart::PresentationPropertiesPart (
    const std::string &root,
    std::string dir
    ) : rootDir(root),
        partDir(dir),
        presentationProperties(root + dir + "presProps.xml")
{
}

Status
PresentationPropertiesPart::Write(
    ) const
{
    this->presentationProperties.Write();
    return Status::Success;
}
