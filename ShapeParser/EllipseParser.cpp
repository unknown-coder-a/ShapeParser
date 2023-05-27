#include "EllipseParser.h"
#include "Ellipse.h"
#include <regex>

std::shared_ptr<Shape>  EllipseParser::parse(std::string data) {
    std::regex pattern("Ellipse: a=([0-9.]+), b=([0-9.]+)");
    std::smatch matches;


    if (std::regex_search(data, matches, pattern)) {
        float minorAxis = stof(matches[1].str());
        float majorAxis = stof(matches[2].str());

        return std::make_shared<Ellipse>(Ellipse(minorAxis, majorAxis));
        
    }
    else {
        throw std::runtime_error("No matches found.");
    }



}