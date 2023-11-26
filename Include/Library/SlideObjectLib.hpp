#pragma once

#include <memory>
#include <Library/XmlElementDrawingLib.hpp>
#include <Library/XmlElementPresentationLib.hpp>

// API用クラス
namespace biswas {

class Paragraph {
private:
    OpenXml::Drawing::Paragraph *paragraph;
public:
    Paragraph (
        OpenXml::Drawing::Paragraph *paragraph
        );

    void
    AddRun (
        std::string text,
        bool bold = false,
        bool italic = false
        ) const;
};

class TextBox {
private:
    OpenXml::Presentation::Shape* shape;
public:
    std::unique_ptr<Paragraph> paragraph;

    TextBox (
        OpenXml::Presentation::Shape* textBox
        );

    void
    SetSize (
        int64_t cx,
        int64_t cy
        );

    void
    SetPosition (
        int64_t x,
        int64_t y
        );
};

}
