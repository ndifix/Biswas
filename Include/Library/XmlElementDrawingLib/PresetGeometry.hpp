#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/AdjustValueList.hpp>

namespace OpenXml::Drawing {

class PresetGeometry : public XmlElement {
private:
    AdjustValueList *adjustValueList;
public:
    AttributeShapeType *Preset;
    PresetGeometry();
};

}
