#include "FileExtracter.h"
#include <algorithm>
#include <iostream>

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

	std::string line;
	std::wcout << L"Đang đọc tập tin shapes.txt...";
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
			count++;
			_shapesList.push_back(ip->parse(line));
			std::cout << std::endl << count << ". ";
			_shapesList[count - 1]->printWithRawProperties();
		}
	}
	std::wcout << L"\nTìm thấy " << _shapesList.size() << L" hình / " << _shapesList.size() + _unreadableCount << L" hình";
	std::wcout << L"\nKhông thể đọc được: " << _shapesList.size() << L" hình.";
	file.close();
}

void FileExtracter::sortByArea(){
	
	std::sort(_shapesList.begin(), _shapesList.end(), [](Shape*& a, Shape*& b) { return a->getArea() > b->getArea(); });
}
void FileExtracter::printWithCaculatedProperties() {

	size_t count = _shapesList.size();

	for (int i = 0; i < count; i++ ) {
		std::cout << "| " << i;
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

bool FileExtracter::_ascendingCompare(Shape* a, Shape* b) {
	return (a->getArea() < b->getArea());
}

