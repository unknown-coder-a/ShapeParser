#include "Shape.h"

Shape::Shape() {
	_printer = nullptr;
}

void Shape::setPrinter(std::shared_ptr<IPrint> p) {
	_printer = p;
}