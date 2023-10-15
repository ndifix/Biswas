#include <Library/XmlFileLib.hpp>
#include <Library/XmlElementLib.hpp>
#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

void
Default::Write (
    std::ofstream &ofs
    )
{
    if (!this->Extension.empty()) {
        this->AddAttribute("Extension", this->Extension);
    }
    if (!this->ContentType.empty()) {
        this->AddAttribute("ContentType", this->ContentType);
    }
    XmlElement::Write(ofs);
}

void
Override::Write (
    std::ofstream &ofs
    )
{
    if (!this->PartName.empty()) {
        this->AddAttribute("Extension", this->PartName);
    }
    if (!this->ContentType.empty()) {
        this->AddAttribute("ContentType", this->ContentType);
    }
    XmlElement::Write(ofs);
}

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

xmlFile::ContentTypes::ContentTypes (
    std::string path
    ) : XmlFile(path)
{
    this->RootElement = new xmlElm::Types();
}
