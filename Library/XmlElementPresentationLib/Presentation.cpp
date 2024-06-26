#include <Library/XmlRootElementLib.hpp>

using namespace OpenXml::Presentation;

Presentation::Presentation (
    ) : XmlRootElement("presentation", xmlns::presenta)
{
    this->slideMasterList = new SlideMasterList();
    this->AddChildElement(this->slideMasterList);
    this->slideIdList = new SlideIdList();
    this->AddChildElement(this->slideIdList);
    this->slideSize = new SlideSize();
    this->AddChildElement(this->slideSize);
    this->slideSize->Cx->value = 12192000u;
    this->slideSize->Cy->value = 6858000u;
    this->notesSize = new NotesSize();
    this->AddChildElement(this->notesSize);
    this->notesSize->Cx->value = 6858000u;
    this->notesSize->Cy->value = 9144000u;
    this->defaultTextStyle = new DefaultTextStyle();
    this->AddChildElement(this->defaultTextStyle);
}
