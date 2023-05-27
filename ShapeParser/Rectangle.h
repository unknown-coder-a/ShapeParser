#pragma once
#include "Shape.h"
#include <memory>

class Rectangle :public Shape {
private:
	double _width;
	double _height;

public:
	Rectangle();
	Rectangle(double, double);

public:
	void setWidth(double);
	void setHeight(double);

	double width() const;
	double height() const;

public:
	double getArea() const override;
	double getPerimeter() const override;

	virtual void printWithRawProperties();
	virtual void printWithCalculatedProperties();
};