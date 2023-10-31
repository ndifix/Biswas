#include <Library/XmlElementLib.hpp>

using namespace xmlElm;

GroupShapeProperties::GroupShapeProperties (
    ) : XmlElement("grpSpPr", xmlns::presenta)
{
    this->transformGroup = new Transform2D();
    this->AddChildElement(this->transformGroup);
}
