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

ParserFactory::ParserFactory() {
	_pinstance = nullptr;
}

ParserFactory* ParserFactory::getInstance() {
	if (nullptr == _pinstance) {
		_pinstance = new ParserFactory();
	}
	return _pinstance;
}

void ParserFactory::registerWith(std::string type, IParser* pser) {
	_prototypes.insert({ type, pser });
}

IParser* ParserFactory::select(std::string type) {
	IParser* parser = nullptr;

	if (_prototypes.contains(type)) {
		parser = _prototypes[type];
	}

	return parser;
}