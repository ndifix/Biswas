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
    auto gradientStopList = new GradientStopList();
    gradientFill->AddChildElement(gradientStopList);
    gradientStopList->gradientStop1->Position->val = "0";
    gradientStopList->gradientStop2->Position->val = "50000";
    gradientStopList->gradientStop3->Position->val = "100000";
    this->AddChildElement(gradientFill);

    gradientFill = new GradientFill();
    gradientStopList = new GradientStopList();
    gradientFill->AddChildElement(gradientStopList);
    gradientStopList->gradientStop1->Position->val = "0";
    gradientStopList->gradientStop2->Position->val = "50000";
    gradientStopList->gradientStop3->Position->val = "100000";
    this->AddChildElement(gradientFill);
}
