//Rosalba Rodriguez 110B
#include <iostream>
#include <cstdlib> 
#include <algorithm>
using namespace std;

int checkNum(int hand[], int num);
bool containsPair(int hand[]);
bool containsTwoPair(int hand[]);
bool containsThreeOfaKind(int hand[]);
bool containsStraight(int hand[]);
bool containsFullHouse(int hand[]);
bool containsFourOfaKind(int hand[]);

const int LENGTH = 5;

int main() {
	int hand[LENGTH]; 
	cout << "Enter five numeric cards, no face cards. Use 2 - 9." << endl;
	for(int i = 0; i < LENGTH; i++) {
		cout << "Card " << i + 1 << ": "; 
		cin >> hand[i]; 
		if(hand[i] < 2 or hand[i] > 9) {
			cout << "Not a valid number. Enter a different card value." << endl; 
			i--;
		} 
	}
	cout << endl; 
	sort(hand, hand + LENGTH); 
	
	if(containsFourOfaKind(hand)) {
		cout << "Four of a kind!" << endl;
	}
	else if(containsFullHouse(hand)) {
		cout << "Full House!" << endl;
	}
	else if(containsStraight(hand)) {
		cout << "Straight!" << endl;
	}
	else if(containsThreeOfaKind(hand)) {
		cout << "Three of a kind!" << endl; 
	}
	else if(containsTwoPair(hand)) {
		cout << "Two pair!" << endl;
	}
	else if(containsPair(hand)) {
		cout << "Pair!" << endl;
	}
	else {
		cout << "High card!" << endl;
	}
	return 0;
}
int checkNum(int hand[], int num) {
	int count = 0;
	for(int i = 0; i < LENGTH; i++) {
		if(hand[i] == num) {
			count++;
		}
	}
	return count;
}	 
bool containsPair(int hand[]) {
	int pairCount = 0;
	for(int i = 0; i < LENGTH - 1; i++) {
		if(hand[i] == hand[i+1]) {
			pairCount++;
		}
	}
	if(pairCount == 1) {
		return true; 
	} else {
		return false;
	}
}
bool containsTwoPair(int hand[]) {
	int pairCount = 0; 
	for(int i = 0; i < LENGTH - 1; i++) {
		if(hand[i] == hand[i+1]) {
			pairCount++;
		}
	}
	if(pairCount == 2) {
		return true;
	} 
	else {
		return false; 
	}
}
bool containsThreeOfaKind(int hand[]) {
	int count = 0; 
	for(int i = 0; i < LENGTH; i++) {
		int check = hand[i];
                count = checkNum(hand, check);
		if(count == 3) {
			return true;
		}
        }
        if(count < 3) {
                return false;
        }
}	
bool containsStraight(int hand[]) {
	for(int i = 0; i < LENGTH - 1; i++) {
		if(hand[i+1] != hand[i] + 1) {
			return false;
		}
	}
	return true; 
}
bool containsFullHouse(int hand[]) {		
	int first = hand[0];
	int last = hand[LENGTH - 1];
	for(int i = 0; i < LENGTH; i++) {
		//first num is 2, last num is 3
		if(checkNum(hand, first) == 2) {
			for(int j = 0; j < LENGTH; j++) {
				if(checkNum(hand, last) == 3) {
					return true;
				}
			}
		}
		//first num is 3, last num is 2 
		else if(checkNum(hand, first) == 3) {
			for(int j = 0; j < LENGTH; j++) {
				if(checkNum(hand, last) == 2) {
					return true;
				}
			}
		}
	}
}
bool containsFourOfaKind(int hand[]) {
	int count = 0; 
	for(int i = 0; i < LENGTH; i++) {
		int check = hand[i];
		count = checkNum(hand, check);
		if(count == 4) {
			return true;
		}
	}
	if(count < 4) {
		return false;
	}
} 
