#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

FormatScheme::FormatScheme (
    ) : XmlElement("fmtScheme", xmlns::drawingm)
{
    this->Name = new Attribute("name", "");
    this->AddAttribute(this->Name);
    this->fillStyleList = new FillStyleList();
    this->lineStyleList = new LineStyleList();
    this->AddChildElement(this->fillStyleList);
    this->AddChildElement(this->lineStyleList);
}
