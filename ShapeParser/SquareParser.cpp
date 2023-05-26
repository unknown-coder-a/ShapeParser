#include "SquareParser.h"
#include "Square.h"
#include <regex>

Shape* SquareParser::parse(std::string data) {
    std::regex pattern("Square: r=([0-9.]+)");
    std::smatch matches;


    if (std::regex_search(data, matches, pattern)) {
        float edge = stof(matches[1].str());


        Shape* result = new Square(edge);
        return result;
    }
    else {
        throw std::runtime_error("No matches found.");
    }
}