OutDir=../out/
Target=$(OutDir)libApi.a

LibDir=../Library/
Library=\
PartLib\
UtilLib\
XmlElementPresentationLib\
XmlElementDrawingLib\
XmlElementLib\
XmlFileLib\
XmlBaseLib\

Include=-IInclude/ -I../Include/
Source=\
src/Document.cpp\
src/Paragraph.cpp\
src/Presentation.cpp\
src/Slide.cpp\
src/SlideLayout.cpp\
src/TextBox.cpp\

Archive=$(patsubst %Lib, ../out/lib%.a, $(Library))
Object=$(notdir $(Source:.cpp=.o))

.PHONY: all
all: $(Target)

$(Target): $(Object) $(Archive)
	ar rc $(Target) $(Object)

$(Object): $(Source)
	g++ $(Include) -c $^

$(Archive):
	$(foreach lib, $(Library), make -C $(addprefix $(LibDir), $(lib));)

.PHONY: clean
clean:
	rm $(Object)
	rm $(Target)
	$(foreach lib, $(Library), make -C $(addprefix $(LibDir), $(lib)) clean;)
