#pragma once
#include "Shape.h"
#include <string>

class IParser
{
private:

public:
	virtual Shape* parse(std::string) = 0;
};