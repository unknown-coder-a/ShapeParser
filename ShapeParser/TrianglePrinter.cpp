#include "TrianglePrinter.h"
#include "Triangle.h"
#include <iomanip>
#include <string>
#include <iostream>


void PrintTriangleWithCalculatedProperties::print(const Shape*& p) {
    const Triangle* s = dynamic_cast<const Triangle*> (p);


    std::wstring sProperties = L"Cạnh A=" + std::to_wstring(s->edgeA()) + L", Cạnh B=" + std::to_wstring(s->edgeB()) + L", Cạnh C=" + std::to_wstring(s->edgeC());

    std::wcout << "| " << std::setw(15) << std::left << L"Hình tam giác" << " | "
        << std::setw(25) << std::left << sProperties
        << " | " << L"Chu vi=" << std::setw(7) << std::left << std::fixed << std::setprecision(2)
        << s->getPerimeter() << " | " << L"Diện tích=" << std::setw(7) << std::left << std::fixed
        << std::setprecision(2) << s->getArea() << " |" << std::endl;
}

void PrintTriangleWithRawProperties::print(const Shape*& p) {
    const Triangle* s = dynamic_cast<const Triangle*> (p);
    std::wstring sProperties = L"Cạnh A=" + std::to_wstring(s->edgeA()) + L", Cạnh B=" + std::to_wstring(s->edgeB()) + L", Cạnh C=" + std::to_wstring(s->edgeC());
    std::wcout << L"Hình tam giác: " << sProperties;
}
