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
	
	ParserFactory* pf = ParserFactory::getInstance();
	pf->registerWith("Circle", std::make_shared<CircleParser>(CircleParser()));
	pf->registerWith("Square", std::make_shared<SquareParser>(SquareParser()));
	pf->registerWith("Triangle", std::make_shared<TriangleParser>(TriangleParser()));
	pf->registerWith("Rectangle", std::make_shared<RectangleParser>(RectangleParser()));
	pf->registerWith("Rhombus", std::make_shared<RhombusParser>(RhombusParser()));
	pf->registerWith("Ellipse", std::make_shared<EllipseParser>(EllipseParser()));

	std::string line;
	std::cout << "Dang doc tap tin shapes.txt...";
	std::shared_ptr<IParser> pser;
	int count = 0;
	while(std::getline(file, line)){
		std::string name;

		int i = 0;

		size_t pos = line.find_first_of(':');
		if (pos == std::string::npos) {
			_unreadableCount++;
			continue;
		}
		
		name = line.substr(0, pos);

		pser = pf->select(name);

		if (pser == nullptr) {
			_unreadableCount++;
		}
		else {
			
			try
			{
				_shapesList.push_back(pser->parse(line));
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
	
	std::sort(_shapesList.begin(), _shapesList.end(), [](std::shared_ptr<Shape>& a, std::shared_ptr<Shape>& b) { return a->getArea() < b->getArea(); });
}
void FileExtracter::printWithTableList() {

	size_t count = _shapesList.size();

	for (int i = 0; i < count; i++ ) {
		std::cout <<"| " <<std::setw(2)<< std::left<< i;
		_shapesList[i]->printWithCalculatedProperties();
		std::cout << std::endl;
	}
}


const std::vector<std::shared_ptr<Shape>> FileExtracter::shapesList() const {
	return _shapesList;
}

int FileExtracter::unreadableCount() {
	return _unreadableCount;
}

void FileExtracter::setList(std::vector<std::shared_ptr<Shape>> list) {
	_shapesList = list;
}
void FileExtracter::setUnreadableCount(int value) {
	_unreadableCount = value;
}


