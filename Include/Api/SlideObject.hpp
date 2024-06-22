#pragma once

#include <memory>
#include <Library/XmlElementDrawingLib/Paragraph.hpp>
#include <Library/XmlElementPresentationLib/Shape.hpp>

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
        Emu cx,
        Emu cy
        );

    void
    SetPosition (
        Emu x,
        Emu y
        );
};

}
