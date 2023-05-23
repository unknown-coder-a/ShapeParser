#pragma once
#include <memory>
#include "IPrint.h"
class Shape : public IPrint
{
private:
	std::shared_ptr<IPrint> _printer;
public:
	Shape();

	virtual float getArea() = 0;
	virtual float getPerimeter() = 0;
	void setPrinter(std::shared_ptr<IPrint> p);
};