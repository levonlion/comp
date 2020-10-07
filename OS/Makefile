all: final

final: main.o compstr.o
	g++ main.o compstr.o -o final

compstr.o: compstr.cpp
	g++ -c compstr.cpp -o compstr.o

main.o: main.cpp Header.h
	g++ -c main.cpp -o main.o

clean:
	rm *.o final
