// main.cpp
// Test program for BasicShape and Circle

#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main() {
    //
    // Circle Test
    cout << "----- Circle Test -----" << endl;

    // Create Circle
    Circle c1(0, 0, 5, "Circle_1");

    cout << "Name: " << c1.getName() << endl;
    cout << "Area: " << c1.getArea() << endl;

    cout << endl;

    // Circle Setter
    cout << "----- Setter Test -----" << endl;

    cout << "Old Radius: " << c1.getRadius() << endl;
    cout << "Old Area: " << c1.getArea() << endl;

    c1.setRadius(10);

    cout << "New Radius: " << c1.getRadius() << endl;
    cout << "New Area: " << c1.getArea() << endl;

    //
    // Rectangle Test
    cout << endl << endl;
    cout << "----- Rectangle Test -----" << endl;

    // Create Rectangle
    Rectangle r1(4, 6, "Rectangle_1");

    cout << "Name: " << r1.getName() << endl;
    cout << "Area: " << r1.getArea() << endl;

    // Rectangle Setter
    cout << endl;
    cout << "----- Setter Test -----" << endl;

    cout << "Old Length: " << r1.getLength() << endl;
    cout << "Old Width: " << r1.getWidth() << endl;
    cout << "Old Area: " << r1.getArea() << endl;

    r1.setLength(10);
    r1.setWidth(2);

    cout << "New Length: " << r1.getLength() << endl;
    cout << "New Width: " << r1.getWidth() << endl;
    cout << "New Area: " << r1.getArea() << endl;

    return 0;
}