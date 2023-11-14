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
    auto luminanceModulation = new LuminanceModulation();
    luminanceModulation->Val->val = "110000";
    gradientStopList->gradientStop1->schemeColor->AddChildElement(luminanceModulation);
    luminanceModulation = new LuminanceModulation();
    luminanceModulation->Val->val = "105000";
    gradientStopList->gradientStop2->schemeColor->AddChildElement(luminanceModulation);
    luminanceModulation = new LuminanceModulation();
    luminanceModulation->Val->val = "105000";
    gradientStopList->gradientStop3->schemeColor->AddChildElement(luminanceModulation);
    auto saturationModulation = new SaturationModulation();
    saturationModulation->Val->val = "105000";
    gradientStopList->gradientStop1->schemeColor->AddChildElement(saturationModulation);
    saturationModulation = new SaturationModulation();
    saturationModulation->Val->val = "103000";
    gradientStopList->gradientStop2->schemeColor->AddChildElement(saturationModulation);
    saturationModulation = new SaturationModulation();
    saturationModulation->Val->val = "109000";
    gradientStopList->gradientStop3->schemeColor->AddChildElement(saturationModulation);
    this->AddChildElement(gradientFill);

    gradientFill = new GradientFill();
    gradientStopList = new GradientStopList();
    gradientFill->AddChildElement(gradientStopList);
    gradientStopList->gradientStop1->Position->val = "0";
    gradientStopList->gradientStop2->Position->val = "50000";
    gradientStopList->gradientStop3->Position->val = "100000";
    luminanceModulation = new LuminanceModulation();
    luminanceModulation->Val->val = "102000";
    gradientStopList->gradientStop1->schemeColor->AddChildElement(luminanceModulation);
    luminanceModulation = new LuminanceModulation();
    luminanceModulation->Val->val = "100000";
    gradientStopList->gradientStop2->schemeColor->AddChildElement(luminanceModulation);
    luminanceModulation = new LuminanceModulation();
    luminanceModulation->Val->val = "99000";
    gradientStopList->gradientStop3->schemeColor->AddChildElement(luminanceModulation);
    saturationModulation = new SaturationModulation();
    saturationModulation->Val->val = "103000";
    gradientStopList->gradientStop1->schemeColor->AddChildElement(saturationModulation);
    saturationModulation = new SaturationModulation();
    saturationModulation->Val->val = "110000";
    gradientStopList->gradientStop2->schemeColor->AddChildElement(saturationModulation);
    saturationModulation = new SaturationModulation();
    saturationModulation->Val->val = "120000";
    gradientStopList->gradientStop3->schemeColor->AddChildElement(saturationModulation);
    this->AddChildElement(gradientFill);
}
