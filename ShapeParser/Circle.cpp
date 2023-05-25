#define _USE_MATH_DEFINES

#include "Circle.h"
#include <cmath>

Circle::Circle() {
	_radius = 0;
}

Circle::Circle(float value) {
	_radius = value;
}

float Circle::radius() const {
	return _radius;
}

void Circle::setRadius(float value) {
	_radius = value;
}

float Circle::getArea() const {
	return M_PI * _radius;
}

float Circle::getPerimeter() const {
	return M_PI * 2 * _radius;
}