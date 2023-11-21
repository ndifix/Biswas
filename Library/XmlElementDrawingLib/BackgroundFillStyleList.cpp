#include <Library/XmlElementDrawingLib.hpp>

using namespace OpenXml::Drawing;

BackgroundFillStyleList::BackgroundFillStyleList (
    ) : XmlElement("bgFillStyleLst", xmlns::drawingm)
{
    auto solidFill = new SolidFill();
    auto schemeColor = new SchemeColor();
    schemeColor->Val->value = SchemeColorValues::PhColor;
    solidFill->AddChildElement(schemeColor);
    this->AddChildElement(solidFill);

    solidFill = new SolidFill();
    schemeColor = new SchemeColor();
    schemeColor->Val->value = SchemeColorValues::PhColor;
    solidFill->AddChildElement(schemeColor);
    auto tint = new Tint();
    tint->Val->value = 95000;
    schemeColor->AddChildElement(tint);
    auto saturationModulation = new SaturationModulation();
    saturationModulation->Val->value = 170000;
    schemeColor->AddChildElement(saturationModulation);
    this->AddChildElement(solidFill);

    this->AddChildElement(new GradientFill());
}
