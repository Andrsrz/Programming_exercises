CPP= g++
STANDAR= -std=c++11
I_CATCH_SINGLE_INCLUDE= -I/usr/include/catch2

6-25: test-convertHoursToSeconds.o test-convertMinutesToSeconds.o tests-main.o
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -o 6-25 tests-main.o test-convertMinutesToSeconds.o test-convertHoursToSeconds.o

test-convertHoursToSeconds.o: test-convertHoursToSeconds.cpp
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -c test-convertHoursToSeconds.cpp

test-convertMinutesToSeconds.o: test-convertMinutesToSeconds.cpp
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -c test-convertMinutesToSeconds.cpp

tests-main.o: tests-main.cpp
	$(CPP) $(STANDAR) -Wall $(I_CATCH_SINGLE_INCLUDE) -c tests-main.cpp

clean:
	rm *.o 6-25
