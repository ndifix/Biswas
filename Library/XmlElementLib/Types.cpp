#include <Biswas.hpp>
#include <Library/XmlElementLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace OpenXml;

biswas::Status
Types::AddContentType (
    std::unique_ptr<Default> def
    )
{
    this->AddChildElement(def.release());
    return biswas::Status::Success;
}

biswas::Status
Types::AddContentType (
    std::unique_ptr<Override> ovr
    )
{
    this->AddChildElement(ovr.release());
    return biswas::Status::Success;
}
