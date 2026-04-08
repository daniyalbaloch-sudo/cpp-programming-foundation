#include <iostream>

using namespace std;

// sum of numbers from 1 to 5 using for loop
int main() {
    int sum = 0;

    cout << "Sum of numbers from 1 to 5:" << endl;

    for (int a = 1; a <= 5; a++) {
        sum = sum + a;
        cout << "Adding " << a << " -> Current Sum: " << sum << endl;
    }

    cout << "\nTotal Sum = " << sum << endl;

    return 0;
}
