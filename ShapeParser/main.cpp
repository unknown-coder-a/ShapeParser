#include <iostream>
#include "ParserFactory.h"

#include "IParser.h"
#include "Shape.h"
#include "FileExtracter.h"
#include <memory>
#include <string>



//"Microsoft requires a bit of non - standard set - up with _setmode() before wcout or wcin can work."
//vì vậy em sẽ không dùng wstring như trong đồ án thể hiện

int main() {
	const std::string filename = "shapes.txt";

	FileExtracter reader;

	try
	{
		reader.read(filename);
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what();
		return 1;
	}
	
	reader.sortByArea();
	std::cout << std::endl << std::endl;

	reader.printWithTableList();

}