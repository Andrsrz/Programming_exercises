CC = g++
STD = -std=c++11
I_CATCH_SINGLE_INCLUDE = -I/usr/include/catch2

6-36: testPower.o test-main.o
	$(CC) $(STD) -Wall $(I_CATCH_SINGLE_INCLUDE) -o 6-36 test-main.o testPower.o

testPower.o: testPower.cpp
	$(CC) $(STD) -Wall $(I_CATCH_SINGLE_INCLUDE) -c testPower.cpp

test-main.o: test-main.cpp
	$(CC) $(STD) -Wall $(I_CATCH_SINGLE_INCLUDE) -c test-main.cpp

clean:
	rm *.o 6-36
