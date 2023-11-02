#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

NonVisualGroupShapeProperties::NonVisualGroupShapeProperties (
    ) : XmlElement("nvGrpSpPr", xmlns::presenta)
{
    this->nonVisualDrawingProperties = new NonVisualDrawingProperties();
    this->AddChildElement(this->nonVisualDrawingProperties);
}
