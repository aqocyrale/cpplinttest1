all:
	mkdir bin
	g++ -o bin/test src/main.cpp
	bin/test
