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
float Triangle::edgeA() {
	return _edgeA;
}
float Triangle::edgeB() {
	return _edgeB;
}
float Triangle::edgeC() {
	return _edgeC;
}

float Triangle::getArea() {
	float s = getPerimeter() / 2;
	return sqrt(s * (s - _edgeA) * (s - _edgeB) * (s - _edgeC));
}
float Triangle::getPerimeter() {
	return _edgeA + _edgeB + _edgeC;
}

