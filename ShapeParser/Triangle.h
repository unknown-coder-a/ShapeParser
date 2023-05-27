#pragma once
#include "Shape.h"

class Triangle : public Shape
{
private:
	double _edgeA;
	double _edgeB;
	double _edgeC;
public:
	Triangle();
	Triangle(double, double, double);

public:
	//setter
	void setEdgeA(double);
	void setEdgeB(double);
	void setEdgeC(double);

	//getter
	double edgeA() const;
	double edgeB() const;
	double edgeC() const;

public:
	double getArea() const override;
	double getPerimeter() const override;

	virtual void printWithRawProperties();
	virtual void printWithCalculatedProperties();
};

