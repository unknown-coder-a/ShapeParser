#include "RhombusPrinter.h"
#include "Rhombus.h"
#include <iomanip>
#include <string>
#include <iostream>


void PrintRhombusWithCalculatedProperties::print(const Shape*& p) {
    const Rhombus* s = dynamic_cast<const Rhombus*> (p);


    std::wstring sProperties = L"Trục 1=" + std::to_wstring(s->diagonal1()) + L", Trục 2=" + std::to_wstring(s->diagonal2());

    std::wcout << " | " << std::setw(15) << std::left << L"Hình chữ nhật" << " | "
        << std::setw(25) << std::left << sProperties
        << " | " << L"Chu vi=" << std::setw(7) << std::left << std::fixed << std::setprecision(2)
        << s->getPerimeter() << " | " << L"Diện tích=" << std::setw(7) << std::left << std::fixed
        << std::setprecision(2) << s->getArea() << " |" << std::endl;
}

void PrintRhombusWithRawProperties::print(const Shape*& p) {
    const Rhombus* s = dynamic_cast<const Rhombus*> (p);
    std::wstring sProperties = L"Trục 1=" + std::to_wstring(s->diagonal1()) + L", Trục 2=" + std::to_wstring(s->diagonal2());
    std::wcout << L"Hình chữ nhật: " << sProperties;
}
