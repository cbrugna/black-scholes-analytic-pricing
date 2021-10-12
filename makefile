
black_scholes: main.o black_scholes.h
	g++ main.o -o black_scholes

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o black_scholes
	