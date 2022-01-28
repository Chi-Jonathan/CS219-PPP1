
proj1: main.o Add.o DecToHex.o HexToDec.o
	g++ main.o Add.o DecToHex.o HexToDec.o -o proj1
		
main.o: main.cpp Add.h DecToHex.h HexToDec.h
	g++ -c main.cpp
	
Add.o: Add.cpp Add.h HexToDec.h
	g++ -c Add.cpp
	
DecToHex.o: DecToHex.cpp DecToHex.h
	g++ -c DecToHex.cpp

HexToDec.o: HexToDec.cpp HexToDec.h
	g++ -c HexToDec.cpp
	
clean:
	rm *.o proj1
