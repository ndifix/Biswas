#include <Biswas.hpp>
#include <Library/XmlElementLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

Status
Types::AddContentType (
    Default *def
    )
{
    this->AddChildElement(def);
    return Status::Success;
}

Status
Types::AddContentType (
    Override *ovr
    )
{
    this->AddChildElement(ovr);
    return Status::Success;
}
