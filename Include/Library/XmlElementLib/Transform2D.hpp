#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementLib/Extents.hpp>
#include <Library/XmlElementLib/Offset.hpp>

namespace OpenXml::Drawing {

class Transform2D : public XmlElement {
private:
public:
    ChildExtents *childExtents;
    ChildOffset *childOffset;
    Extents *extents;
    Offset *offset;
    Transform2D();
};

}
