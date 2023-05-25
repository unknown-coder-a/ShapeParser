#pragma once

//forward declare
class Shape;

class IPrint
{
public:
	virtual void print(const Shape*& p) = 0;
};

