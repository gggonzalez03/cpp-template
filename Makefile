main: main.o
	g++ main.o -o main

main.o: main.cpp
	g++ -c main.cpp -std=c++11

clean:
	rm *.o main