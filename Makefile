Brazorobotico: brazorobotico.cpp brazorobotico.h
	g++ -c brazorobotico.cpp

Practica0: practica0.cpp brazorobotico.h
	g++ -c practica0.cpp

Main: brazorobotico.o practica0.o
	g++ -o practica0 practica0.o brazorobotico.o

all: Brazorobotico Practica0 Main

clean:
	rm -f *.o practica0

test: all
	./practica0
