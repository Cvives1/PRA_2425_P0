all: BRAZO

BRAZO: BrazoRobotico.o main.o
	g++ BrazoRobotico.o main.o -o BRAZO

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp

main.o: main.cpp BrazoRobotico.h
	g++ -c main.cpp

clean:
	rm -f *.o BRAZO

test: BRAZO
	./BRAZO
