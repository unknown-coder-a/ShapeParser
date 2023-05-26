#pragma once
#include "Shape.h"
#include <string>

class IParser
{
private:

public:
	virtual Shape* parse(std::string) noexcept(false) = 0;
};