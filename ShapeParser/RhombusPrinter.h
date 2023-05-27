#pragma once

#include "IPrint.h"
class PrintRhombusWithCalculatedProperties : public IPrint
{
public:
	/// <summary>
	/// Xuất ra thông số cơ bản, chu vi và diện tích
	/// </summary>
	/// <param name="p">Shape*, define as Rhombus*</param>
	void print(Shape* p) override;
};

class PrintRhombusWithRawProperties : public IPrint {
public:
	/// <summary>
	/// Xuất ra thông số cơ bản
	/// </summary>
	/// <param name="p">Shape*, define as Rhombus*</param>
	void print( Shape* p) override;
};