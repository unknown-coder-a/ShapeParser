#define _USE_MATH_DEFINES

#include "Circle.h"
#include <cmath>

Circle::Circle() {
	_radius = 0;
}

Circle::Circle(float value) {
	_radius = value;
}

float Circle::getRadius() {
	return _radius;
}

void Circle::radius(float value) {
	_radius = value;
}

float Circle::getArea() {
	return M_PI * _radius;
}

float Circle::getPerimeter() {
	return M_PI * 2 * _radius;
}