#include "NumberGuesser.h"

int smaller; 
int bigger;
int midpoint; 
int guess; 

NumberGuesser::NumberGuesser() {
	smaller = 1;
	bigger = 100;
}
NumberGuesser::NumberGuesser(int lowerBound, int upperBound) {
	smaller = lowerBound;
	bigger = upperBound;
}
void NumberGuesser::higher() { 
	smaller = guess;
}
void NumberGuesser::lower() {
	bigger  = guess;
}
int NumberGuesser::getCurrentGuess() {
	midpoint = ((bigger + midpoint) / 2);
	return midpoint; 
}
void NumberGuesser::reset() {
	smaller = 1;
	bigger = 100; 
}
