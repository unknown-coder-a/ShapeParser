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
    double getArea() const;
    double getPerimeter() const;

    virtual void printWithRawProperties();
    virtual void printWithCalculatedProperties();
};