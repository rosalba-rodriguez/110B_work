#ifndef NUMBERGUESSER_H
#define NUMBERGUESSER_H

class NumberGuesser {
	int smaller;
	int bigger;
	int guess; 

	public:
		NumberGuesser(); 
		NumberGuesser(int lowerBound, int upperBound);
		void higher();
		void lower();
		int getCurrentGuess();
		void reset();
};
#endif
