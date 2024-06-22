#include <Library/XmlElementDrawingLib/FormatScheme.hpp>

using namespace OpenXml::Drawing;

FormatScheme::FormatScheme (
    ) : XmlElement("fmtScheme", xmlns::drawingm)
{
    this->Name = new AttributeString("name", "");
    this->AddAttribute(this->Name);
    this->backgroundFillStyleList = new BackgroundFillStyleList();
    this->effectStyleList = new EffectStyleList();
    this->fillStyleList = new FillStyleList();
    this->lineStyleList = new LineStyleList();
    this->AddChildElement(this->fillStyleList);
    this->AddChildElement(this->lineStyleList);
    this->AddChildElement(this->effectStyleList);
    this->AddChildElement(this->backgroundFillStyleList);
}
