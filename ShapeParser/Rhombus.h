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
<<<<<<< HEAD
	float diagonal1();
	float diagonal2();
=======
	float diagonal1() const;
	float diagonal2() const;
>>>>>>> 2983e5a3b3fc72005b6a079b0790a38c9e98552e

	void setDiagonal1(float);
	void setDiagonal2(float);

public:
<<<<<<< HEAD
	float getPerimeter() override;
	float getArea() override;
=======
	float getPerimeter() const override;
	float getArea() const override;
>>>>>>> 2983e5a3b3fc72005b6a079b0790a38c9e98552e

};

