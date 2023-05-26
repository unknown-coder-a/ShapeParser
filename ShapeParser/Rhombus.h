#pragma once
#include "Shape.h"

class Rhombus: public Shape
{
private:
	float _diagonal1;
	float _diagonal2;

public:
	Rhombus();
	Rhombus(float, float);
	
public:
	float diagonal1() const;
	float diagonal2() const;

	void setDiagonal1(float);
	void setDiagonal2(float);

public:
	float getPerimeter() const override;
	float getArea() const override;


	virtual void printWithRawProperties();
	virtual void printWithCalculatedProperties();
};

