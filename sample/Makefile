Target=../biswas.out
IncDir=../Include/
Source=main.cpp\

LibDir=../Library/
Library=\
DocumentLib\
PresentationLib\
PartLib\
SlideObjectLib\
UtilLib\
XmlElementPresentationLib\
XmlElementDrawingLib\
XmlElementLib\
XmlFileLib\
XmlBaseLib\

Archive=$(patsubst %Lib, ../out/lib%.a, $(Library))

$(Target): $(Source) $(Archive)
	g++ -I$(IncDir) $(Source) $(Archive) -o $(Target)

$(Archive):
	$(foreach lib, $(Library), make -C $(addprefix $(LibDir), $(lib));)

clean:
	$(foreach lib, $(Library), make -C $(addprefix $(LibDir), $(lib)) clean;)
	rm $(Target)
