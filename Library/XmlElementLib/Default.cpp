#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

Default::Default (
    ) : XmlElement("Default", xmlns::content_)
{
    this->Extension = new Attribute("Extension");
    this->ContentType = new Attribute("ContentType");
    this->AddAttribute(this->Extension);
    this->AddAttribute(this->ContentType);
}
