// Circle.h
// Contains the header for the Circle class

#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"

class Circle : public BasicShape {
private:
    double xCenter;
    double yCenter;
    double radius;

public:
    // Constructor
    Circle(double x = 0.0, double y = 0.0, double r = 0.0, string n = "Circle");

    // Getters
    double getXCenter() const;
    double getYCenter() const;
    double getRadius() const;

    // Setters
    void setXCenter(double x);
    void setYCenter(double y);
    void setRadius(double r);

    // Calculates the area of the circle and stores it in BasicShape
    void calcArea();
};

#endif