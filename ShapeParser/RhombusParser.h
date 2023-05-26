#pragma once
#include "IParser.h"

class RhombusParser : public IParser
{
public:
	Shape* parse(std::string data) override;
};

