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
	float diagnal1();
	float diagnal2();

	void setDiagnal1(float);
	void setDiagnal2(float);
public:
	float getPerimeter() override;
	float getArea() override;
};

