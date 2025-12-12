// Calculating powers with the standard function pow ()

#include <iostream>     // Declaration of cout 
#include <cmath>        // Prototype of pow(), thus: double pow(double, double);
using namespace std;

int main()
{
    double x = 2.5, y;

    // By means of a prototype, the compiler generates the correct call or an error message!

    // Computes X raised to the power 3
    y = pow(x, 3);

    cout << "2.5 raised to 3 yields:    " << y << endl;

    // Calculating  with pow() is possible:
    cout << "2 + (5 raised to the power 2.5) yields:       " << 2.0 + pow(5.0, x) << endl;

    return 0;
}
