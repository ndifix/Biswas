OutDir=../../out/
Target=$(OutDir)$(LibName)

CXXFLAGS = -Wall -MMD -std=c++17
IncDir=../../Include/

Object=$(patsubst %.cpp,%.o,$(Source))
Depend=$(patsubst %.cpp,%.d,$(Source))

$(Target): $(Object)
	@mkdir -p ${OutDir}
	ar rcs $(Target) $(Object)

%.o: %.cpp
	g++ $(CXXFLAGS) -I$(IncDir) -c $<

-include $(Depend)

clean:
	rm $(Target) $(Object) $(Depend)
