#include "FileExtracter.h"


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