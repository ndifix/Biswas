#include <Library/XmlElementPresentationLib.hpp>

using namespace OpenXml::Presentation;

NotesSize::NotesSize (
    ) : XmlElement("notesSz", xmlns::presenta)
{
    this->Cx = new AttributeInt64("cx");
    this->Cy = new AttributeInt64("cy");
    this->AddAttribute(this->Cx);
    this->AddAttribute(this->Cy);
}
