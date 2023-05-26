#pragma once
#include "IParser.h"

class CircleParser : public IParser
{
public:
	Shape* parse(std::string data) override;
};

