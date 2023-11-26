#pragma once

#include <Library/XmlBaseLib.hpp>
#include <Library/XmlElementDrawingLib/RunProperties.hpp>
#include <string>

namespace OpenXml::Drawing {

class Text : public XmlElement {
private:
public:
    std::string text;

    inline Text() : XmlElement("t", xmlns::drawingm) {};

    virtual void
    Write (
        std::ofstream &ofs,
        bool useSignature
        ) override;
};

}
