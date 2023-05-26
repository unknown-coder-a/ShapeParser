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
	bool _compareArea(Shape*, Shape*);

public:
	FileExtracter();

public:

	void read(const std::string) noexcept(false);
	void sortByArea();
	void printWithCaculatedProperties();
	void printWithRawProperties();

public:
	//getter
	std::vector<Shape*> shapesList();

	int unreadableCount();

	//setter
	void setList(std::vector<Shape*> list);
	void setUnreadableCount(int);

};