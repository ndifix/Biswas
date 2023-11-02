#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

NonVisualGroupShapeProperties::NonVisualGroupShapeProperties (
    ) : XmlElement("nvGrpSpPr", xmlns::presenta)
{
    this->nonVisualDrawingProperties = new NonVisualDrawingProperties();
    this->nonVisualGroupShapeDrawingProperties = new NonVisualGroupShapeDrawingProperties();
    this->applicationNonVisualDrawingProperties = new ApplicationNonVisualDrawingProperties();
    this->AddChildElement(this->nonVisualDrawingProperties);
    this->AddChildElement(this->nonVisualGroupShapeDrawingProperties);
    this->AddChildElement(this->applicationNonVisualDrawingProperties);
}
