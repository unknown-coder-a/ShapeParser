#pragma 
#include "ParserFactory.h"

ParserFactory::ParserFactory() {
	_instance = nullptr;
}
ParserFactory::~ParserFactory() {
	if (_instance)
		delete _instance;
}

ParserFactory* ParserFactory::getInstance() {
	if (nullptr == _instance) {
		_instance = new ParserFactory();
	}
	return _instance;
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