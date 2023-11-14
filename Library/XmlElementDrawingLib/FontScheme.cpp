#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

FontScheme::FontScheme (
    ) : XmlElement("fontScheme", xmlns::drawingm)
{
    this->Name = new Attribute("name", "");
    this->AddAttribute(this->Name);
    this->majorFont = new MajorFont();
    this->minorFont = new MinorFont();
    this->AddChildElement(this->majorFont);
    this->AddChildElement(this->minorFont);
}
