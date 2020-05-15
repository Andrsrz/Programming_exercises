CC = g++
STD = -std=c++11
I_CATCH_SINGLE_INCLUDE = -I/usr/include/catch2

6-37: test-main.o testFibonacci.o testFibonacciRecursive.o
	$(CC) $(STD) -Wall $(I_CATCH_SINGLE_INCLUDE) -o 6-37 test-main.o testFibonacci.o testFibonacciRecursive.o

testFibonacciRecursive.o: testFibonacciRecursive.cpp
	$(CC) $(STD) -Wall $(I_CATCH_SINGLE_INCLUDE) -c testFibonacciRecursive.cpp

testFibonacci.o: testFibonacci.cpp
	$(CC) $(STD) -Wall $(I_CATCH_SINGLE_INCLUDE) -c testFibonacci.cpp

test-main.o: test-main.cpp
	$(CC) $(STD) -Wall $(I_CATCH_SINGLE_INCLUDE) -c test-main.cpp

clean:
	rm *.o 6-37
