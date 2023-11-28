#include <Library/XmlElementPresentationLib/NonVisualPictureProperties.hpp>

using namespace OpenXml::Presentation;

NonVisualPictureProperties::NonVisualPictureProperties (
    ) : XmlElement("nvPicPr", xmlns::presenta)
{
    this->applicationNonVisualDrawingProperties = new ApplicationNonVisualDrawingProperties();
    this->nonVisualDrawingProperties = new NonVisualDrawingProperties();
    this->AddChildElement(this->nonVisualDrawingProperties);
    this->AddChildElement(this->applicationNonVisualDrawingProperties);
}
