#pragma once
#include "Shape.h"

class Square : public Shape {
private:
	double _edge;

public:
	Square();
	Square(double);

public:
	double edge() const ;
	void setEdge(double);

public:
	double getPerimeter() const override;
	double getArea() const override;

	virtual void printWithRawProperties();
	virtual void printWithCalculatedProperties();
};