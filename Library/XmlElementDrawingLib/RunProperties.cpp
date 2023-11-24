#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

RunProperties::RunProperties (
    ) : XmlElement("rPr", xmlns::drawingm)
{
    this->Baseline = new AttributeInt32("baseline");
    this->Bold = new AttributeBool("b");
    this->FontSize = new AttributeInt32("sz");
    this->Italic = new AttributeBool("i");
    this->AddAttribute(this->Baseline);
    this->AddAttribute(this->Bold);
    this->AddAttribute(this->FontSize);
    this->AddAttribute(this->Italic);
}
