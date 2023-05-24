#pragma once
#include "Shape.h"
#include "ParserFactory.h"
#include <vector>

class FileExtracter
{
private:
	std::vector<Shape*> shapesList;
	int unreadableCount;

public:
	FileExtracter();
	FileExtracter();

public:
	void read(const char);
	void sortByArea();
	void printWithCaculatedProperties();
	void printWithRawProperties();
};

