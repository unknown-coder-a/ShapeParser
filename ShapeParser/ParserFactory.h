#pragma once
#include <map>
#include <string>
#include "IParser.h"


/// <summary>
/// Singleton class
/// </summary>
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
	/// <summary>
	/// Hàm đăng ký shape parser với tên string tương ứng
	/// </summary>
	/// <param name="type">tên đăng ký</param>
	/// <param name="pser">concrete parser pointer</param>
	void registerWith(std::string type, IParser* pser);

	/// <summary>
	/// Hàm cho
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	IParser* select(std::string);
};

