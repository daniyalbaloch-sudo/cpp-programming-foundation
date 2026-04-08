#include <iostream>

using namespace std;

// sum of even numbers
int main() {
    int limit;

    cout << "Enter the upper limit: ";
    cin >> limit;

    int sum = 0;
    int num = limit;

    cout << "Sequence: ";
    while (num > 0) {
        if (num % 2 == 0) {
            sum += num;
            cout << num;
            if (num > 2) {
                cout << " + ";
            }
        }
        num--;
    }

    cout << " = " << sum << endl;
    cout << "Total Sum of Even Numbers = " << sum << endl;

    return 0;
}
