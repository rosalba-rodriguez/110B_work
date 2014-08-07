#ifndef RANDOM_NUMBER_GUESSER_H
#define RANDOM_NUMBER_GUESSER_H

#include "NumberGuesser.h" 
class RandomNumberGuesser : public NumberGuesser {
	private:
		int low;
		int high; 
	public: 
		int getCurrentGuess();
};

#endif
