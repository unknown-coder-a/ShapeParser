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

	float width();
	float height();

public:
	float getArea() override;
	float getPerimeter() override;
};