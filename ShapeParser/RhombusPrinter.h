#pragma once

#include "IPrint.h"
class PrintRhombusWithCalculatedProperties : public IPrint
{
public:
	void print(Shape* p) override;
};

class PrintRhombusWithRawProperties : public IPrint {
public:
	void print( Shape* p) override;
};