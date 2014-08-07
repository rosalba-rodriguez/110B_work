#include <iostream>
#include "NumberGuesser.h"
using namespace std;

int main() {
	NumberGuesser game1; 
	char userResponse; 

	cout << "For this game, \'h\' is higher, \'l\' is lower, \'c\' is correct." << endl; 
	cout << "Think of a number between 1 and 100." << endl; 
	cout << "Is the number " << game1.getCurrentGuess() << "? (h/l/c) : "; 
	cin >> userResponse; 
	
	if(userResponse == 'h') {
		game1.higher();
		cout << "Is the number " << game1.getCurrentGuess() << " ? (h/l/c) : "; 
		cin >> userResponse; 
	} 
	else if(userResponse == 'l') {
		game1.lower();
		cout << "Is the number " << game1.getCurrentGuess() << " ? (h/l/c) : ";
		cin >> userResponse; 
	}
	else if(userResponse == 'c') {
		cout << "You picked " << game1.getCurrentGuess() << "? Great pick!" << endl;
		cout << "Do you want to play again? (y/n) : ";
		cin >> userResponse;
		if(userResponse == 'y') {
			cout << "User wants to play again. Reset" << endl;
			game1.reset();
		}
		else if(userResponse == 'n') {
			cout << "Good bye." << endl;
		}
		else {
			cout << "You have to pick either \'y\' or \'n\'." << endl;
		}
	}
	cout << "You have to pick either \'h\', \'l\', or \'c\'." << endl;		

	return 0;
}
