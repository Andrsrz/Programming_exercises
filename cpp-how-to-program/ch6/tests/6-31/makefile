CC = g++
STD = -std=c++11
I_CATCH_SINGLE_INCLUDE = -I/usr/include/catch2

6-31: test-orderVector.o test-getFactors.o test-main.o
	$(CC) $(STD) -Wall $(I_CATCH_SINGLE_INCLUDE) -o 6-31 test-main.o test-getFactors.o test-orderVector.o

test-orderVector.o: test-orderVector.cpp
	$(CC) $(STD) -Wall $(I_CATCH_SINGLE_INCLUDE) -c test-orderVector.cpp

test-getFactors.o: test-getFactors.cpp
	$(CC) $(STD) -Wall $(I_CATCH_SINGLE_INCLUDE) -c test-getFactors.cpp

test-main.o: test-main.cpp
	$(CC) $(STD) -Wall $(I_CATCH_SINGLE_INCLUDE) -c test-main.cpp

clean:
	rm *.o 6-31
