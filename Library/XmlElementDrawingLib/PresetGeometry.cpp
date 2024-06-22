#include <Library/XmlElementDrawingLib/PresetGeometry.hpp>

using namespace OpenXml::Drawing;

PresetGeometry::PresetGeometry (
    ) : XmlElement("prstGeom", xmlns::drawingm)
{
    this->Preset = new AttributeShapeType("prst");
    this->AddAttribute(this->Preset);
    this->adjustValueList = new AdjustValueList();
    this->AddChildElement(this->adjustValueList);
}
