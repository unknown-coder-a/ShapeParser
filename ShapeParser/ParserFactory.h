#pragma once
#include <map>
#include <string>
#include "IParser.h"

class ParserFactory
{
private:
	static ParserFactory* _pinstance;
	std::map<std::string, IParser*> _prototypes;
	ParserFactory();

public:
	ParserFactory(ParserFactory& copy) = delete;
	void operator=(const ParserFactory& right) = delete;
	static ParserFactory* getInstance();

public:
	void registerWith(std::string, IParser*);
	IParser* select(std::string);
};

