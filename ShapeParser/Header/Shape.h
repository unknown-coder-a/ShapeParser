#pragma once
#include <memory>
#include "IPrint.h"
class Shape : public IPrint
{
private:
	std::shared_ptr<IPrint> _printer;
public:
	Shape();

	virtual float area() = 0;
	virtual float perimeter() = 0;
	virtual void setPrinter(std::shared_ptr<IPrint> p);
};

