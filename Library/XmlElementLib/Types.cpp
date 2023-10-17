#include <Biswas.hpp>
#include <Library/XmlElementLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

Status
Types::AddContentType (
    std::unique_ptr<Default> def
    )
{
    this->AddChildElement(
        std::unique_ptr<XmlElement>(static_cast<XmlElement*>(def.release()))
        );
    return Status::Success;
}

Status
Types::AddContentType (
    std::unique_ptr<Override> ovr
    )
{
    this->AddChildElement(
        std::unique_ptr<XmlElement>(static_cast<XmlElement*>(ovr.release()))
        );
    return Status::Success;
}
