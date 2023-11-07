OutDir=../../out/
Target=$(OutDir)$(LibName)
IncDir=../../Include/

Object=$(patsubst %.cpp,%.o,$(Source))

all: $(Target)

$(Target): $(Object)
	ar rcs $(Target) $(Object)

%.o: %.cpp
	g++ -I$(IncDir) -c $<

clean:
	rm $(Target) $(Object)
