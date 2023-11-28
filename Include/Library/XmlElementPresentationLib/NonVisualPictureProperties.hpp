#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementPresentationLib/ApplicationNonVisualDrawingProperties.hpp>
#include <Library/XmlElementPresentationLib/NonVisualDrawingProperties.hpp>

namespace OpenXml::Presentation {

class NonVisualPictureProperties : public XmlElement {
private:
public:
    ApplicationNonVisualDrawingProperties *applicationNonVisualDrawingProperties;
    NonVisualDrawingProperties *nonVisualDrawingProperties;

    NonVisualPictureProperties();
};

}
