#include <Library/DocumentLib.hpp>

int main() {
    biswas::Document doc;

    biswas::Theme theme = doc.presentation.AddTheme();
    biswas::SlideMaster slideMaster = doc.presentation.AddSlideMaster(theme);

    doc.Write("sample.pptx");
}
