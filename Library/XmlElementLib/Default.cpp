#include <Library/XmlElementLib.hpp>

using namespace OpenXml;

Default::Default (
    ) : XmlElement("Default", xmlns::content_)
{
    this->Extension = new Attribute("Extension");
    this->ContentType = new Attribute("ContentType");
    this->AddAttribute(this->Extension);
    this->AddAttribute(this->ContentType);
}
