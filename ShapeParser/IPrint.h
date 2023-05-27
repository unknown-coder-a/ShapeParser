#pragma once

//forward declare
class Shape;

class IPrint
{
public:
	/// <summary>
	/// Xuất ra console thông tin của đối tượng
	/// </summary>
	/// <param name="p">pointer of concrete shape object</param>
	virtual void print(Shape* p) = 0;
};

