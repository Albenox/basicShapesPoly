// main.cpp
// Test program for BasicShape, Circle, Rectangle, and Square

#include <iostream>
#include <iomanip>
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;

int main() {
    cout << fixed << setprecision(2);

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

    //
    // Square Test
    cout << endl << endl;
    cout << "----- Square Test -----" << endl;

    // Create Square
    Square s1(5, "Square_1");

    cout << "Name: " << s1.getName() << endl;
    cout << "Area: " << s1.getArea() << endl;

    // Square Setter
    cout << endl;
    cout << "----- Setter Test -----" << endl;

    cout << "Old Side: " << s1.getSide() << endl;
    cout << "Old Area: " << s1.getArea() << endl;

    s1.setSide(10);

    cout << "New Side: " << s1.getSide() << endl;
    cout << "New Area: " << s1.getArea() << endl;

    //
    // Polymorphism Test
    cout << endl << endl;
    cout << "----- Polymorphism Test -----" << endl;

    // Array of base class pointers
    BasicShape* shapes[3];

    // Store different derived objects
    shapes[0] = new Circle(0, 0, 3, "Circle_P");
    shapes[1] = new Rectangle(2, 5, "Rectangle_P");
    shapes[2] = new Square(4, "Square_P");

    // Print shape names and areas through BasicShape pointers
    for (int i = 0; i < 3; i++) {
        cout << "Name: " << shapes[i]->getName() << endl;
        cout << "Area: " << shapes[i]->getArea() << endl;
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}