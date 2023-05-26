#pragma once
#include "Shape.h"

class Circle: public Shape{
private:
	float _radius;

public:
	Circle();
	Circle(float);

public:
	float radius() const;
	void setRadius(float);

public:
	float getArea() const override;
	float getPerimeter() const override;

	virtual void printWithRawProperties();
	virtual void printWithCalculatedProperties();
};

