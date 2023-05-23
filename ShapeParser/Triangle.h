#pragma once
#include "Shape.h"

class Triangle : public Shape
{
private:
	float _edgeA;
	float _edgeB;
	float _edgeC;
public:
	Triangle();
	Triangle(float, float, float);

public:
	//setter
	void setEdgeA(float);
	void setEdgeB(float);
	void setEdgeC(float);

	//getter
	float edgeA();
	float edgeB();
	float edgeC();

public:
	float getArea() override;
	float getPerimeter() override;
};

