#include "SquarePrinter.h"
#include "Square.h"
#include <iomanip>
#include <string>
#include <iostream>


void PrintSquareWithCalculatedProperties::print(const Shape*& p) {
    const Square* s = dynamic_cast<const Square*> (p);


    std::wstring sProperties = L"Cạnh=" + std::to_wstring(s->edge());

    std::wcout << "| " << std::setw(15) << std::left << L"Hình vuông" << " | "
        << std::setw(25) << std::left << sProperties
        << " | " << L"Chu vi=" << std::setw(7) << std::left << std::fixed << std::setprecision(2)
        << s->getPerimeter() << " | " << L"Diện tích=" << std::setw(7) << std::left << std::fixed
        << std::setprecision(2) << s->getArea() << " |" << std::endl;
}

void PrintSquareWithRawProperties::print(const Shape*& p) {
    const Square* s = dynamic_cast<const Square*> (p);

    std::wstring sProperties = L"Cạnh=" + std::to_wstring(s->edge());
    std::wcout << L"Hình vuông: " << sProperties;
}
