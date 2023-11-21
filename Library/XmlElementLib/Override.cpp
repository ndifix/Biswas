#include <Library/XmlElementLib.hpp>

using namespace OpenXml;

Override::Override (
    ) : XmlElement("Override", xmlns::content_)
{
    this->PartName = new AttributeString("PartName");
    this->ContentType = new AttributeString("ContentType");
    this->AddAttribute(this->PartName);
    this->AddAttribute(this->ContentType);
}
