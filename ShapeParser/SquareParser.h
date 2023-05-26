#pragma once
#include "IParser.h"

class SquareParser : public IParser
{
public:
	Shape* parse(std::string data) override;
};

