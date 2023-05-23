#pragma once

class Ellipse {
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
    float minorAxis();
    float majorAxis();

public:
    double getArea();
    double getPerimeter();
};