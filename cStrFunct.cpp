#include <iostream>
#include <stdio.h> 
#include <string.h>
#include <string>
#include <algorithm> 
using namespace std;

int lastIndexOf(char *s, char target);
void reverse(char *s);
int replace(char *s, char target, char replacementChar);
int findSubstring(char *s, char substring[]);
bool isPalindrome(char *s);

int main() {
	//TESTS
	char s[] = "Skyscraper";
	char back[] = "flower";
	char substring[] = "ysc";
	char checkPalin[] = "apple";

	lastIndexOf(s, 'q'); 
	reverse(back);
	replace(s, 's', 'Q');
	//findSubstring(s, substring);
	isPalindrome(checkPalin); 

	return 0; 
}
int lastIndexOf(char *s, char target) {
	char* tmp; 
	tmp = strrchr(s, target);
	if(tmp != NULL) {
		cout << "Last occurence of target char in cstring: " << tmp - s + 1 << endl; 	
	}
	return  -1; 
}
void reverse(char *s) {
	char other[strlen(s)]; 
	reverse_copy(s, s + strlen(s), other);	
	cout << "Reverse string: " << other << endl; 
}
int replace(char *s, char target, char replacementChar) {
	int count = 0; 
	for(int i = 0; i < strlen(s); i++) {
		if(s[i] == target) {
			s[i] = replacementChar;
			count++;
		}
	}
	cout << "Replaced array: " << s << endl; 
	return count; 
}
/*int findSubstring(char *s, char substring[]) {
	int foundAt = s.find(substring);
	if(foundAt > 0) {
		cout << "Substring found starting at index: " << foundAt << endl; 
		return foundAt; 
	}
	return -1; 
}*/
bool isPalindrome(char *s) {
	char check[strlen(s)];
	for(int i = strlen(s); i > 0; i--) {
		check[i] = s[i];
	}
	for(int i = 0; i < strlen(s); i++) {
		if(s[i] != check[i]) {
			cout << "Not a palindrome." << endl;
			return false;
		}
		else {
			cout << "Is a palindrome." << endl; 
		}
	}	
	return true;
}
