#include <Library/XmlElementPresentationLib.hpp>

using namespace OpenXml::Presentation;

TextBody::TextBody (
    ) : XmlElement("txBody", xmlns::presenta)
{
    this->bodyProperties = new Drawing::BodyProperties();
    this->listStyle = new Drawing::ListStyle();
    this->AddChildElement(this->bodyProperties);
    this->AddChildElement(this->listStyle);
}
