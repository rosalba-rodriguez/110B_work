//Rosalba Rodriguez
#include <iostream> 
#include <algorithm> 
#include <cstring> 
#include <string>
#include <sstream> 
using namespace std;

struct highscore {
	int score;
	char* name;
} ;

void initializeData(highscore* scores, int size); 
void sortData(highscore* scores, int size); 
void displayData(highscore* scores, int size);
void getLine(char* s, int arraysize);
char* getLine();

int main() {
	int size = 0;
	highscore* scores = new highscore[size]; 
	cout << "How many names/scores will be entered? ";
	cin >> size; 

	initializeData(scores, size);
	for(int i = 0; i < size; i++) {
		cout << scores[i].name << endl;
		cout << scores[i].score << endl; 
	}
	//sortData(scores, size);
	//displayData(scores, size);
	
	return 0; 
} 
void getLine(char *s, int arraysize) {
	char c;
	int i = 0;
	c = cin.get();
	
	while( c!= '\n' && i < arraysize - 1) {
		s[i] = c;
		i++;
		cin.get();
	}
	s[i] = '\0';
}	
char* getLine() {
	const int BUFFER_SIZE = 1000;
	char buffer[BUFFER_SIZE];
	getLine(buffer, BUFFER_SIZE);
	int length = strlen(buffer);
	char *rValue = new char[length + 1];
	strncpy(rValue, buffer, length);
	return rValue; 
}
void initializeData(highscore* scores, int size) {
	for(int i = 0; i < size; i++) {
		string tmp; 
		cout << "Enter the name for Player #" << i+ 1 << " : "; 
		scores[i].name = getLine(); 
		cout << endl; 
		
		cout << "Enter the score for Player #" << i + 1 << " : ";
		getline (cin, tmp);
		stringstream(tmp) >> scores[i].score;
		cout << endl; 
	}
} 
void sortData(highscore* scores, int size) {
	int smallestInd = 0; 
	for(int i = 0; i + 1 < size; i++) {
		smallestInd = i;
		for(int j = i; j < size; j++) {
			if(scores[j].score < scores[smallestInd].score) {
				smallestInd = j;
			}
		} 	
		if(smallestInd != i) {
			int tmpInt = 0;
			char* tmpStr;
			
			tmpInt = scores[i].score;
			tmpStr = scores[i].name; 
			scores[i].score = scores[smallestInd].score;
			scores[i].name = scores[smallestInd].name;
			scores[smallestInd].score = tmpInt;
			scores[smallestInd].name = tmpStr;
		}				
	}	
}
void displayData(highscore* scores, int size) {
	cout << "Top Scorers: " << endl << endl; 

	for(int i = size - 1; i > -1; i--) {
		cout << scores[i].name << ": " << scores[i].score << endl;
	}
	cout << endl;
}
