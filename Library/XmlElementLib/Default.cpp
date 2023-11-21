#include <Library/XmlElementLib.hpp>

using namespace OpenXml;

Default::Default (
    ) : XmlElement("Default", xmlns::content_)
{
    this->Extension = new AttributeString("Extension");
    this->ContentType = new AttributeString("ContentType");
    this->AddAttribute(this->Extension);
    this->AddAttribute(this->ContentType);
}
