// Square.cpp
// Contains the implementation for the Square class

#include "Square.h"

// Constructor
Square::Square(double s, string n)
    : Rectangle(s, s, n)   // IMPORTANT: sets length and width in base class
{
    side = s;
}

double Square::getSide() const {
    return side;
}

void Square::setSide(double s) {
    side = s;

    // Update base class dimensions
    setLength(s);
    setWidth(s);
}