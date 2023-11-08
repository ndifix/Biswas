#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

FormatScheme::FormatScheme (
    ) : XmlElement("fmtScheme", xmlns::drawingm)
{
    this->Name = new Attribute("name", "");
    this->AddAttribute(this->Name);
    this->effectStyleList = new EffectStyleList();
    this->fillStyleList = new FillStyleList();
    this->lineStyleList = new LineStyleList();
    this->AddChildElement(this->fillStyleList);
    this->AddChildElement(this->lineStyleList);
    this->AddChildElement(this->effectStyleList);
}
