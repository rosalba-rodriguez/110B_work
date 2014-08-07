//Rosalba Rodriguez
#include <iostream>
using namespace std;

void noNegatives(int* x);
void swap(int* first, int* second);

int main() {
	//step 1
	int x = 0;
	int y = 0;

	//step 2
	int* p1;

	//step 3
	p1 = &x;
	
	//step 4 
	*p1 = 99;
	
	//step 5
	cout << "Step 5 -- Value of x using x: " << x << endl;  
	
	//step 6
	cout << "Step 6 -- Value of x using pointer to x: " << *p1 << endl << endl;

	//step 7
	p1 = &y;

	//step 8 
	*p1 = -300; 

	//step 9
	int temp = 0;
	int* p2;

	//step 10
	p2 = &x;
	temp = *p2;
	*p2 = *p1;
	*p1 = temp; 

	//step 12
	noNegatives(&x);
	noNegatives(&y);
	
	//step 13
	cout << "Step 13 -- Value of x after negative function: " << *p2 << endl;
	p2 = &y;
	cout << "Step 13 -- Value of y after negative function: " << *p2 << endl << endl; 	

	//step 14
	int a[2];
	
	//step 15
	p2 = &x;
	a[0] = *p2; 
	
	//step 16
	p2 = &y;
	a[1] = *p2;

	//step 17
	cout << "Step 17 -- First element's address in array: " << &a[0] << endl;
	
	//step 18
	cout << "Step 18 -- Second elemen's address in array: " << &a[1] << endl << endl;

	//step 19
	p1 = &a[0];
	p2 = &a[1];
	temp = *p1;
	*p1 = *p2;
	*p2 = temp; 

	//step 20
	cout << "Step 20 -- First element in array after swap using array: " << a[0] << endl;
	cout << "Step 20 -- Second element in array after swap using array: " << a[1] << endl << endl; 
	
	//step 22
	swap(&x, &y); 
	cout << "Step 22 -- Value of x after swap function using x: " << x << endl;
	cout << "Step 22 -- Value of y after swap function using y: " << y << endl << endl; 

	//step 23
	swap(&a[0], &a[1]);
	cout << "Step 23 -- Value of first element after swap function using array: " << a[0] << endl;
	cout << "Step 23 -- Value of second element after swap function using array: " << a[1] << endl << endl; 
} 
//step 11
void noNegatives(int* x) {
	if(*x < 0) {
		*x = 0;
	}
}
//step 21
void swap(int* first, int* second) {
	int temp = 0;
	temp = *first;
	*first = *second;
	*second = temp; 
}
