#pragma once
#include "Shape.h"

class Circle: public Shape{
private:
	float _radius;

public:
	Circle();
	Circle(float);

public:
	float getRadius();
	void radius(float);

public:
	float getArea() override;
	float getPerimeter() override;
};

