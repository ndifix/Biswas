#include <Library/XmlElementDrawingLib/LineStyleList.hpp>
#include <Library/XmlElementDrawingLib/Outline.hpp>

using namespace OpenXml::Drawing;

LineStyleList::LineStyleList (
    ) : XmlElement("lnStyleLst", xmlns::drawingm)
{
    this->AddChildElement(new Outline());
    this->AddChildElement(new Outline());
    this->AddChildElement(new Outline());
}
