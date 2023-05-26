#pragma once
#include "IParser.h"

class EllipseParser : public IParser
{
public:
	Shape* parse(std::string data) override;
};

