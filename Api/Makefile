OutDir=../out/
Target=$(OutDir)libApi.a

CXXFLAGS = -Wall -MMD -std=c++17

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
src/Picture.cpp\
src/Presentation.cpp\
src/Slide.cpp\
src/SlideLayout.cpp\
src/TextBox.cpp\

Archive=$(patsubst %Lib, ../out/lib%.a, $(Library))
Object=$(notdir $(Source:.cpp=.o))
Depend=$(patsubst %.o,%.d,$(Object))

.PHONY: all
all: $(Target)

$(Target): $(Object) $(Archive)
	ar rc $(Target) $(Object)

$(Object):
	g++ $(CXXFLAGS) $(Include) -c src/$(@:.o=.cpp)

-include $(Depend)

$(Archive): FORCE
	make -C ../Library/$(patsubst lib%,%, $(basename $(@F)))Lib

.PHONY: FORCE
FORCE:

.PHONY: clean
clean:
	$(foreach lib, $(Library), make -C $(addprefix $(LibDir), $(lib)) clean;)
	rm $(Object) $(Target) $(Depend)
