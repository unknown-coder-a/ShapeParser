#include "Rhombus.h"
#include "RhombusPrinter.h"

Rhombus::Rhombus() {
	_diagonal1 = _diagonal2 = 0;
}

Rhombus::Rhombus(float diagonal1, float diagonal2) {
	_diagonal1 = diagonal1;
	_diagonal2 = diagonal2;
}

float Rhombus::diagonal1() const {
	return _diagonal1;
}

float Rhombus::diagonal2() const {
	return _diagonal2;
}

void Rhombus::setDiagonal1(float value) {
	_diagonal1 = value;
}

void Rhombus::setDiagonal2(float value) {
	_diagonal2 = value;
}

float Rhombus::getArea() const {
	return _diagonal1 * _diagonal2 / 2;
}

float Rhombus::getPerimeter() const {
	return 4 * (_diagonal1 * _diagonal2) / (_diagonal1 + _diagonal2);
}

void  Rhombus::printWithRawProperties() {
	setPrinter(std::make_unique<PrintRhombusWithRawProperties>());
	if (_printer) {
		_printer->print(this);
	}
}
void  Rhombus::printWithCalculatedProperties() {
	setPrinter(std::make_unique<PrintRhombusWithCalculatedProperties>());
	if (_printer) {
		_printer->print(this);
	}
}