#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

FillStyleList::FillStyleList (
    ) : XmlElement("fillStyleLst", xmlns::drawingm)
{
    auto solidFill = new SolidFill();
    auto schemeColor = new SchemeColor();
    schemeColor->Val->val = "phClr";
    solidFill->AddChildElement(schemeColor);
    this->AddChildElement(solidFill);

    auto gradientFill = new GradientFill();
    gradientFill->AddChildElement(new GradientStopList());
    this->AddChildElement(gradientFill);

    gradientFill = new GradientFill();
    gradientFill->AddChildElement(new GradientStopList());
    this->AddChildElement(gradientFill);
}
