#pragma once

//forward declare
class Shape;

class IPrint
{
public:
	/// <summary>
	/// Print base properties, area, perimeter, name of shape 
	/// </summary>
	/// <param name="p">pointer of concrete shape object</param>
	virtual void print(Shape* p) = 0;
};

