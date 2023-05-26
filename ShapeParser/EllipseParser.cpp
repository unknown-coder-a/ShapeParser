#include "EllipseParser.h"
#include "Ellipse.h"
#include <regex>

Shape* EllipseParser::parse(std::string data) {
    std::regex pattern("Ellipse: a=([0-9.]+), b=([0-9.]+)");
    std::smatch matches;


    if (std::regex_search(data, matches, pattern)) {
        float minorAxis = stof(matches[1].str());
        float majorAxis = stof(matches[2].str());

        Shape* result = new Ellipse(minorAxis, majorAxis);
        return result;
    }
    else {
        throw std::runtime_error("No matches found.");
    }



}