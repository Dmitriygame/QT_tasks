all: main.o computer.o
	g++ main.o computer.o -o Just_calculator

main.o: main.cpp
	g++ -c main.cpp -o main.o

computer.o:
	g++ -c class_Computer.cpp -o computer.o

clean:
	rm -rf *.o
	rm Just_calculator
