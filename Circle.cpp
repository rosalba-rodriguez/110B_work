#include <cmath> 
#include "Circle.h" 

double x;
double y;
double radius;
	
Circle::Circle() {
	x = 0.0;
	y = 0.0;
	radius = 1.0; 
} 
Circle::Circle(double radiusValue) {
	radius = radiusValue;
}
Circle::Circle(double xValue, double yValue, double radiusValue) {
	x = xValue;
	y = yValue;
	radius = radiusValue;
}
void Circle::setRadius(double value) {
	radius = value;
}
void Circle::setX(double value) {
	x = value;
}
void Circle::setY(double value) {
	y = value;
}
double Circle::getRadius() {
	return radius;
}
double Circle::getX() {
	return x;
}
double Circle::getY() {
	return y;
}
double Circle::getArea() {
	return radius * radius * 3.14; 
} 
bool Circle::containsPoint(double xValue, double yValue) {
	int totalDist = sqrt(pow((xValue - x) ,2) + pow((yValue - y), 2));
	if(totalDist <= radius) {
		return true;
	}
	return false;
}
bool Circle::overlaps(Circle c) {
	double radiiSum = pow(c.getRadius() + radius, 2);
	double radiiDiff = pow(c.getRadius() - radius, 2);
	double centerDist = pow(c.getX() - x, 2) + pow(c.getY() - y, 2);

	if(radiiDiff <= centerDist && centerDist <= radiiSum) {
		return true;
	}
	return false;
}




