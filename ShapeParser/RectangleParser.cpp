#include "RectangleParser.h"
#include "Rectangle.h"
#include <regex>

std::shared_ptr<Shape> RectangleParser::parse(std::string data) {
    std::regex pattern("Rectangle: w=([0-9.]+), h=([0-9.]+)");
    std::smatch matches;


    if (std::regex_search(data, matches, pattern)) {
        float width = stof(matches[1].str());
        float height = stof(matches[2].str());

        return std::make_shared<Rectangle>( Rectangle(width, height));
    }
    else {
        throw std::runtime_error("No matches found.");
    }



}