#pragma once
#include "IParser.h"

class RectangleParser : public IParser
{
public:
	Shape* parse(std::string data) override;
};

