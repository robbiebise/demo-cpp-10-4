all: main.cpp functions.cpp
	mkdir -p build
	g++ -o build/app main.cpp functions.cpp