#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/RunProperties.hpp>

namespace OpenXml::Drawing {

class Run : public XmlElement {
private:
    RunProperties *runProperties;
public:
    Run();
};

}
