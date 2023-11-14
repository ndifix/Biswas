#include <Library/DocumentLib.hpp>

int main() {
    biswas::Document doc;

    biswas::Theme theme = doc.presentation.AddTheme();
    biswas::SlideMaster slideMaster = doc.presentation.AddSlideMaster(theme);
    biswas::SlideLayout slideLayout = doc.presentation.AddSlideLayout(slideMaster);
    biswas::Slide slide = doc.presentation.AddSlide(slideLayout);

    slideLayout.AddTextBox();
    slide.AddTextBox();

    doc.Write("sample.pptx");
}
