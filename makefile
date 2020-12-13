CXX = g++
CXXFLAGS = -std=c++14 -g -Wall
LDFLAGS =


all: cripto

cripto: cripto.o funciones_cripto.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: all clean

	$(CXX) $(CXXFLAGS) -c $<

clean :
	rm -f cripto *.o
	rm -rf ~ basura b i
	rm -rf a.out
	find . -name '~' -exec rm {} ;
	find . -name basura -exec rm {} ;
