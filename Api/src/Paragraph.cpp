#include <Api/SlideObject.hpp>

using namespace biswas;

Paragraph::Paragraph (
    OpenXml::Drawing::Paragraph *paragraph
    )
{
    this->paragraph = paragraph;
}

void
Paragraph::AddRun (
    std::string text,
    bool bold,
    bool italic
    ) const
{
    auto run = new OpenXml::Drawing::Run();
    run->text->text = text;

    run->runProperties->Bold->value = bold;
    run->runProperties->Italic->value = italic;
    this->paragraph->AddChildElement(run);
}
