#include <Biswas.hpp>
#include <Library/XmlElementLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace OpenXml;

Status
Types::AddContentType (
    std::unique_ptr<Default> def
    )
{
    this->AddChildElement(def.release());
    return Status::Success;
}

Status
Types::AddContentType (
    std::unique_ptr<Override> ovr
    )
{
    this->AddChildElement(ovr.release());
    return Status::Success;
}
