#include "Triangle.h"

Triangle::Triangle() {
	_edgeA = 0;
	_edgeB = 0;
	_edgeC = 0;
}
Triangle::Triangle(float a, float b, float c) {
	_edgeA = a;
	_edgeB = b;
	_edgeC = c;
}

void Triangle::setEdgeA(float a) {
	_edgeA = a;
}
void Triangle::setEdgeB(float b) {
	_edgeB = b;
}
void Triangle::setEdgeC(float c) {
	_edgeC = c;
}

//getter
float Triangle::edgeA() const {
	return _edgeA;
}
float Triangle::edgeB() const {
	return _edgeB;
}
float Triangle::edgeC() const {
	return _edgeC;
}

float Triangle::getArea() const {
	float s = getPerimeter() / 2;
	return sqrt(s * (s - _edgeA) * (s - _edgeB) * (s - _edgeC));
}
float Triangle::getPerimeter() const {
	return _edgeA + _edgeB + _edgeC;
}

