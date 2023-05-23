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
	float diagonal1();
	float diagonal2();

	void setDiagonal1(float);
	void setDiagonal2(float);

public:
	float getPerimeter() override;
	float getArea() override;

};

