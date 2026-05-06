// BasicShape.h
// Contains the abstract base class for shapes

#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string>
using namespace std;

class BasicShape {
private:
    double area;
    string name;

public:
    // Constructor
    BasicShape();

    // Getters
    double getArea() const;
    string getName() const;

    // Setters
    void setArea(double a);
    void setName(string n);

    // Pure virtual function
    virtual void calcArea() = 0;
};

#endif