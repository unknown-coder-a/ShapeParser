#pragma once

#include "IPrint.h"
class PrintCircleWithCalculatedProperties : public IPrint
{
public:
	void print(const Shape*& p) override;
};

class PrintCircleWithRawProperties : public IPrint {
public:
	void print(const Shape*& p) override;
};