#pragma once

#include <memory>
#include <Library/XmlElementPresentationLib.hpp>

// API用クラス
namespace biswas {

class TextBox {
private:
    OpenXml::Presentation::Shape* shape;
public:

    inline
    TextBox (
        OpenXml::Presentation::Shape* textBox
        ) { this->shape = textBox; }
};

}
