#pragma once

#include "IPrint.h"
class PrintCircleWithCalculatedProperties : public IPrint
{
public:
	/// <summary>
	/// Xuất ra thông số cơ bản, chu vi và diện tích
	/// </summary>
	/// <param name="p">Shape*, define as Circle*</param>
	void print(Shape* p) override;
};

class PrintCircleWithRawProperties : public IPrint {
public:
	/// <summary>
	/// Xuất ra thông số cơ bản
	/// </summary>
	/// <param name="p">Shape*, define as Circle*</param>
	void print(Shape* p) override;
};