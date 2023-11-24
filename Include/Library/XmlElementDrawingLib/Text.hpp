#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/RunProperties.hpp>
#include <string>

namespace OpenXml::Drawing {

class Text : public XmlElement {
private:
    std::string text;
public:
    inline Text() : XmlElement("t", xmlns::drawingm) {};

    virtual void
    Write (
        std::ofstream &ofs,
        bool useSignature
        ) override;
};

}
