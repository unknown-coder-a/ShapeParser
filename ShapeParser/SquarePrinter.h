#pragma once

#include "IPrint.h"
class PrintSquareWithCalculatedProperties : public IPrint
{
public:
	/// <summary>
	/// Xuất ra thông số cơ bản, chu vi và diện tích
	/// </summary>
	/// <param name="p">Shape*, define as Square*</param>
	void print( Shape* p) override;
};

class PrintSquareWithRawProperties : public IPrint {
public:
	/// <summary>
	/// Xuất ra thông số cơ bản
	/// </summary>
	/// <param name="p">Shape*, define as Square*</param>
	void print( Shape* p) override;
};