OutDir=../../out/
Target=$(OutDir)$(LibName)
IncDir=../../Include/

Object=$(patsubst %.cpp,%.o,$(Source))

all: $(Target)
	@rm $(Object)

$(Target): $(Object)
	ar rcs $(Target) $(Object)

$(Object):
	g++ -I$(IncDir) -c $(Source)

clean:
	rm $(Target) $(Object)
