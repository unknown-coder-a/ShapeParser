#pragma once

#include "IPrint.h"
class PrintSquareWithCalculatedProperties : public IPrint
{
public:
	void print(const Shape*& p) override;
};

class PrintSquareWithRawProperties : public IPrint {
public:
	void print(const Shape*& p) override;
};