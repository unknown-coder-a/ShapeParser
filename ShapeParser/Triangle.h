#pragma once
#include "Shape.h"
class Triangle:public Shape
{
private:
	float _width;
	float _height;

public:
	float width();
	float height();
	void setWidth(float);
	void setHeight(float);

public:
		float getPerimeter() override;

};

