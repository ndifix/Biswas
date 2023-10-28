#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

Override::Override (
    ) : XmlElement("Override", xmlns::content_)
{
    this->PartName.reset(new Attribute("PartName"));
    this->ContentType.reset(new Attribute("ContentType"));
    this->AddAttribute(this->PartName);
    this->AddAttribute(this->ContentType);
}
