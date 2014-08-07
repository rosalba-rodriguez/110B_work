#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
	public:
		Circle();
		Circle(double radiusValue);
		Circle(double xValue, double yValue, double radiusValue);
		
		void setRadius(double value);
		void setX(double value); 
		void setY(double value);
		
		double getRadius();
		double getX();
		double getY(); 

		double getArea(); 
		bool containsPoint(double xValue, double yValue);
		bool overlaps(Circle c); 
		
}; 
#endif
