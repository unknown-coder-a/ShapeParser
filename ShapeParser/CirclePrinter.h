#pragma once

#include "IPrint.h"
class PrintCircleWithCalculatedProperties : public IPrint
{
public:
	void print(Shape* p) override;
};

class PrintCircleWithRawProperties : public IPrint {
public:
	void print(Shape* p) override;
};