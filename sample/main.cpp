#include <Library/DocumentLib.hpp>

int main() {
    biswas::Document doc;

    biswas::Theme theme = doc.presentation->AddTheme();
    biswas::SlideMaster slideMaster = doc.presentation->AddSlideMaster(theme);
    biswas::SlideLayout slideLayout = doc.presentation->AddSlideLayout(slideMaster);
    biswas::Slide slide = doc.presentation->AddSlide(slideLayout);

    biswas::TextBox textBoxLayout = slideLayout.AddTextBox();
    textBoxLayout.SetSize(100000, 100000);
    textBoxLayout.paragraph->AddRun("hoge");
    biswas::TextBox textboxSlide = slide.AddTextBox();
    textboxSlide.SetSize(100000, 100000);
    textboxSlide.paragraph->AddRun("fuga", false, true);

    doc.Write("sample.pptx");
}
