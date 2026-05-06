// Rectangle.h
// Contains the header for the Rectangle class

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l = 0.0, double w = 0.0, string n = "Rectangle");

    // Getters
    double getLength() const;
    double getWidth() const;

    // Setters
    void setLength(double l);
    void setWidth(double w);

    // Calculates the area and stores it in BasicShape
    void calcArea();
};

#endif