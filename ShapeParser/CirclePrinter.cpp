#include "CirclePrinter.h"
#include "Circle.h"
#include <iomanip>
#include <string>
#include <iostream>


void PrintCircleWithCalculatedProperties::print(const Shape*& p) {
    const Circle* s = dynamic_cast<const Circle*> (p);


    std::wstring sProperties = L"Cạnh=" + std::to_wstring(s->radius());

    std::wcout << "| " << std::setw(15) << std::left << L"Hình tròn" << " | "
        << std::setw(25) << std::left << sProperties
        << " | " << L"Chu vi=" << std::setw(7) << std::left << std::fixed << std::setprecision(2)
        << s->getPerimeter() << " | " << L"Diện tích=" << std::setw(7) << std::left << std::fixed
        << std::setprecision(2) << s->getArea() << " |" << std::endl;
}

void PrintCircleWithRawProperties::print(const Shape*& p) {
    const Circle* s = dynamic_cast<const Circle*> (p);

    std::wstring sProperties = L"Cạnh=" + std::to_wstring(s->radius());
    std::wcout << L"Hình tròn: " << sProperties;
}
