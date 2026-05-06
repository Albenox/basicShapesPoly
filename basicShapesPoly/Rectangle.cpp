// Rectangle.cpp
// Contains the implementation for the Rectangle class

#include "Rectangle.h"

// Constructor
Rectangle::Rectangle(double l, double w, string n) {
    length = l;
    width = w;

    setName(n);   // set name in base class
    calcArea();   // calculate and store area
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setLength(double l) {
    length = l;
    calcArea();   // IMPORTANT
}

void Rectangle::setWidth(double w) {
    width = w;
    calcArea();   // IMPORTANT
}

void Rectangle::calcArea() {
    double area = length * width;
    setArea(area);   // store in base class
}