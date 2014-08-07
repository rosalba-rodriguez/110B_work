#include <iostream>
#include "IntCollection.h"

using namespace std;

int main() {

	IntCollection c;
    
	for (int i = 0; i < 1000000; i++) {
		c.add(99);
	}    
    
	cout << c.get(2222) << endl;
}
