#pragma once
#include "IParser.h"

class TriangleParser : public IParser
{
public:
	Shape* parse(std::string data) override;
};

