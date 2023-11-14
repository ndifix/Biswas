#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/Extents.hpp>
#include <Library/XmlElementDrawingLib/Offset.hpp>

namespace OpenXml::Drawing {

class Transform2D : public XmlElement {
private:
public:
    Extents *extents;
    Offset *offset;
    Transform2D();
};

}
