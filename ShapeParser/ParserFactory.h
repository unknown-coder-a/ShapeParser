#pragma once
#include <map>
#include <string>
#include "IParser.h"

class ParserFactory
{
private:
	inline static ParserFactory* _instance { nullptr };
	ParserFactory();
	~ParserFactory();
	std::map<std::string, IParser*> _prototypes;

public:
	ParserFactory(const ParserFactory&) = delete;
	ParserFactory& operator=(const ParserFactory&) = delete;
	static ParserFactory* getInstance();

public:
	void registerWith(std::string, IParser*);
	IParser* select(std::string);
};

