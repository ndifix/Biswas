#include <Library/XmlElementPresentationLib.hpp>

using namespace OpenXml::Presentation;

NonVisualDrawingProperties::NonVisualDrawingProperties (
    ) : XmlElement("cNvPr", xmlns::presenta)
{
    this->Id = new AttributeUint32("id", 1);
    this->Name = new AttributeString("name", "");
    this->AddAttribute(this->Id);
    this->AddAttribute(this->Name);
}
