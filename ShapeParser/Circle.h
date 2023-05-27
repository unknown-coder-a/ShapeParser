#pragma once
#include "Shape.h"

class Circle: public Shape{
private:
	double _radius;

public:
	Circle();
	Circle(double);

public:
	double radius() const;
	void setRadius(double);

public:
	double getArea() const override;
	double getPerimeter() const override;

	virtual void printWithRawProperties();
	virtual void printWithCalculatedProperties();
};

