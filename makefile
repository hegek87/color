all:
	g++ -c -g -Wall colmain.cpp
	g++ -c -g -Wall color.cpp
	g++ -o color color.o colmain.o
	
	mv *.o color bin
