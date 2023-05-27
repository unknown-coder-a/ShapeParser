#pragma once
#include "Shape.h"

class Circle: public Shape{
private:
	double _radius;

public:
	Circle();
	Circle(double);

public:
	//getter
	double radius() const;
	
	//setter
	void setRadius(double);

public:

	//tính diện tích của hình tròn
	double getArea() const override;

	//tính chu vi của hình tròn
	double getPerimeter() const override;


	/// <summary>
	/// dùng để in kết quả sau khi parse
	/// </summary>
	virtual void printWithRawProperties();

	/// <summary>
	/// dùng để in thông tin chi tiết
	/// </summary>
	virtual void printWithCalculatedProperties();
};

