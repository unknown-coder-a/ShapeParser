#pragma once
#include "Shape.h"

class Ellipse : public Shape{
private:
    float _minorAxis;
    float _majorAxis;

public:
    Ellipse();
    Ellipse(float, float);

public:
    //setter
    void setMajorAxis(float value);
    void setMinorAxis(float value);
    //getter
    float minorAxis() const;
    float majorAxis() const;

public:
    float getArea() const;
    float getPerimeter() const;

    virtual void printWithRawProperties();
    virtual void printWithCalculatedProperties();
};