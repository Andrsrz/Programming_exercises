CPP= g++
STANDAR= -std=c++11
I_CATCH_SINGLE_INCLUDE= -I/usr/include/catch2

6-28: test-isPerfect.o tests-main.o
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -o 6-28 tests-main.o test-isPerfect.o

test-isPerfect.o: test-isPerfect.cpp
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -c test-isPerfect.cpp

tests-main.o: tests-main.cpp
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -c tests-main.cpp

clean:
	rm *.o 6-28
