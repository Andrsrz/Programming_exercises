CPP= g++
STANDAR= -std=c++11
I_CATCH_SINGLE_INCLUDE= -I/usr/include/catch2

6-27: test-getSmallest.o tests-main.o
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -o 6-27 tests-main.o  test-getSmallest.o

test-getSmallest.o: test-getSmallest.cpp
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -c test-getSmallest.cpp

tests-main.o: tests-main.cpp
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -c tests-main.cpp

clean:
	rm *.o 6-27
