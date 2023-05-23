#include "RectanglePrinter.h"
#include "Rectangle.h"
#include <iomanip>
#include <string>
#include <iostream>


void PrintRectangleWithCalculatedProperties::print(const Shape*& p) {
    const Rectangle* r = dynamic_cast<const Rectangle*> (p);
    
    
    std::wstring sProperties = L"Rộng=" + std::to_wstring(r->width()) + L", Cao=" + std::to_wstring(r->height());

    std::wcout << "| " << std::setw(15) << std::left << L"Hình chữ nhật" << " | "
        << std::setw(25) << std::left << sProperties
        << " | " << "Chu vi=" << std::setw(7) << std::left << std::fixed << std::setprecision(2)
        << r->getPerimeter() << " | " << "Diện tích=" << std::setw(7) << std::left << std::fixed
        << std::setprecision(2) << r->getArea() << " |" << std::endl;
}

void PrintRectangleWithRawProperties::print(const Shape*& p) {
    const Rectangle* r = dynamic_cast<const Rectangle*> (p);
    std::wstring sProperties = L"Rộng=" + std::to_wstring(r->width()) + L", Cao=" + std::to_wstring(r->height());
    std::wcout << L"Hình chữ nhật: " << sProperties;
}
