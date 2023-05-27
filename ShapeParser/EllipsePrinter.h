#pragma once

#include "IPrint.h"
class PrintEllipseWithCalculatedProperties : public IPrint
{
public:
	/// <summary>
	/// Xuất ra thông số cơ bản, chu vi và diện tích
	/// </summary>
	/// <param name="p">Shape*, define as Ellipse*</param>
	void print(Shape* p) override;
};

class PrintEllipseWithRawProperties : public IPrint {
public:
	/// <summary>
	/// Xuất ra thông số cơ bản
	/// </summary>
	/// <param name="p">Shape*, define as Ellipse*</param>
	void print(Shape* p) override;
};
