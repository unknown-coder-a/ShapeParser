#include "FileExtracter.h"
#include <algorithm>
#include <iostream>
#include <iomanip>
#include "CircleParser.h"
#include "EllipseParser.h"
#include "RectangleParser.h"
#include "SquareParser.h"
#include "RhombusParser.h"
#include "TriangleParser.h"

FileExtracter::FileExtracter() {
	_unreadableCount = 0;
}

void FileExtracter::read(const std::string fileName) {
	std::fstream file;

	file.open(fileName, std::ios::in);

	if (!file.is_open()) {
		throw std::exception("Can not open file!\n");
	}	
	IParser* ip = nullptr;
	ParserFactory* pf = ParserFactory::getInstance();
	pf->registerWith("Circle", new CircleParser);
	pf->registerWith("Square", new SquareParser);
	pf->registerWith("Triangle", new TriangleParser);
	pf->registerWith("Rectangle", new RectangleParser);
	pf->registerWith("Rhombus", new RhombusParser);
	pf->registerWith("Ellipse", new EllipseParser);

	std::string line;
	std::cout << "Dang doc tap tin shapes.txt...";
	int count = 0;
	while(std::getline(file, line)){
		std::string name;

		int i = 0;
		while (line[i] != ':') {
			name.push_back(line[i++]);
		}

		ip = pf->select(name);

		if (ip == nullptr) {
			_unreadableCount++;
		}
		else {
			
			try
			{
				_shapesList.push_back(ip->parse(line));
				count++;
			}
			catch (const std::exception&)
			{
				_unreadableCount++;
				continue;
			}
			std::cout << std::endl << count << ". ";
			_shapesList[count - 1]->printWithRawProperties();
		}
	}
	std::cout << "\nTim thay " << _shapesList.size() << " hinh / " << _shapesList.size() + _unreadableCount << " hinh";
	std::cout << "\nKhong the doc duoc: " << _unreadableCount << " hinh.";
	file.close();
}

void FileExtracter::sortByArea(){
	
	std::sort(_shapesList.begin(), _shapesList.end(), [](Shape*& a, Shape*& b) { return a->getArea() < b->getArea(); });
}
void FileExtracter::printWithTableList() {

	size_t count = _shapesList.size();

	for (int i = 0; i < count; i++ ) {
		std::cout <<"| " <<std::setw(2)<< std::left<< i;
		_shapesList[i]->printWithCalculatedProperties();
		std::cout << std::endl;
	}
}


std::vector<Shape*> FileExtracter::shapesList() {
	return _shapesList;
}

int FileExtracter::unreadableCount() {
	return _unreadableCount;
}

void FileExtracter::setList(std::vector<Shape*> list) {
	_shapesList = list;
}
void FileExtracter::setUnreadableCount(int value) {
	_unreadableCount = value;
}


