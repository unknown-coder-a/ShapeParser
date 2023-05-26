#pragma once

#include "IPrint.h"
class PrintEllipseWithCalculatedProperties : public IPrint
{
public:
	void print(Shape* p) override;
};

class PrintEllipseWithRawProperties : public IPrint {
public:
	void print(Shape* p) override;
};