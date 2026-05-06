// Circle.cpp
// Contains the implementation for the Circle class

#include <cmath>
#include "Circle.h"

// Constructor
Circle::Circle(double x, double y, double r, string n) {
    xCenter = x;
    yCenter = y;
    radius = r;

    setName(n);   // set name in base class
    calcArea();   // calculate and store area in base class
}

double Circle::getXCenter() const {
    return xCenter;
}

double Circle::getYCenter() const {
    return yCenter;
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setXCenter(double x) {
    xCenter = x;
    // does NOT affect area
}

void Circle::setYCenter(double y) {
    yCenter = y;
    // does NOT affect area
}

void Circle::setRadius(double r) {
    radius = r;
    calcArea();   // IMPORTANT: must update area
}

void Circle::calcArea() {
    double area = 3.14159 * radius * radius;
    setArea(area);   // store in base class
}