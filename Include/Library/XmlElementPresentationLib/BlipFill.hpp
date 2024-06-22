#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/Blip.hpp>

namespace OpenXml::Presentation {

class BlipFill : public XmlElement {
private:
    Drawing::Blip *blip;
public:
    BlipFill();
};

}
