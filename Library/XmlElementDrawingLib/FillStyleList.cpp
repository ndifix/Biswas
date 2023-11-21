#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

FillStyleList::FillStyleList (
    ) : XmlElement("fillStyleLst", xmlns::drawingm)
{
    auto solidFill = new SolidFill();
    auto schemeColor = new SchemeColor();
    schemeColor->Val->value = SchemeColorValues::PhColor;
    solidFill->AddChildElement(schemeColor);
    this->AddChildElement(solidFill);

    auto gradientFill = new GradientFill();
    auto gradientStopList = new GradientStopList();
    gradientFill->AddChildElement(gradientStopList);
    gradientStopList->gradientStop1->Position->value = 0;
    gradientStopList->gradientStop2->Position->value = 50000;
    gradientStopList->gradientStop3->Position->value = 100000;
    auto luminanceModulation = new LuminanceModulation();
    luminanceModulation->Val->value = 110000;
    gradientStopList->gradientStop1->schemeColor->AddChildElement(luminanceModulation);
    luminanceModulation = new LuminanceModulation();
    luminanceModulation->Val->value = 105000;
    gradientStopList->gradientStop2->schemeColor->AddChildElement(luminanceModulation);
    luminanceModulation = new LuminanceModulation();
    luminanceModulation->Val->value = 105000;
    gradientStopList->gradientStop3->schemeColor->AddChildElement(luminanceModulation);
    auto saturationModulation = new SaturationModulation();
    saturationModulation->Val->value = 105000;
    gradientStopList->gradientStop1->schemeColor->AddChildElement(saturationModulation);
    saturationModulation = new SaturationModulation();
    saturationModulation->Val->value = 103000;
    gradientStopList->gradientStop2->schemeColor->AddChildElement(saturationModulation);
    saturationModulation = new SaturationModulation();
    saturationModulation->Val->value = 109000;
    gradientStopList->gradientStop3->schemeColor->AddChildElement(saturationModulation);
    auto tint = new Tint();
    tint->Val->value = 67000;
    gradientStopList->gradientStop1->schemeColor->AddChildElement(tint);
    tint = new Tint();
    tint->Val->value = 73000;
    gradientStopList->gradientStop2->schemeColor->AddChildElement(tint);
    tint = new Tint();
    tint->Val->value = 81000;
    gradientStopList->gradientStop3->schemeColor->AddChildElement(tint);
    auto linearGradientFill = new LinearGradientFill();
    linearGradientFill->Angle->value = 5400000;
    linearGradientFill->Scaled->value = false;
    gradientFill->AddChildElement(linearGradientFill);
    this->AddChildElement(gradientFill);

    gradientFill = new GradientFill();
    gradientStopList = new GradientStopList();
    gradientFill->AddChildElement(gradientStopList);
    gradientStopList->gradientStop1->Position->value = 0;
    gradientStopList->gradientStop2->Position->value = 50000;
    gradientStopList->gradientStop3->Position->value = 100000;
    luminanceModulation = new LuminanceModulation();
    luminanceModulation->Val->value = 102000;
    gradientStopList->gradientStop1->schemeColor->AddChildElement(luminanceModulation);
    luminanceModulation = new LuminanceModulation();
    luminanceModulation->Val->value = 100000;
    gradientStopList->gradientStop2->schemeColor->AddChildElement(luminanceModulation);
    luminanceModulation = new LuminanceModulation();
    luminanceModulation->Val->value = 99000;
    gradientStopList->gradientStop3->schemeColor->AddChildElement(luminanceModulation);
    saturationModulation = new SaturationModulation();
    saturationModulation->Val->value = 103000;
    gradientStopList->gradientStop1->schemeColor->AddChildElement(saturationModulation);
    saturationModulation = new SaturationModulation();
    saturationModulation->Val->value = 110000;
    gradientStopList->gradientStop2->schemeColor->AddChildElement(saturationModulation);
    saturationModulation = new SaturationModulation();
    saturationModulation->Val->value = 120000;
    gradientStopList->gradientStop3->schemeColor->AddChildElement(saturationModulation);
    tint = new Tint();
    tint->Val->value = 94000;
    gradientStopList->gradientStop1->schemeColor->AddChildElement(tint);
    auto shade = new Shade();
    shade->Val->value = 100000;
    gradientStopList->gradientStop2->schemeColor->AddChildElement(shade);
    shade = new Shade();
    shade->Val->value = 78000;
    gradientStopList->gradientStop3->schemeColor->AddChildElement(shade);
    linearGradientFill = new LinearGradientFill();
    linearGradientFill->Angle->value = 5400000;
    linearGradientFill->Scaled->value = false;
    gradientFill->AddChildElement(linearGradientFill);
    this->AddChildElement(gradientFill);
}
