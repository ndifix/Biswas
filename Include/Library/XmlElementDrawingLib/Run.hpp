#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/RunProperties.hpp>
#include <Library/XmlElementDrawingLib/Text.hpp>

namespace OpenXml::Drawing {

class Run : public XmlElement {
private:
public:
    RunProperties *runProperties;
    Text *text;

    Run();
};

}
