OutDir=../../out/
Target=$(OutDir)$(LibName)
IncDir=../../Include/

Object=$(patsubst %.cpp,%.o,$(Source))

$(Target): $(Object)
	@mkdir -p ${OutDir}
	ar rcs $(Target) $(Object)

%.o: %.cpp
	g++ -I$(IncDir) -c $<

clean:
	rm $(Target) $(Object)
