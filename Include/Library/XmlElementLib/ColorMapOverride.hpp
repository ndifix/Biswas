#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/MasterColorMapping.hpp>

namespace OpenXml::Presentation {

class ColorMapOverride : public XmlElement {
private:
    Drawing::MasterColorMapping *masterColorMapping;
public:
    ColorMapOverride();
};

}
