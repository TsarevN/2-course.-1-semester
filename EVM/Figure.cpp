#include "Figure.h"
#include <math.h>

Rectangle::Rectangle(double length_, double widht_)
{
	length = length_;
	widht = widht_;
}

double Rectangle::Perimeter()
{
	return (widht * length) * 2;
}

double Rectangle::Square()
{
	return widht * length;
}

Circle::Circle(double radius_)
{
	radius = radius_;
}

double Circle::Perimeter()
{
	return 3.14 * radius * 2;
}

double Circle::Square()
{
	return 3.14 * (radius * radius);
}

Triangle::Triangle(double sideOne_, double sideTwo_, double sideThree_)
{
	sideOne = sideOne_;
	sideTwo = sideTwo_;
	sideThree = sideThree_;
}

double Triangle::Perimeter()
{
	return sideOne + sideTwo + sideThree;
}

double Triangle::Square()
{
	//находим полупериметр
	double p = (sideOne + sideTwo + sideThree) / 2;
	//находим площадь
	double s = pow(p * (p - sideOne) * (p - sideTwo) * (p - sideThree), 0.5);
	return s;
}