#pragma once

//forward declare
class Shape;

class IPrint
{
public:
	virtual void print(Shape* p) = 0;
};

