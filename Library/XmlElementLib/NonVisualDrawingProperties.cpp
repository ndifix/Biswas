#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

NonVisualDrawingProperties::NonVisualDrawingProperties (
    ) : XmlElement("cNvPr", xmlns::presenta)
{
    this->Id = new Attribute("id");
    this->Name = new Attribute("name");
    this->Id->val = "1";
    this->AddAttribute(this->Id);
    this->AddAttribute(this->Name);
}
