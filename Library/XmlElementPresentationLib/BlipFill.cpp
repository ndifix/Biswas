#include <Library/XmlElementPresentationLib/BlipFill.hpp>

using namespace OpenXml::Presentation;

BlipFill::BlipFill (
    ) : XmlElement("blipFill", xmlns::presenta)
{
    this->blip = new Drawing::Blip();
    this->AddChildElement(this->blip);
}
