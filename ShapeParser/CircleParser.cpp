#include "CircleParser.h"
#include "Circle.h"
#include <regex>

Shape* CircleParser::parse(std::string data) {
	std::regex pattern("Circle: r=([0-9.]+)");
	std::smatch matches;


    if (std::regex_search(data, matches, pattern)) {
        float radius = stof(matches[1].str());


        Shape* result = new Circle(radius);
        return result;
    }
    else {
        throw std::runtime_error("No matches found.");
    }
}