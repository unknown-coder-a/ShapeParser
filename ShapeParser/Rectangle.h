#pragma once
#include "Shape.h"
#include <memory>

class Rectangle :public Shape {
private:
	float _width;
	float _height;

public:
	Rectangle();
	Rectangle(float, float);

public:
	void setWidth(float);
	void setHeight(float);

	float width() const;
	float height() const;

public:
	float getArea() const override;
	float getPerimeter() const override;

	virtual void printWithRawProperties();
	virtual void printWithCalculatedProperties();
};