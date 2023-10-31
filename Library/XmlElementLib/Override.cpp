#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

Override::Override (
    ) : XmlElement("Override", xmlns::content_)
{
    this->PartName = new Attribute("PartName");
    this->ContentType = new Attribute("ContentType");
    this->AddAttribute(this->PartName);
    this->AddAttribute(this->ContentType);
}
