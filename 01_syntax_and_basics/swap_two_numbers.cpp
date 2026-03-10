#include <iostream>

using namespace std;

// swap two numbers using a third variable
int main() {
    int x, y, temp;

    cout << "Enter X: ";
    cin >> x;
    cout << "Enter Y: ";
    cin >> y;

    cout << "\nBefore Swapping:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    // swapping using temp
    temp = x;
    x = y;
    y = temp;

    cout << "\nAfter Swapping:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
