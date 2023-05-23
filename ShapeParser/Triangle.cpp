#include "Triangle.h"

Triangle::Triangle() {
	_width = _height = 0;
}

Triangle::Triangle(float width, float height) {
	_width = width;
	_height = height;
}

float Triangle::width() {
	return _width;
}

float Triangle::height() {
	return _height;
}

void Triangle::setHeight(float value) {
	_height = value;
}

void Triangle::setWidth(float value) {
	_width = value;
}

float Triangle::getArea() {
	return _width * _height;
}

float Triangle::getPerimeter() {
	return (_width + _height) * 2;
}