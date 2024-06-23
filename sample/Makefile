Target=sample.out

Api=../out/libApi.a
Libary=\
../out/libPackaging.a\
../out/libPart.a\
../out/libUtil.a\
../out/libXmlElementPresentation.a\
../out/libXmlElementDrawing.a\
../out/libXmlElement.a\
../out/libXmlFile.a\
../out/libXmlBase.a\

IncDir=../Include/
Source=\
dev.cpp\

$(Target): $(Source) $(Api)
	g++ -Wall -std=c++17 -I$(IncDir) $(Source) $(Api) $(Libary) -o $(Target)

$(Api):
	make -C ../Api

clean:
	make -C ../Api clean
	rm $(Target)
