#include <iostream>

using namespace std;

// simple calculator using switch
int main() {
    int a, b;
    char op;

    cout << "--- Simple Calculator ---" << endl;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Result: " << (a + b) << endl;
            break;

        case '-':
            cout << "Result: " << (a - b) << endl;
            break;

        case '*':
            cout << "Result: " << (a * b) << endl;
            break;

        case '/':
            if (b != 0) {
                cout << "Result: " << (static_cast<double>(a) / b) << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;

        case '%':
            if (b != 0) {
                cout << "Result: " << (a % b) << endl;
            } else {
                cout << "Error: Modulus by zero is not allowed." << endl;
            }
            break;

        default:
            cout << "Invalid operator." << endl;
            break;
    }

    return 0;
}
