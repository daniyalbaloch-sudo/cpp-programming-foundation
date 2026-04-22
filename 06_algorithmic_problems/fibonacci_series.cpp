#include <iostream>

using namespace std;

// fibonacci series up to n terms
int main() {
    int terms;

    cout << "Enter number of terms: ";
    cin >> terms;

    if (terms <= 0) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    int n1 = 0;
    int n2 = 1;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= terms; i++) {
        if (i == 1) {
            cout << n1;
        } else if (i == 2) {
            cout << ", " << n2;
        } else {
            int next = n1 + n2;
            n1 = n2;
            n2 = next;
            cout << ", " << next;
        }
    }

    cout << endl;

    return 0;
}
