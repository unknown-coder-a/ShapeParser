#pragma once
#include "Shape.h"
#include "ParserFactory.h"
#include "IParser.h"
#include <vector>
#include <string>
#include <fstream>
#include <exception>


/// <summary>
/// read file, parse data, print result, store data
/// </summary>
class FileExtracter
{
private:

	std::vector<std::shared_ptr<Shape>> _shapesList;
	int _unreadableCount;

public:
	FileExtracter();

public:

	/// <summary>
	/// Read file and stored into _shapeList, _unreadableCount, and print result to console
	/// This method handle exeption that parse method throw
	/// Thow exception when cannot open file
	/// </summary>
	/// <param name="">filedirectory</param>
	void read(const std::string) noexcept(false);

	/// <summary>
	/// Sort _shapeList by area ascendingly
	/// </summary>
	void sortByArea();

	/// <summary>
	/// print properties, perimeter, area as table to console
	/// </summary>
	void printWithTableList();


public:
	//getter
	const std::vector<std::shared_ptr<Shape>> shapesList() const;
	int unreadableCount();

	//setter
	void setList(std::vector<std::shared_ptr<Shape>> list);
	void setUnreadableCount(int);

};


