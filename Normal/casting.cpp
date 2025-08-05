// Type Casting in C++

// Type casting is the process of converting a variable from one data type to another.
// Implicit and Explicit Casting

#include <iostream>
using namespace std;
int main() {
    // Implicit Casting (Automatic)
    int num = 10;
    double dNum = num; // int to double
    cout << "Implicit Casting: " << dNum << endl;

    // Explicit Casting (Manual)
    double pi = 3.14;
    int intPi = (int)pi; // double to int
    cout << "Explicit Casting: " << intPi << endl;

    // C++ Style Casting
    float fNum = static_cast<float>(num); // int to float
    cout << "C++ Style Casting: " << fNum << endl;

    return 0;
}