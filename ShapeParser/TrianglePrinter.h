#pragma once

#include "IPrint.h"
class PrintTriangleWithCalculatedProperties : public IPrint
{
public:
	/// <summary>
	/// Xuất ra thông số cơ bản, chu vi và diện tích
	/// </summary>
	/// <param name="p">Shape*, define as Triangle*</param>
	void print( Shape* p) override;
};

class PrintTriangleWithRawProperties : public IPrint {
public:
	/// <summary>
	/// Xuất ra thông số cơ bản
	/// </summary>
	/// <param name="p">Shape*, define as Triangle*</param>
	void print( Shape* p) override;
};