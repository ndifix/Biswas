#include <iostream>
#include <Api/Document.hpp>

int main() {
    biswas::Document doc;

    biswas::Theme theme = doc.presentation->AddTheme();
    biswas::SlideMaster slideMaster = doc.presentation->AddSlideMaster(theme);
    biswas::SlideLayout slideLayout = doc.presentation->AddSlideLayout(slideMaster);
    biswas::Slide slide = doc.presentation->AddSlide(slideLayout);

    biswas::TextBox textBoxLayout = slideLayout.AddTextBox();
    textBoxLayout.SetPosition(EmuFromMm(100), EmuFromMm(100));
    textBoxLayout.SetSize(EmuFromMm(100), EmuFromMm(100));
    textBoxLayout.paragraph->AddRun("hoge");
    biswas::TextBox textboxSlide = slide.AddTextBox();
    textboxSlide.SetPosition(EmuFromMm(200), EmuFromMm(100));
    textboxSlide.SetSize(EmuFromMm(100), EmuFromMm(100));
    textboxSlide.paragraph->AddRun("fuga", false, true);

    biswas::Picture picture = slide.AddPicture("black.png");

    biswas::Status Status = doc.Write("sample.pptx");
    if (Status == biswas::Status::Success) {
        std::cout << "done!\n";
    } else {
        std::cout << "failed...\n";
    }
}
