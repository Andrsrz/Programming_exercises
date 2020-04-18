/* Let Catch provide main(): */
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

/* NO TEST CASES IN HERE */

/*
 * Compile:
 * g++ -std=c++11 -Wall -I$(CATCH_SINGLE_INCLUDE) -c 6.25-test-main.cpp
 * g++ -std=c++11 -Wall -I$(CATCH_SINGLE_INCLUDE) -c 6.25-test-convertMinutesToSeconds.cpp
 * g++ -std=c++11 -Wall -I$(CATCH_SINGLE_INCLUDE) -c 6.25-test-convertHoursToSeconds.cpp
 * g++ -std=c++11 -Wall -I$(CATCH_SINGLE_INCLUDE) -o 6-25 6.25-test-main.o 6.25-test-convertMinutesToSeconds.o 6.25-test-convertHorusToSeconds.o 6.25-test-getSeconds.cpp
 * Run:
 * 6-25 --success
*/
