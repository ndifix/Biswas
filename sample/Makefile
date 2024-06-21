Target=sample.out

Api=../out/libApi.a
Libary=\
../out/libPart.a\
../out/libUtil.a\
../out/libXmlElementPresentation.a\
../out/libXmlElementDrawing.a\
../out/libXmlElement.a\
../out/libXmlFile.a\
../out/libXmlBase.a\

IncDir=../Include/
Source=\
main.cpp\

$(Target): $(Source) $(Api)
	g++ -I$(IncDir) $(Source) $(Api) $(Libary) -o $(Target)

$(Api):
	make -C ../Api

clean:
	make -C ../Api clean
	rm $(Target)
