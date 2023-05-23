#include "Square.h"

Square::Square() {
	_edge = 0;
}

Square::Square(float edge) {
	_edge = edge;
}

float Square::edge() {
	return _edge;
}

void Square::setEdge(float value) {
	_edge = value;
}

float Square::getArea() {
	return _edge * _edge;
}

float Square::getPerimeter() {
	return _edge * 4;
}