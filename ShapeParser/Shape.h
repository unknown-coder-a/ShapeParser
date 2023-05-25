#pragma once
#include <memory>
#include "IPrint.h"
class Shape
{
protected:
	std::shared_ptr<IPrint> _printer;
public:
	Shape();
public:
	virtual float getArea() const = 0;
	virtual float getPerimeter() const = 0;
	void setPrinter(std::shared_ptr<IPrint> p);
};