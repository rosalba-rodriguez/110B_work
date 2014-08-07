#include "RandomNumberGuesser.h" 
#include <cstdlib>

int RandomNumberGuesser::getCurrentGuess() {
	srand((unsigned)time(0));
	int floor = low;
	int ceiling = high;
	int range = ceiling - floor;
	int randNum = floor + int((range * rand()) / (RAND_MAX + 1.0));

	return randNum; 
}
