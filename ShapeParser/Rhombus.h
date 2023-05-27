#pragma once
#include "Shape.h"

class Rhombus: public Shape
{
private:
	double _diagonal1;
	double _diagonal2;

public:
	Rhombus();
	Rhombus(double, double);
	
public:
	double diagonal1() const;
	double diagonal2() const;

	void setDiagonal1(double);
	void setDiagonal2(double);

public:
	double getPerimeter() const override;
	double getArea() const override;


	virtual void printWithRawProperties();
	virtual void printWithCalculatedProperties();
};

