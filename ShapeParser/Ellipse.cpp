#define _USE_MATH_DEFINES

#include "Ellipse.h"
#include <cmath>

Ellipse::Ellipse() {
    _minorAxis = 0;
    _majorAxis = 0;
}

Ellipse::Ellipse(float a, float b) {
    this->_minorAxis = a;
    this->_majorAxis = b;
}

double Ellipse::getArea() {
    return M_PI * _minorAxis * _majorAxis;
}

double Ellipse::getPerimeter() {
    double h = pow((_minorAxis - _majorAxis), 2) / pow((_minorAxis + _majorAxis), 2);
    return M_PI * (_minorAxis + _majorAxis) * (1 + (3 * h) / (10 + sqrt(4 - 3 * h)));
}


void Ellipse::setMinorAxis(float value) {
    _minorAxis = value;
}
void Ellipse::setMajorAxis(float value) {
    _majorAxis = value;
}

float Ellipse::minorAxis() {
    return _minorAxis;
}
float Ellipse::majorAxis() {
    return _majorAxis;
}