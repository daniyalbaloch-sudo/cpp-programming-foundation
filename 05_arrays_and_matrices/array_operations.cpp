#include <iostream>

using namespace std;

// array operations
int main() {
    int a[3] = {1, 2, 3};
    int b = 10;

    // creating array using b and a[2]
    int c[2] = {b, a[2]};

    cout << "Array a: " << a[0] << ", " << a[1] << ", " << a[2] << endl;
    cout << "Variable b: " << b << endl;
    cout << "Array c: " << c[0] << ", " << c[1] << endl;

    return 0;
}
