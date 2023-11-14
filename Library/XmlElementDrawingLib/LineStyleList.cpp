#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

LineStyleList::LineStyleList (
    ) : XmlElement("lnStyleLst", xmlns::drawingm)
{
    this->AddChildElement(new Outline());
    this->AddChildElement(new Outline());
    this->AddChildElement(new Outline());
}
