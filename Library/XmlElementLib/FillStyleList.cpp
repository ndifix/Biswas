#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

FillStyleList::FillStyleList (
    ) : XmlElement("fillStyleLst", xmlns::drawingm)
{
    this->AddChildElement(new SolidFill());
}
