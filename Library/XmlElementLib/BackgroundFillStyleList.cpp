#include <Library/XmlElementLib.hpp>

using namespace OpenXml::Drawing;

BackgroundFillStyleList::BackgroundFillStyleList (
    ) : XmlElement("bgFillStyleLst", xmlns::drawingm)
{
    this->AddChildElement(new SolidFill());
    this->AddChildElement(new SolidFill());
    this->AddChildElement(new GradientFill());
}
