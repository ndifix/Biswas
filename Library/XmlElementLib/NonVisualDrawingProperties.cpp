#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

NonVisualDrawingProperties::NonVisualDrawingProperties (
    ) : XmlElement("cNvPr", xmlns::presenta)
{
    this->Id = new Attribute("id", "1");
    this->Name = new Attribute("name");
    this->AddAttribute(this->Id);
    this->AddAttribute(this->Name);
}
