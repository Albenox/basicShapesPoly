// Square.h
// Contains the header for the Square class

#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
private:
    double side;

public:
    // Constructor
    Square(double s = 0.0, string n = "Square");

    // Getter
    double getSide() const;

    // Setter
    void setSide(double s);
};

#endif