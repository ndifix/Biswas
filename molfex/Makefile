Target=../molfex.out
IncDir=../Include/
Source=main.cpp\

Archive=\
../out/libDocument.a\
../out/libPresentation.a\
../out/libPart.a\
../out/libUtil.a\
../out/libXmlElement.a\
../out/libXmlFile.a\
../out/libXmlBase.a

$(Target): $(Source) $(Archive)
	g++ -I$(IncDir) $(Source) $(Archive) -o $(Target)

%.a:
	make -C $(addprefix ../Library/, $(patsubst lib%, %Lib, $(basename $(notdir $@))))
