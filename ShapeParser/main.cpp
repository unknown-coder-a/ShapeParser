#include <iostream>
#include "ParserFactory.h"

#include "IParser.h"
#include "Shape.h"
#include "FileExtracter.h"
#include <memory>
#include <string>

int main() {
	const std::string filename = "shapes.txt";

	FileExtracter reader;
	try
	{
		reader.read(filename);
	}
	catch (const std::exception&)
	{
		std::cout << "read file error";
		return 1;
	}
	
	reader.printWithRawProperties();
	reader.sortByArea();
	reader.printWithCaculatedProperties();
	//pf->registerWith("Square", new SquareParser);
	

}