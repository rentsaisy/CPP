// Circumference and area of a circle with radius 2.5

#include <iostream>
using namespace std;

const double PI = 3.14159;  // Definition of constant PI

int main()
{
    double area, circuit, radius = 2.5;

    area = PI * radius * radius;
    circuit = 2 * PI * radius;

    cout << "\nTo Evaluate a Circle\n" << endl;

    cout << "Radius: " << radius << endl
         << "Circumference: " << circuit << endl
         << "Area: " << area << endl;

    return 0;
}