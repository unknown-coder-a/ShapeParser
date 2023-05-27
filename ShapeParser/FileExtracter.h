#pragma once
#include "Shape.h"
#include "ParserFactory.h"
#include "IParser.h"
#include <vector>
#include <string>
#include <fstream>
#include <exception>

class FileExtracter
{
private:

	std::vector<Shape*> _shapesList;
	int _unreadableCount;

public:
	FileExtracter();

public:

	/// <summary>
	/// Hàm đọc file và lưu kết quả vào _shapelist, _unreadableCount, và xuất kết quả đọc được ra console
	/// hàm xử lý exception khi parse
	/// và throw exception nếu không mở được file
	/// </summary>
	/// <param name="">tên file</param>
	void read(const std::string) noexcept(false);

	/// <summary>
	/// sắp xếp shapesList theo diện tích tăng dần
	/// </summary>
	void sortByArea();

	/// <summary>
	/// In thông tin chi tiết ra console
	/// </summary>
	void printWithTableList();


public:
	//getter
	std::vector<Shape*> shapesList();
	int unreadableCount();

	//setter
	void setList(std::vector<Shape*> list);
	void setUnreadableCount(int);

};


