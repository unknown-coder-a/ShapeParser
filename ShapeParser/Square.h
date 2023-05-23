#pragma once
#include "Shape.h"

class Square : public Shape {
private:
	float _edge;

public:
	float edge();
	void setEdge(float);

public:
	float getPerimeter() override;
};