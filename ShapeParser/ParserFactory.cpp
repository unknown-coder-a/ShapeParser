#pragma 
#include "ParserFactory.h"

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