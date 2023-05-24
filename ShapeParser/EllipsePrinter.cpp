#include "EllipsePrinter.h"
#include "Ellipse.h"
#include <iomanip>
#include <string>
#include <iostream>


void PrintEllipseWithCalculatedProperties::print(const Shape*& p) {
    const Ellipse* s = dynamic_cast<const Ellipse*> (p);


    std::wstring sProperties = L"Trục nhỏ=" + std::to_wstring(s->minorAxis()) + L", Trục lớn=" + std::to_wstring(s->majorAxis());

    std::wcout << "| " << std::setw(15) << std::left << L"Hình Ê líp" << " | "
        << std::setw(25) << std::left << sProperties
        << " | " << L"Chu vi=" << std::setw(7) << std::left << std::fixed << std::setprecision(2)
        << s->getPerimeter() << " | " << L"Diện tích=" << std::setw(7) << std::left << std::fixed
        << std::setprecision(2) << s->getArea() << " |" << std::endl;
}

void PrintEllipseWithRawProperties::print(const Shape*& p) {
    const Ellipse* s = dynamic_cast<const Ellipse*> (p);
    std::wstring sProperties = L"Trục nhỏ=" + std::to_wstring(s->minorAxis()) + L", Trục lớn=" + std::to_wstring(s->majorAxis());
    std::wcout << L"Hình Ê líp: " << sProperties;
}
