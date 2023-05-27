#pragma once
#include <memory>
#include "IPrint.h"
class Shape
{
protected:
	std::unique_ptr<IPrint> _printer;
public:
	Shape();
public:
	virtual double getArea() const = 0;
	virtual double getPerimeter() const = 0;


public:
	//getter setter
	void setPrinter(std::unique_ptr<IPrint> printer_);

	virtual void printWithRawProperties() = 0;
	virtual void printWithCalculatedProperties() = 0;

};






