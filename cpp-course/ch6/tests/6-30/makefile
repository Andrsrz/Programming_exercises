CPP= g++
STANDAR= -std=c++11
I_CATCH_SINGLE_INCLUDE= -I/usr/include/catch2

6-30: test-printReversedNumber.o test-main.o
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -o 6-30 test-main.o test-printReversedNumber.o

test-printReversedNumber.o: test-printReversedNumber.cpp
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -c test-printReversedNumber.cpp

test-main.o: test-main.cpp
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -c test-main.cpp

clean:
	rm *.o 6-30
