#include "Square.h"

Square::Square() {
	_edge = 0;
}

Square::Square(float edge) {
	_edge = edge;
}

float Square::edge() const {
	return _edge;
}

void Square::setEdge(float value) {
	_edge = value;
}

float Square::getArea() const {
	return _edge * _edge;
}

float Square::getPerimeter() const {
	return _edge * 4;
}