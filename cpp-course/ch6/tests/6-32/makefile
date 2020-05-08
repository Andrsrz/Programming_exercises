CC = g++
STD = -std=c++11
I_CATCH_SINGLE_INCLUDE = -I/usr/include/catch2

6-32: test-getQualityPoints.o test-main.o
	$(CC) $(STD) -Wall $(I_CATCH_SINGLE_INCLUDE) -o 6-32 test-main.o test-getQualityPoints.o

test-getQualityPoints.o: test-getQualityPoints.cpp
	$(CC) $(STD) -Wall $(I_CATCH_SINGLE_INCLUDE) -c test-getQualityPoints.cpp

test-main.o: test-main.cpp
	$(CC) $(STD) -Wall $(I_CATCH_SINGLE_INCLUDE) -c test-main.cpp

clean:
	rm *.o 6-32
