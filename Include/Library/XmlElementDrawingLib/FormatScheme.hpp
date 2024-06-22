#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/BackgroundFillStyleList.hpp>
#include <Library/XmlElementDrawingLib/EffectStyleList.hpp>
#include <Library/XmlElementDrawingLib/FillStyleList.hpp>
#include <Library/XmlElementDrawingLib/LineStyleList.hpp>

namespace OpenXml::Drawing {

class FormatScheme : public XmlElement {
private:
    BackgroundFillStyleList *backgroundFillStyleList;
    EffectStyleList *effectStyleList;
    FillStyleList *fillStyleList;
    LineStyleList *lineStyleList;
public:
    AttributeString *Name;
    FormatScheme();
};

}
