#include <iostream>

using namespace std;

// arithmetic and comparison operators
int main() {
    int a = 10;
    int b = 6;

    // arithmetic operators
    cout << "--- Arithmetic Operators ---" << endl;
    cout << "Sum: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Division: " << (a / b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Modulus: " << (a % b) << endl;

    cout << endl;

    // comparison operators
    cout << "--- Comparison Operators ---" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    return 0;
}
