#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/ChildExtents.hpp>
#include <Library/XmlElementDrawingLib/ChildOffset.hpp>
#include <Library/XmlElementDrawingLib/Extents.hpp>
#include <Library/XmlElementDrawingLib/Offset.hpp>

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
