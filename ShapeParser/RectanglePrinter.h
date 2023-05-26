#pragma once

#include "IPrint.h"
class PrintRectangleWithCalculatedProperties : public IPrint
{
public:
	void print(Shape* p) override;
};

class PrintRectangleWithRawProperties : public IPrint {
public:
	void print(Shape* p) override;
};