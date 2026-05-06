// main.cpp
// Test program for BasicShape and Circle

#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
    cout << "----- Circle Test -----" << endl;

    // Create circle
    Circle c1(0, 0, 5, "Circle_1");

    cout << "Name: " << c1.getName() << endl;
    cout << "Area: " << c1.getArea() << endl;

    cout << endl;

    // Test setter
    cout << "----- Setter Test -----" << endl;

    cout << "Old Radius: " << c1.getRadius() << endl;
    cout << "Old Area: " << c1.getArea() << endl;

    c1.setRadius(10);

    cout << "New Radius: " << c1.getRadius() << endl;
    cout << "New Area: " << c1.getArea() << endl;

    return 0;
}