#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

GradientStopList::GradientStopList (
    ) : XmlElement("gsLst", xmlns::drawingm)
{
    this->gradientStop1 = new GradientStop();
    this->gradientStop2 = new GradientStop();
    this->gradientStop3 = new GradientStop();
    this->AddChildElement(this->gradientStop1);
    this->AddChildElement(this->gradientStop2);
    this->AddChildElement(this->gradientStop3);
}
