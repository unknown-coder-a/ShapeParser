#pragma once
#include "Shape.h"

class Square : public Shape {
private:
	float _edge;

public:
	Square();
	Square(float);

public:
	float edge() const ;
	void setEdge(float);

public:
	float getPerimeter() const override;
	float getArea() const override;

	virtual void printWithRawProperties();
	virtual void printWithCalculatedProperties();
};