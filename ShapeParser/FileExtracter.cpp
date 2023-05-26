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
			_shapesList.push_back(ip->parse(line));
		}
	}

	file.close();
}

void FileExtracter::sortByArea(){
	
	std::sort(_shapesList.begin(), _shapesList.end());
}
void FileExtracter::printWithCaculatedProperties() {

	int count = _shapesList.size();

	for (int i = 0; i < count; i++ ) {
		std::cout << "| " << i;
		_shapesList[i]->printWithCalculatedProperties();
		std::cout << std::endl;
	}
}
void FileExtracter::printWithRawProperties() {
	int count = _shapesList.size();

	for (int i = 0; i < count; i++) {
		std::cout << i << ". ";
		_shapesList[i]->printWithRawProperties();
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