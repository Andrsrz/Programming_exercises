CPP= g++
STANDAR= -std=c++11
I_CATCH_SINGLE_INCLUDE= -I/usr/include/catch2

6-26: test-calculateCtoF.o test-calculateFtoC.o tests-main.o
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -o 6-26 tests-main.o test-calculateCtoF.o test-calculateFtoC.o

test-calculateCtoF.o: test-calculateCtoF.cpp
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -c test-calculateCtoF.cpp

test-calculateFtoC.o: test-calculateFtoC.cpp
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -c test-calculateFtoC.cpp

tests-main.o: tests-main.cpp
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -c tests-main.cpp

clean:
	rm *.o 6-26
