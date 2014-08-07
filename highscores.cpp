//Rosalba Rodriguez
#include <iostream>
#include <algorithm> 
using namespace std;

void initializeData(string n[], int s[], int size);
void sortData(string n[], int s[], int size);
void displayData(string n[], int s[], int size);

const int size = 5;

int main() {
	string n[size];
	int s[size]; 
 
	initializeData(n, s, size);
	sortData(n, s, size);
	displayData(n, s, size);
	
	return 0; 
} 
void initializeData(string n[], int s[], int size) {
	for(int i = 0; i < size; i++) {
		cout << "Enter the name for Player #" << i+ 1 << " : "; 
		cin >> n[i]; 
		cout << "Enter the score for Player #" << i + 1 << " : ";
		cin >> s[i];
		cout << endl; 
	}
} 
void sortData(string n[], int s[], int size) {
	int smallestInd = 0; 
	for(int i = 0; i + 1 < size; i++) {
		smallestInd = i;
		for(int j = i; j < size; j++) {
			if(s[j] < s[smallestInd]) {
				smallestInd = j;
			}
		} 	
		if(smallestInd != i) {
			int tmpInt = 0;
			string tmpStr = " ";

			tmpInt = s[i];
			tmpStr = n[i]; 
			s[i] = s[smallestInd];
			n[i] = n[smallestInd];
			s[smallestInd] = tmpInt;
			n[smallestInd] = tmpStr;
		}				
	}	
}
void displayData(string n[], int s[], int size) {
	cout << "Top Scorers: " << endl << endl; 

	for(int i = size - 1; i > -1; i--) {
		cout << n[i] << ": " << s[i] << endl;
	}
	cout << endl;
}
		




