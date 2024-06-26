#include <Library/XmlElementPresentationLib/GroupShapeProperties.hpp>
#include <Library/XmlElementDrawingLib/ChildExtents.hpp>
#include <Library/XmlElementDrawingLib/ChildOffset.hpp>

using namespace OpenXml::Presentation;

GroupShapeProperties::GroupShapeProperties (
    ) : XmlElement("grpSpPr", xmlns::presenta)
{
    this->transformGroup = new Drawing::Transform2D();
    this->AddChildElement(this->transformGroup);

    this->transformGroup->AddChildElement(new Drawing::ChildOffset());
    this->transformGroup->AddChildElement(new Drawing::ChildExtents());
}
