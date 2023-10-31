#include <Library/XmlRootElementLib.hpp>

using namespace xmlElm;

Presentation::Presentation (
    ) : XmlRootElement("presentation", xmlns::presenta)
{
    this->slideMasterList.reset(new xmlElm::SlideMasterList());
    this->AddChildElement(this->slideMasterList);
    this->slideSize.reset(new xmlElm::SlideSize());
    this->AddChildElement(this->slideSize);
    this->slideSize->Cx = 12192000u;
    this->slideSize->Cy = 6858000u;
    this->notesSize.reset(new xmlElm::NotesSize());
    this->AddChildElement(this->notesSize);
    this->notesSize->Cx = 6858000u;
    this->notesSize->Cy = 9144000u;
    this->defaultTextStyle.reset(new xmlElm::DefaultTextStyle());
    this->AddChildElement(this->defaultTextStyle);
}
