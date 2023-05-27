#include "RhombusParser.h"
#include "Rhombus.h"
#include <regex>

Shape* RhombusParser::parse(std::string data) {
    std::regex pattern("Rhombus: d1=([0-9.]+), d2=([0-9.]+)");
    std::smatch matches;


    if (std::regex_search(data, matches, pattern)) {
        float diagonal1 = stof(matches[1].str());
        float diagonal2 = stof(matches[2].str());

        Shape* result = new Rhombus(diagonal1, diagonal2);
        return result;
    }
    else {
        throw std::runtime_error("No matches found.");
    }



}