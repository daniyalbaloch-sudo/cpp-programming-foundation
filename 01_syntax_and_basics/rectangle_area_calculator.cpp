#include <iostream>

using namespace std;

// calculate area of rectangle
int main() {
    double length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    double area = length * width;

    cout << "Area of rectangle is: " << area << endl;

    return 0;
}
