#include "CirclePrinter.h"
#include "Circle.h"
#include <iomanip>
#include <string>
#include <iostream>


void PrintCircleWithCalculatedProperties::print(const Shape*& p) {
    const Circle* s = dynamic_cast<const Circle*> (p);


    std::wstring sProperties = L"R?ng=" + std::to_wstring(s->r) + L", Cao=" + std::to_wstring(r->height());

    std::wcout << "| " << std::setw(15) << std::left << L"Hình ch? nh?t" << " | "
        << std::setw(25) << std::left << sProperties
        << " | " << "Chu vi=" << std::setw(7) << std::left << std::fixed << std::setprecision(2)
        << r->getPerimeter() << " | " << "Di?n tích=" << std::setw(7) << std::left << std::fixed
        << std::setprecision(2) << r->getArea() << " |" << std::endl;
}

void PrintCircleWithRawProperties::print(const Shape*& p) {
    const Circle* r = dynamic_cast<const Circle*> (p);
    std::wstring sProperties = L"R?ng=" + std::to_wstring(r->width()) + L", Cao=" + std::to_wstring(r->height());
    std::wcout << L"Hình ch? nh?t: " << sProperties;
}
