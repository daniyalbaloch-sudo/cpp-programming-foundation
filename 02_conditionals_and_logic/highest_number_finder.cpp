#include <iostream>

using namespace std;

// find highest number among three numbers
int main() {
    int a, b, c;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter third number: ";
    cin >> c;

    if (a >= b && a >= c) {
        cout << a << " is the highest number." << endl;
    } else if (b >= a && b >= c) {
        cout << b << " is the highest number." << endl;
    } else {
        cout << c << " is the highest number." << endl;
    }

    return 0;
}
