#pragma once

#include "IPrint.h"
class PrintTriangleWithCalculatedProperties : public IPrint
{
public:
	void print(const Shape*& p) override;
};

class PrintTriangleWithRawProperties : public IPrint {
public:
	void print(const Shape*& p) override;
};