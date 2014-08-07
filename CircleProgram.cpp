#include <iostream>
#include "Circle.h" 
using namespace std; 

int main() {
        double testX = 1.0;
        double testY = 1.0;
                
        Circle circ0;
        circ0.setRadius(5.0);
        circ0.setX(3.0);
        circ0.setY(3.0);

	Circle circ2;
	circ2.setRadius(1.0);
	circ2.setX(200.0);
	circ2.setY(200.0);

        cout << "Local circle x: " << circ0.getX() << endl;
        cout << "Local circle y: " << circ0.getY() << endl;
        cout << "Local circle radius: " << circ0.getRadius() << endl;
        cout << "Local circle area: " << circ0.getArea() << endl;
        if(circ0.containsPoint(testX, testY) == true) {
                cout << "Local circle does contain point (" << testX << "," << testY << ")." << endl;
        }
        else {
                cout << "Local circle does not contain point (" << testX << "," << testY << ")." << endl;
        }
	if(circ0.overlaps(circ2) == true) {
		cout << "Circle 0 and Circle 2 overlap." << endl;
	}
	else if(circ0.overlaps(circ2) == false)  {
		cout << "Circle 0 and Circle 2 do not overlap." << endl;
	}
        cout << endl;
       
        Circle* circ1 = new Circle();
        Circle *circPt = circ1;
        (*circPt).setRadius(5.0);
        (*circPt).setX(3.0);
        (*circPt).setY(3.0);
        cout << "Pointer circle x: " << circPt->getX() << endl;
        cout << "Pointer circle y: " << circPt->getY() << endl;
        cout << "Pointer circle radius: " << circPt->getRadius() << endl;
        cout << "Pointer circle area: " << circPt->getArea() << endl;
        if((*circPt).containsPoint(testX, testY) == true) {
                cout << "Pointer circle does contain point (" << testX << "," << testY << ")." << endl;
        }
        else {
                cout << "Pointer circle does not contain point (" << testX << "," << testY << ")." << endl;
        }
        cout << endl;
        Circle circArray[3];
        for(int i =0; i < 3; i++) {
                circArray[i].setRadius(5.0);
                circArray[i].setX(3.0);
                circArray[i].setY(3.0);
        }
        cout << "First element's x in local array: " << circArray[0].getX() << endl;
        cout << "First element's y in local array: " << circArray[0].getY() << endl;
        cout << "First element's radius in local array: " << circArray[0].getRadius() << endl;
        cout << "First element's area in local array: " << circArray[0].getArea() << endl;
        if(circArray[0].containsPoint(testX, testY) == true) {
                cout << "First element in local array does contain point (" << testX << "," << testY << ")." << endl;
        }
        else {
                cout << "First element in local array does not contain point (" << testX << "," << testY << ")." << endl; 
        }
        cout << endl;
        
        Circle *circDArray;
        circDArray = new Circle[3];
        for(int i = 0; i < 3; i++) {
                (circDArray[i]).setRadius(5.0);
                (circDArray[i]).setX(3.0);
                (circDArray[i]).setY(3.0);
        }
        cout << "First element's x in DA array: " << (circDArray[0]).getX() << endl;
	cout << "First element's y in DA array: " << (circDArray[0]).getY() << endl;
        cout << "First element's radius in DA array: " << (circDArray[0]).getRadius() << endl;
        cout << "First element's area in DA array: " << (circDArray[0]).getArea() << endl;
        if((circDArray[0]).containsPoint(testX, testY) == true) {
                cout << "First element in DA array does contain point (" << testX << "," << testY << ")." << endl; 
        }
        else {
                cout << "First element in DA array does not contaion point (" << testX << "," << testY << ")." << endl; 
        }
        cout << endl;	

        return 0;
}

