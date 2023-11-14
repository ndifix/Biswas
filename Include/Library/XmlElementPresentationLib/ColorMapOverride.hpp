#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/MasterColorMapping.hpp>

namespace OpenXml::Presentation {

class ColorMapOverride : public XmlElement {
private:
    Drawing::MasterColorMapping *masterColorMapping;
public:
    ColorMapOverride();
};

}
