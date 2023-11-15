#include <Library/XmlElementPresentationLib.hpp>

using namespace OpenXml::Presentation;

NonVisualShapeDrawingProperties::NonVisualShapeDrawingProperties (
    ) : XmlElement("cNvSpPr", xmlns::presenta)
{
    this->TextBox = new AttributeBool("txBox");
    this->AddAttribute(this->TextBox);
}
