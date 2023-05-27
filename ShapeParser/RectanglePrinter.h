#pragma once

#include "IPrint.h"
class PrintRectangleWithCalculatedProperties : public IPrint
{
public:
	/// <summary>
	/// Xuất ra thông số cơ bản, chu vi và diện tích
	/// </summary>
	/// <param name="p">Shape*, define as Rectangle*</param>
	void print(Shape* p) override;
};

class PrintRectangleWithRawProperties : public IPrint {
public:
	/// <summary>
	/// Xuất ra thông số cơ bản
	/// </summary>
	/// <param name="p">Shape*, define as Rectangle*</param>
	void print(Shape* p) override;
};