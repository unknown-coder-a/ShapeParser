#pragma once
#include "Shape.h"

class Ellipse : public Shape{
private:
    double _minorAxis;
    double _majorAxis;

public:
    Ellipse();
    Ellipse(double, double);

public:
    //setter
    void setMajorAxis(double value);
    void setMinorAxis(double value);

    //getter
    double minorAxis() const;
    double majorAxis() const;

public:

    /// <summary>
    /// hàm tính diện tích
    /// </summary>
    /// <returns>diện tích</returns>
    double getArea() const;

    /// <summary>
    /// hàm tính chu vi
    /// </summary>
    /// <returns>chu vi</returns>
    double getPerimeter() const;

    /// <summary>
    /// in ra kết quả sau khi parse
    /// </summary>
    virtual void printWithRawProperties();

    /// <summary>
    /// in ra thông tin chi tiết
    /// </summary>
    virtual void printWithCalculatedProperties();
};