#include "Rectangle.h"
#include "RectanglePrinter.h"

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

float Rectangle::height() const {
	return _height;
}

float Rectangle::width() const {
	return _width;
}

float Rectangle::getArea() const {
	return _width * _height;
}

float Rectangle::getPerimeter() const {
	return (_width + _height) * 2;
}

void  Rectangle::printWithRawProperties() {
	setPrinter(std::make_unique<PrintRectangleWithRawProperties>());
	if (_printer) {
		_printer->print(this);
	}
}
void  Rectangle::printWithCalculatedProperties() {
	setPrinter(std::make_unique<PrintRectangleWithCalculatedProperties>());
	if (_printer) {
		_printer->print(this);
	}
}