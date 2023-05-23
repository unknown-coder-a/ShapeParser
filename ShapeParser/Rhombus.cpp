#include "Rhombus.h"

Rhombus::Rhombus() {
	_diagonal1 = _diagonal2 = 0;
}

Rhombus::Rhombus(float diagonal1, float diagonal2) {
	_diagonal1 = diagonal1;
	_diagonal2 = diagonal2;
}

float Rhombus::diagnal1() {
	return _diagonal1;
}

float Rhombus::diagnal2() {
	return _diagonal2;
}

void Rhombus::setDiagnal1(float value) {
	_diagonal1 = value;
}

void Rhombus::setDiagnal2(float value) {
	_diagonal2 = value;
}

float Rhombus::getArea() {
	return _diagonal1 * _diagonal2 / 2;
}

float Rhombus::getPerimeter() {
	return 4 * (_diagonal1 * _diagonal2) / (_diagonal1 + _diagonal2);
}