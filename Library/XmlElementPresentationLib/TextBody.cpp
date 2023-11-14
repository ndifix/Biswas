#include <Library/XmlElementPresentationLib.hpp>

using namespace OpenXml::Presentation;

TextBody::TextBody (
    ) : XmlElement("txBody", xmlns::presenta)
{
    this->bodyProperties = new Drawing::BodyProperties();
    this->AddChildElement(this->bodyProperties);
}
