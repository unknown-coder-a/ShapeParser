#include "Rectangle.h"

Rectangle::Rectangle(){
	_width = _height = 0;
}

Rectangle::Rectangle(float width, float height) {
	_width = width;
	_height = height;
}

void Rectangle::setHeight(float value) {
	_height = value;
}

void Rectangle::setWidth(float value) {
	_width = value;
}

float Rectangle::height() {
	return _height;
}

float Rectangle::width() {
	return _width;
}

float Rectangle::getArea() {
	return _width * _height;
}

float Rectangle::getPerimeter() {
	return (_width + _height) * 2;
}