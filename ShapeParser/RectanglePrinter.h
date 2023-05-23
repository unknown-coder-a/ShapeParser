#pragma once

#include "IPrint.h"
class PrintRectangleWithCalculatedProperties : public IPrint
{
public:
	void print(const Shape*& p) override;
};

class PrintRectangleWithRawProperties : public IPrint {
public:
	void print(const Shape*& p) override;
};