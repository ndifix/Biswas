#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

Default::Default (
    ) : XmlElement("Default", xmlns::content_)
{
    this->Extension.reset(new Attribute("Extension"));
    this->ContentType.reset(new Attribute("ContentType"));
    this->AddAttribute(this->Extension);
    this->AddAttribute(this->ContentType);
}
